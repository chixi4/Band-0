/**
 * Minimal DNS server for Cardputer MITM AP.
 *
 * Intercepts A-record queries for configured domains and
 * returns the Mac's IP address. All other queries are
 * passed through (or simply not answered, letting the
 * device fall back to its configured DNS).
 *
 * Listens on UDP port 53.
 */

#include <string.h>
#include <lwip/sockets.h>
#include <lwip/err.h>
#include <esp_log.h>
#include "config.h"
#include "wifi_ap.h"

static const char *TAG = "dns";

static int s_dns_sock = -1;
static TaskHandle_t s_dns_task = NULL;

/* ── DNS Packet Structure ──────────────────────────────────── */
/* Minimal — only handles single-question A-record queries */

typedef struct __attribute__((packed)) {
    uint16_t id;
    uint16_t flags;
    uint16_t qdcount;
    uint16_t ancount;
    uint16_t nscount;
    uint16_t arcount;
} dns_header_t;

#define DNS_FLAG_RESPONSE   0x8000
#define DNS_FLAG_RECURSION  0x0100
#define DNS_TYPE_A          0x0001
#define DNS_CLASS_IN        0x0001

/* ── Domain Name Matching ──────────────────────────────────── */
static bool domain_matches(const char *domain, int domain_len,
                            const char *target)
{
    /* Simple case-insensitive comparison */
    if (domain_len != (int)strlen(target)) return false;
    for (int i = 0; i < domain_len; i++) {
        char a = domain[i];
        char b = target[i];
        if (a >= 'A' && a <= 'Z') a += 0x20;
        if (b >= 'A' && b <= 'Z') b += 0x20;
        if (a != b) return false;
    }
    return true;
}

/* ── Parse DNS Name (returns length, writes to buf) ────────── */
static int parse_dns_name(const uint8_t *data, int data_len, int pos,
                           char *buf, int buf_len)
{
    int out = 0;
    while (pos < data_len) {
        uint8_t len = data[pos];
        if (len == 0) {
            pos++;
            buf[out] = '\0';
            return pos;
        }
        if (len & 0xC0) {
            /* Pointer — we just stop parsing here */
            buf[out] = '\0';
            return pos + 2;
        }
        pos++;
        if (pos + len > data_len) return -1;
        if (out > 0 && out < buf_len - 1) buf[out++] = '.';
        for (int i = 0; i < len && out < buf_len - 1; i++) {
            buf[out++] = data[pos++];
        }
    }
    return -1;
}

/* ── Main DNS Server Task ──────────────────────────────────── */
static void dns_server_task(void *arg)
{
    (void)arg;

    struct sockaddr_in addr = {
        .sin_family = AF_INET,
        .sin_port = htons(53),
        .sin_addr = { .s_addr = INADDR_ANY },
    };

    s_dns_sock = socket(AF_INET, SOCK_DGRAM, 0);
    if (s_dns_sock < 0) {
        ESP_LOGE(TAG, "socket create failed");
        vTaskDelete(NULL);
        return;
    }

    int opt = 1;
    setsockopt(s_dns_sock, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));

    if (bind(s_dns_sock, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
        ESP_LOGE(TAG, "bind to port 53 failed (try running as root?)");
        close(s_dns_sock);
        s_dns_sock = -1;
        vTaskDelete(NULL);
        return;
    }

    ESP_LOGI(TAG, "DNS server listening on UDP:53");

    uint8_t buf[512];
    struct sockaddr_in client;
    socklen_t client_len = sizeof(client);

    while (1) {
        int len = recvfrom(s_dns_sock, buf, sizeof(buf), 0,
                           (struct sockaddr *)&client, &client_len);
        if (len < 12) continue;

        dns_header_t *hdr = (dns_header_t *)buf;

        /* Only respond to standard queries (not responses) */
        if (ntohs(hdr->flags) & DNS_FLAG_RESPONSE) continue;
        if (ntohs(hdr->qdcount) == 0) continue;

        /* Parse question */
        int pos = sizeof(dns_header_t);
        char qname[256];
        pos = parse_dns_name(buf, len, pos, qname, sizeof(qname));
        if (pos < 0 || pos + 4 > len) continue;

        uint16_t qtype = ntohs(*(uint16_t *)(buf + pos));
        uint16_t qclass = ntohs(*(uint16_t *)(buf + pos + 2));

        /* Check if this is a domain we want to redirect */
        const char *mac_ip = wifi_ap_get_mac_ip();
        bool should_redirect = false;

        if (qtype == DNS_TYPE_A && qclass == DNS_CLASS_IN) {
            for (int i = 0; i < DNS_REDIRECT_COUNT; i++) {
                if (domain_matches(qname, strlen(qname), DNS_REDIRECT_DOMAINS[i])) {
                    should_redirect = true;
                    break;
                }
            }
        }

        if (!should_redirect) continue;

        /* Build response */
        dns_header_t resp_hdr = {
            .id = hdr->id,
            .flags = htons(DNS_FLAG_RESPONSE | DNS_FLAG_RECURSION | 0x0080),
            .qdcount = htons(1),
            .ancount = htons(1),
            .nscount = 0,
            .arcount = 0,
        };

        int rpos = 0;
        memcpy(buf + rpos, &resp_hdr, sizeof(resp_hdr));
        rpos += sizeof(resp_hdr);

        /* Echo back the question */
        int qlen = pos + 4 - sizeof(dns_header_t);
        memcpy(buf + rpos, buf + sizeof(dns_header_t), qlen);
        rpos += qlen;

        /* Answer: type A, class IN, TTL 60s */
        uint16_t rtype = htons(DNS_TYPE_A);
        uint16_t rclass = htons(DNS_CLASS_IN);
        uint32_t ttl = htonl(60);
        uint16_t rdlen = htons(4);

        memcpy(buf + rpos, &rtype, 2); rpos += 2;
        memcpy(buf + rpos, &rclass, 2); rpos += 2;
        memcpy(buf + rpos, &ttl, 4); rpos += 4;
        memcpy(buf + rpos, &rdlen, 2); rpos += 2;

        /* IP address */
        struct in_addr ip;
        inet_aton(mac_ip, &ip);
        memcpy(buf + rpos, &ip.s_addr, 4); rpos += 4;

        sendto(s_dns_sock, buf, rpos, 0,
               (struct sockaddr *)&client, client_len);

        ESP_LOGI(TAG, "DNS: %s → %s", qname, mac_ip);
    }
}

/* ── Start DNS Server ──────────────────────────────────────── */
void dns_server_start(void)
{
    if (s_dns_task) return;

    xTaskCreatePinnedToCore(dns_server_task, "dns", 4096, NULL, 5,
                            &s_dns_task, 0);
}

void dns_server_stop(void)
{
    if (s_dns_sock >= 0) {
        close(s_dns_sock);
        s_dns_sock = -1;
    }
    if (s_dns_task) {
        vTaskDelete(s_dns_task);
        s_dns_task = NULL;
    }
}
