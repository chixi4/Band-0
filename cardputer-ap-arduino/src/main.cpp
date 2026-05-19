/**
 * Band-0 MITM AP — ESP32-S3 2.4GHz AP + DNS + Web Config
 *
 * 架构：
 *   ESP32-S3 开 2.4GHz 热点 "ADV 2.4G"
 *   DNS 劫持 dot.mindreset.tech → Mac IP
 *   Web UI http://192.168.4.1 配置 Mac IP
 *   Mac 运行 local_cloud.py 提供魔改固件
 */

#include <Arduino.h>
#include <WiFi.h>
#include <WebServer.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>
#include <WiFiUdp.h>
#include <Preferences.h>
#include <SPIFFS.h>
#include "mbedtls/base64.h"
#include "esp_wifi.h"
#include "tcpip_adapter.h"

#define AP_SSID      "ADV 2.4G"
#define AP_PASSWORD  "mitm1234"
#define AP_CHANNEL   6
#define AP_IP        IPAddress(192,168,4,1)
#define AP_NETMASK   IPAddress(255,255,255,0)

#define BAND0_DEFAULT_IP       IPAddress(192,168,4,2)
#define BAND0_SETUP_SSID       "Band-0 Setup"
#define BAND0_SETUP_IP         IPAddress(192,168,50,1)
#define FIRMWARE_PATH          "/band0.bin"
#define SERIAL_MAX_LINE        4096
#define SERIAL_CHUNK_DECODE_MAX 1536

static IPAddress mac_ip(192, 168, 4, 2);
static IPAddress band0_ip = BAND0_DEFAULT_IP;
static WebServer server(80);
static WiFiUDP udp;
static Preferences prefs;
static uint32_t dns_hits = 0;
static char last_dns_domain[96] = "-";
static uint32_t last_dns_ms = 0;
static char bridge_status[96] = "idle";
static uint32_t band_http_count = 0;
static uint32_t ota_start_count = 0;
static uint32_t fw_download_count = 0;
static size_t fw_last_served_size = 0;

static File fw_upload_file;
static bool fw_upload_active = false;
static size_t fw_expected_size = 0;
static size_t fw_received = 0;
static char fw_expected_sha256[65] = "";

static const char* REDIRECT_DOMAINS[] = {
  "dot.mindreset.tech", "os-cdn.mindreset.tech",
  "mindreset.tech", "www.mindreset.tech"
};

static void handle_dns();
static void handle_serial_bridge();

static void load_config() {
  prefs.begin("mitm-ap", false);
  String stored = prefs.getString("mac_ip", "");
  IPAddress parsed;
  if (stored.length() && parsed.fromString(stored)) {
    mac_ip = parsed;
  }
  stored = prefs.getString("band_ip", "");
  if (stored.length() && parsed.fromString(stored)) {
    band0_ip = parsed;
  }
  String sha = prefs.getString("fw_sha256", "");
  if (sha.length() < sizeof(fw_expected_sha256)) {
    strlcpy(fw_expected_sha256, sha.c_str(), sizeof(fw_expected_sha256));
  }
}

static void save_mac_ip() {
  prefs.putString("mac_ip", mac_ip.toString());
}

static void save_band0_ip() {
  prefs.putString("band_ip", band0_ip.toString());
}

static void set_bridge_status(const char *status) {
  strlcpy(bridge_status, status ? status : "idle", sizeof(bridge_status));
  Serial.printf("[BRIDGE] %s\n", bridge_status);
}

static size_t firmware_size() {
  if (!SPIFFS.exists(FIRMWARE_PATH)) return 0;
  File f = SPIFFS.open(FIRMWARE_PATH, "r");
  if (!f) return 0;
  size_t size = f.size();
  f.close();
  return size;
}

static void ensure_softap_started() {
  WiFi.softAPConfig(AP_IP, AP_IP, AP_NETMASK);
  WiFi.softAP(AP_SSID, AP_PASSWORD, AP_CHANNEL, 0, 8);
}

static void send_json(int code, const String& body) {
  server.sendHeader("Access-Control-Allow-Origin", "*");
  server.sendHeader("Access-Control-Allow-Methods", "GET,POST,OPTIONS");
  server.sendHeader("Access-Control-Allow-Headers", "Content-Type");
  server.send(code, "application/json", body);
}

static void add_status_fields(JsonDocument &doc) {
  doc["device"] = "adv-bridge";
  doc["ssid"] = AP_SSID;
  doc["password"] = AP_PASSWORD;
  doc["ap_ip"] = WiFi.softAPIP().toString();
  doc["sta_ip"] = WiFi.localIP().toString();
  doc["sta_connected"] = WiFi.status() == WL_CONNECTED;
  doc["mac_ip"] = mac_ip.toString();
  doc["band0_ip"] = band0_ip.toString();
  doc["stations"] = WiFi.softAPgetStationNum();
  doc["dns_hits"] = dns_hits;
  doc["last_dns_domain"] = last_dns_domain;
  doc["last_dns_age_ms"] = last_dns_ms ? (int32_t)(millis() - last_dns_ms) : -1;
  doc["band_http_count"] = band_http_count;
  doc["ota_start_count"] = ota_start_count;
  doc["fw_download_count"] = fw_download_count;
  doc["fw_last_served_size"] = fw_last_served_size;
  doc["firmware_path"] = FIRMWARE_PATH;
  doc["firmware_size"] = firmware_size();
  doc["firmware_sha256_expected"] = fw_expected_sha256;
  doc["upload_active"] = fw_upload_active;
  doc["upload_received"] = fw_received;
  doc["upload_expected"] = fw_expected_size;
  doc["bridge_status"] = bridge_status;
  doc["uptime_ms"] = millis();

  JsonArray leases = doc["station_leases"].to<JsonArray>();
  wifi_sta_list_t wifi_sta_list = {};
  tcpip_adapter_sta_list_t adapter_sta_list = {};
  if (esp_wifi_ap_get_sta_list(&wifi_sta_list) == ESP_OK &&
      tcpip_adapter_get_sta_list(&wifi_sta_list, &adapter_sta_list) == ESP_OK) {
    for (int i = 0; i < adapter_sta_list.num; i++) {
      JsonObject item = leases.add<JsonObject>();
      char mac[18];
      snprintf(mac, sizeof(mac), "%02X:%02X:%02X:%02X:%02X:%02X",
               adapter_sta_list.sta[i].mac[0], adapter_sta_list.sta[i].mac[1],
               adapter_sta_list.sta[i].mac[2], adapter_sta_list.sta[i].mac[3],
               adapter_sta_list.sta[i].mac[4], adapter_sta_list.sta[i].mac[5]);
      item["mac"] = mac;
      item["ip"] = IPAddress(adapter_sta_list.sta[i].ip.addr).toString();
    }
  }
}

static String band0_base_url() {
  return String("http://") + band0_ip.toString();
}

static bool http_request(const String &method, const String &url, const String &body,
                         String &response, int &status_code) {
  HTTPClient http;
  http.setConnectTimeout(3500);
  http.setTimeout(10000);
  if (!http.begin(url)) {
    status_code = -1;
    response = "http.begin failed";
    return false;
  }
  if (method == "POST") {
    http.addHeader("Content-Type", "application/json");
    status_code = http.POST(body);
  } else {
    status_code = http.GET();
  }
  if (status_code > 0) {
    response = http.getString();
  } else {
    response = http.errorToString(status_code);
  }
  http.end();
  band_http_count++;
  return status_code >= 200 && status_code < 300;
}

static String make_ota_body(bool reboot) {
  JsonDocument doc;
  doc["url"] = String("http://") + AP_IP.toString() + "/fw.bin";
  doc["ssid"] = AP_SSID;
  doc["pwd"] = AP_PASSWORD;
  doc["reboot"] = reboot;
  String body;
  serializeJson(doc, body);
  return body;
}

static bool post_ota_to_host(const String &host, bool reboot, String &response, int &status_code) {
  if (firmware_size() == 0) {
    status_code = -2;
    response = "no firmware uploaded to ADV";
    return false;
  }
  String url = String("http://") + host + "/api/ota/url";
  return http_request("POST", url, make_ota_body(reboot), response, status_code);
}

static bool connect_sta_to_band_setup(const char *ssid, const char *pwd, uint32_t timeout_ms) {
  set_bridge_status("connecting to Band-0 Setup");
  WiFi.mode(WIFI_AP_STA);
  ensure_softap_started();
  WiFi.begin(ssid && ssid[0] ? ssid : BAND0_SETUP_SSID, pwd ? pwd : "");

  uint32_t start = millis();
  while (WiFi.status() != WL_CONNECTED && millis() - start < timeout_ms) {
    server.handleClient();
    handle_dns();
    delay(50);
  }

  if (WiFi.status() == WL_CONNECTED) {
    Serial.printf("[STA] connected: %s ip=%s\n",
                  ssid && ssid[0] ? ssid : BAND0_SETUP_SSID,
                  WiFi.localIP().toString().c_str());
    set_bridge_status("Band-0 Setup connected");
    return true;
  }
  set_bridge_status("Band-0 Setup connect failed");
  return false;
}

/* ── DNS Handler ──────────────────────────────────────────── */

static bool domain_match(const char* d, const char* t) {
  int i = 0;
  while (d[i] && t[i]) {
    char a = d[i], b = t[i];
    if (a >= 'A' && a <= 'Z') a |= 0x20;
    if (b >= 'A' && b <= 'Z') b |= 0x20;
    if (a != b) return false;
    i++;
  }
  return d[i] == 0 && t[i] == 0;
}

static void handle_dns() {
  int pkt = udp.parsePacket();
  if (!pkt) return;

  uint8_t buf[512];
  int len = udp.read(buf, sizeof(buf));
  if (len < 12) return;

  // Must be a query (not response), with exactly 1 question
  if (buf[2] & 0x80) return;
  if (buf[4] != 0 || buf[5] != 1) return;

  // Save client info before we modify buf
  IPAddress client_ip = udp.remoteIP();
  uint16_t client_port = udp.remotePort();

  // Parse domain name from the question (starts at offset 12)
  char domain[128];
  int di = 0;
  int pos = 12;  // skip DNS header

  // Walk through labels
  while (pos < len && di < 126) {
    uint8_t l = buf[pos++];
    if (l == 0) break;  // end of name
    if (l & 0xC0) {  // compression pointer
      pos++;  // skip second byte of pointer
      break;
    }
    if (pos + l > len) return;
    if (di > 0) domain[di++] = '.';
    for (int i = 0; i < l && pos < len && di < 126; i++) {
      domain[di++] = buf[pos++];
    }
  }
  domain[di] = '\0';

  // Now pos points after the name null (or pointer)
  // QTYPE (2 bytes) + QCLASS (2 bytes)
  if (pos + 4 > len) return;
  uint16_t qtype = (buf[pos] << 8) | buf[pos + 1];
  if (qtype != 1) return;  // A record only, ignore others

  // Check if this domain should be redirected
  bool should_redirect = false;
  for (int i = 0; i < 4; i++) {
    if (domain_match(domain, REDIRECT_DOMAINS[i])) {
      should_redirect = true;
      break;
    }
  }
  if (!should_redirect) return;

  // ── Build response ────────────────────────────────────
  // Header: copy ID, set QR+RA, QD=1, AN=1
  uint8_t resp[256];
  int rp = 0;

  // ID
  resp[rp++] = buf[0];
  resp[rp++] = buf[1];
  // Flags: QR=1, OPCODE=0, AA=0, TC=0, RD=1, RA=1, RCODE=0
  resp[rp++] = 0x81;
  resp[rp++] = 0x80;
  // QDCOUNT=1, ANCOUNT=1, NSCOUNT=0, ARCOUNT=0
  resp[rp++] = 0; resp[rp++] = 1;
  resp[rp++] = 0; resp[rp++] = 1;
  resp[rp++] = 0; resp[rp++] = 0;
  resp[rp++] = 0; resp[rp++] = 0;

  // Question section: copy from original query starting at offset 12
  // Question = QNAME (variable) + QTYPE (2) + QCLASS (2)
  int qname_len = pos - 12;  // bytes of the QNAME portion
  int qsection_len = qname_len + 4;  // QNAME + QTYPE + QCLASS
  memcpy(resp + rp, buf + 12, qsection_len);
  rp += qsection_len;

  // Answer section
  // Name pointer (back to question at offset 12)
  resp[rp++] = 0xC0;
  resp[rp++] = 0x0C;
  // TYPE: A (1)
  resp[rp++] = 0x00;
  resp[rp++] = 0x01;
  // CLASS: IN (1)
  resp[rp++] = 0x00;
  resp[rp++] = 0x01;
  // TTL: 60 seconds
  resp[rp++] = 0x00; resp[rp++] = 0x00; resp[rp++] = 0x00; resp[rp++] = 0x3C;
  // RDLENGTH: 4
  resp[rp++] = 0x00;
  resp[rp++] = 0x04;
  // RDATA: IP address
  resp[rp++] = mac_ip[0];
  resp[rp++] = mac_ip[1];
  resp[rp++] = mac_ip[2];
  resp[rp++] = mac_ip[3];

  udp.beginPacket(client_ip, client_port);
  udp.write(resp, rp);
  udp.endPacket();

  dns_hits++;
  strlcpy(last_dns_domain, domain, sizeof(last_dns_domain));
  last_dns_ms = millis();
  Serial.printf("[DNS] %s → %s\n", domain, mac_ip.toString().c_str());
}

/* ── USB Serial Bridge ─────────────────────────────────────── */

static void serial_send_doc(JsonDocument &doc) {
  serializeJson(doc, Serial);
  Serial.println();
}

static void serial_ok(int id, const char *cmd, JsonDocument &payload) {
  payload["id"] = id;
  payload["cmd"] = cmd;
  payload["ok"] = true;
  serial_send_doc(payload);
}

static void serial_error(int id, const char *cmd, const char *message) {
  JsonDocument doc;
  doc["id"] = id;
  doc["cmd"] = cmd ? cmd : "";
  doc["ok"] = false;
  doc["error"] = message ? message : "error";
  serial_send_doc(doc);
}

static void handle_fw_begin(int id, const char *cmd, JsonDocument &req) {
  if (fw_upload_active) {
    fw_upload_file.close();
    fw_upload_active = false;
  }

  fw_expected_size = req["size"] | 0;
  fw_received = 0;
  const char *sha = req["sha256"] | "";
  strlcpy(fw_expected_sha256, sha, sizeof(fw_expected_sha256));

  if (fw_expected_size == 0) {
    serial_error(id, cmd, "missing firmware size");
    return;
  }

  SPIFFS.remove(FIRMWARE_PATH);
  fw_upload_file = SPIFFS.open(FIRMWARE_PATH, "w");
  if (!fw_upload_file) {
    serial_error(id, cmd, "open firmware file failed");
    return;
  }

  fw_upload_active = true;
  set_bridge_status("firmware upload active");

  JsonDocument resp;
  resp["path"] = FIRMWARE_PATH;
  resp["expected_size"] = fw_expected_size;
  serial_ok(id, cmd, resp);
}

static void handle_fw_chunk(int id, const char *cmd, JsonDocument &req) {
  if (!fw_upload_active || !fw_upload_file) {
    serial_error(id, cmd, "upload not active");
    return;
  }

  const char *data = req["data"] | "";
  if (!data[0]) {
    serial_error(id, cmd, "missing data");
    return;
  }

  static uint8_t decoded[SERIAL_CHUNK_DECODE_MAX];
  size_t decoded_len = 0;
  int ret = mbedtls_base64_decode(decoded, sizeof(decoded), &decoded_len,
                                  (const unsigned char *)data, strlen(data));
  if (ret != 0) {
    serial_error(id, cmd, "base64 decode failed");
    return;
  }

  size_t written = fw_upload_file.write(decoded, decoded_len);
  if (written != decoded_len) {
    serial_error(id, cmd, "firmware write failed");
    return;
  }
  fw_received += written;

  JsonDocument resp;
  resp["received"] = fw_received;
  resp["expected"] = fw_expected_size;
  serial_ok(id, cmd, resp);
}

static void handle_fw_end(int id, const char *cmd) {
  if (!fw_upload_active) {
    serial_error(id, cmd, "upload not active");
    return;
  }
  fw_upload_file.flush();
  fw_upload_file.close();
  fw_upload_active = false;

  size_t size = firmware_size();
  bool size_ok = (size == fw_expected_size) && (fw_received == fw_expected_size);
  if (size_ok) {
    prefs.putString("fw_sha256", fw_expected_sha256);
    set_bridge_status("firmware upload complete");
  } else {
    set_bridge_status("firmware upload size mismatch");
  }

  JsonDocument resp;
  resp["path"] = FIRMWARE_PATH;
  resp["size"] = size;
  resp["received"] = fw_received;
  resp["expected"] = fw_expected_size;
  resp["sha256_expected"] = fw_expected_sha256;
  resp["size_ok"] = size_ok;
  if (size_ok) {
    serial_ok(id, cmd, resp);
  } else {
    resp["id"] = id;
    resp["cmd"] = cmd;
    resp["ok"] = false;
    resp["error"] = "firmware size mismatch";
    serial_send_doc(resp);
  }
}

static void handle_band_get(int id, const char *cmd, JsonDocument &req) {
  const char *path = req["path"] | "/api/status";
  String response;
  int code = 0;
  bool ok = http_request("GET", band0_base_url() + path, "", response, code);

  JsonDocument resp;
  resp["http_status"] = code;
  resp["body"] = response;
  if (ok) serial_ok(id, cmd, resp);
  else {
    resp["id"] = id;
    resp["cmd"] = cmd;
    resp["ok"] = false;
    resp["error"] = "Band-0 GET failed";
    serial_send_doc(resp);
  }
}

static void handle_wifi_scan(int id, const char *cmd) {
  set_bridge_status("wifi scan");
  WiFi.mode(WIFI_AP_STA);
  ensure_softap_started();
  int n = WiFi.scanNetworks(false, true);

  JsonDocument resp;
  JsonArray arr = resp["networks"].to<JsonArray>();
  for (int i = 0; i < n; i++) {
    JsonObject item = arr.add<JsonObject>();
    item["ssid"] = WiFi.SSID(i);
    item["rssi"] = WiFi.RSSI(i);
    item["channel"] = WiFi.channel(i);
    item["encryption"] = (int)WiFi.encryptionType(i);
    item["bssid"] = WiFi.BSSIDstr(i);
  }
  resp["count"] = n;
  set_bridge_status("idle");
  serial_ok(id, cmd, resp);
}

static void handle_band_post(int id, const char *cmd, JsonDocument &req) {
  const char *path = req["path"] | "/";
  String body;
  if (req["body"].is<const char *>()) {
    body = req["body"].as<const char *>();
  } else if (!req["payload"].isNull()) {
    serializeJson(req["payload"], body);
  }

  String response;
  int code = 0;
  bool ok = http_request("POST", band0_base_url() + path, body, response, code);

  JsonDocument resp;
  resp["http_status"] = code;
  resp["body"] = response;
  if (ok) serial_ok(id, cmd, resp);
  else {
    resp["id"] = id;
    resp["cmd"] = cmd;
    resp["ok"] = false;
    resp["error"] = "Band-0 POST failed";
    serial_send_doc(resp);
  }
}

static void handle_ota_start(int id, const char *cmd, JsonDocument &req) {
  bool reboot = req["reboot"].is<bool>() ? req["reboot"].as<bool>() : true;
  if (req["band_ip"].is<const char *>()) {
    IPAddress parsed;
    if (!parsed.fromString(req["band_ip"].as<const char *>())) {
      serial_error(id, cmd, "invalid band_ip");
      return;
    }
    band0_ip = parsed;
    save_band0_ip();
  }

  String response;
  int code = 0;
  bool ok = post_ota_to_host(band0_ip.toString(), reboot, response, code);
  if (ok) {
    ota_start_count++;
    set_bridge_status(reboot ? "direct OTA reboot requested" : "direct OTA staged");
  }

  JsonDocument resp;
  resp["http_status"] = code;
  resp["body"] = response;
  resp["band0_ip"] = band0_ip.toString();
  resp["reboot"] = reboot;
  if (ok) serial_ok(id, cmd, resp);
  else {
    resp["id"] = id;
    resp["cmd"] = cmd;
    resp["ok"] = false;
    resp["error"] = "direct OTA request failed";
    serial_send_doc(resp);
  }
}

static void handle_provision_ota(int id, const char *cmd, JsonDocument &req) {
  const char *setup_ssid = req["setup_ssid"] | BAND0_SETUP_SSID;
  const char *setup_pwd = req["setup_pwd"] | "";
  bool reboot = req["reboot"].is<bool>() ? req["reboot"].as<bool>() : true;
  uint32_t timeout_ms = req["timeout_ms"] | 18000;

  if (firmware_size() == 0) {
    serial_error(id, cmd, "upload firmware before provision_ota");
    return;
  }

  if (!connect_sta_to_band_setup(setup_ssid, setup_pwd, timeout_ms)) {
    serial_error(id, cmd, "could not connect to Band-0 Setup");
    return;
  }

  String response;
  int code = 0;
  bool ok = post_ota_to_host(BAND0_SETUP_IP.toString(), reboot, response, code);
  if (ok) {
    ota_start_count++;
    set_bridge_status(reboot ? "setup OTA reboot requested" : "setup OTA staged");
  }

  JsonDocument resp;
  resp["http_status"] = code;
  resp["body"] = response;
  resp["setup_ssid"] = setup_ssid;
  resp["sta_ip"] = WiFi.localIP().toString();
  resp["reboot"] = reboot;
  if (ok) serial_ok(id, cmd, resp);
  else {
    resp["id"] = id;
    resp["cmd"] = cmd;
    resp["ok"] = false;
    resp["error"] = "Band-0 Setup OTA request failed";
    serial_send_doc(resp);
  }
}

static void handle_serial_command(const String &line) {
  JsonDocument req;
  DeserializationError err = deserializeJson(req, line);
  if (err) {
    serial_error(0, "parse", "bad json");
    return;
  }

  int id = req["id"] | 0;
  const char *cmd = req["cmd"] | "";
  if (!cmd[0]) {
    serial_error(id, "", "missing cmd");
    return;
  }

  if (!strcmp(cmd, "ping")) {
    JsonDocument resp;
    resp["device"] = "adv-bridge";
    resp["version"] = "0.2";
    serial_ok(id, cmd, resp);
  } else if (!strcmp(cmd, "status")) {
    JsonDocument resp;
    add_status_fields(resp);
    serial_ok(id, cmd, resp);
  } else if (!strcmp(cmd, "set_config")) {
    if (req["mac_ip"].is<const char *>()) {
      IPAddress parsed;
      if (!parsed.fromString(req["mac_ip"].as<const char *>())) {
        serial_error(id, cmd, "invalid mac_ip");
        return;
      }
      mac_ip = parsed;
      save_mac_ip();
    }
    if (req["band_ip"].is<const char *>()) {
      IPAddress parsed;
      if (!parsed.fromString(req["band_ip"].as<const char *>())) {
        serial_error(id, cmd, "invalid band_ip");
        return;
      }
      band0_ip = parsed;
      save_band0_ip();
    }
    JsonDocument resp;
    add_status_fields(resp);
    serial_ok(id, cmd, resp);
  } else if (!strcmp(cmd, "scan")) {
    handle_wifi_scan(id, cmd);
  } else if (!strcmp(cmd, "fw_begin")) {
    handle_fw_begin(id, cmd, req);
  } else if (!strcmp(cmd, "fw_chunk")) {
    handle_fw_chunk(id, cmd, req);
  } else if (!strcmp(cmd, "fw_end")) {
    handle_fw_end(id, cmd);
  } else if (!strcmp(cmd, "band_status")) {
    req["path"] = "/api/status";
    handle_band_get(id, cmd, req);
  } else if (!strcmp(cmd, "band_usage")) {
    req["path"] = "/api/usage";
    handle_band_get(id, cmd, req);
  } else if (!strcmp(cmd, "band_get")) {
    handle_band_get(id, cmd, req);
  } else if (!strcmp(cmd, "band_post")) {
    handle_band_post(id, cmd, req);
  } else if (!strcmp(cmd, "ota_start")) {
    handle_ota_start(id, cmd, req);
  } else if (!strcmp(cmd, "provision_ota")) {
    handle_provision_ota(id, cmd, req);
  } else {
    serial_error(id, cmd, "unknown cmd");
  }
}

static void handle_serial_bridge() {
  static String line;
  if (!line.length()) {
    line.reserve(SERIAL_MAX_LINE);
  }

  while (Serial.available() > 0) {
    char c = (char)Serial.read();
    if (c == '\r') continue;
    if (c == '\n') {
      String one = line;
      line = "";
      one.trim();
      if (one.length()) {
        handle_serial_command(one);
      }
      continue;
    }
    if (line.length() < SERIAL_MAX_LINE - 1) {
      line += c;
    } else {
      line = "";
      serial_error(0, "serial", "line too long");
    }
  }
}

/* ── Web Handlers ─────────────────────────────────────────── */

static String html_page() {
  return R"(<!DOCTYPE html>
<html><head><meta charset='utf-8'><meta name='viewport' content='width=device-width,initial-scale=1'>
<title>ADV 2.4G MITM Console</title>
<style>
*{box-sizing:border-box}body{font-family:-apple-system,BlinkMacSystemFont,"Segoe UI",sans-serif;margin:0;background:#f6f7f9;color:#171717}
main{max-width:760px;margin:0 auto;padding:22px 16px 36px}
.top{display:flex;align-items:flex-end;justify-content:space-between;gap:12px;margin-bottom:14px}
h1{font-size:23px;margin:0;letter-spacing:0}.sub{font-size:13px;color:#666;margin-top:3px}
.grid{display:grid;grid-template-columns:repeat(2,minmax(0,1fr));gap:12px}@media(max-width:620px){.grid{grid-template-columns:1fr}.top{display:block}}
.card{background:#fff;border:1px solid #e5e7eb;border-radius:8px;padding:16px;margin:12px 0;box-shadow:0 1px 2px rgba(0,0,0,.04)}
.metric{font-size:28px;font-weight:700;line-height:1}.label{font-size:12px;color:#666;margin-top:5px}
h2{color:#222;font-size:15px;margin:0 0 10px}
label{display:block;margin:8px 0 4px;color:#555;font-size:13px}
input{width:100%;padding:10px;border:1px solid #d7dbe0;border-radius:6px;font-size:15px}
button{background:#111;color:#fff;border:none;padding:10px 16px;border-radius:6px;font-size:14px;margin-top:10px;cursor:pointer}
button.secondary{background:#eceff3;color:#111}
code{background:#eef0f3;padding:2px 6px;border-radius:4px}
pre{background:#111;color:#f5f5f5;padding:10px;border-radius:6px;overflow-x:auto;font-size:12px;line-height:1.45}
.ok{color:#0f7a3a}.warn{color:#a15c00}.row{display:flex;justify-content:space-between;gap:10px;border-top:1px solid #eee;padding-top:8px;margin-top:8px;font-size:13px}
.steps{font-size:13px;color:#444;padding-left:20px;line-height:1.65}.muted{color:#777}
</style></head><body>
<main>
<div class='top'><div><h1>ADV 2.4G MITM Console</h1><div class='sub'>Band-0 OTA bootstrap, DNS redirect, local-cloud staging</div></div><button class='secondary' onclick='load()'>Refresh</button></div>
<div class='grid'>
<div class='card'><div class='metric' id='stations'>-</div><div class='label'>connected devices</div></div>
<div class='card'><div class='metric' id='dns_hits'>-</div><div class='label'>DNS redirect hits</div></div>
</div>
<div class='card'><h2>Status</h2><div id='status'>Loading...</div></div>
<div class='card'><h2>Bridge Config</h2>
<label>Mac MITM IP (legacy DNS redirect target)</label>
<input id='mac_ip' value=')" + mac_ip.toString() + R"(' />
<label>Band-0 IP on ADV AP</label>
<input id='band_ip' value=')" + band0_ip.toString() + R"(' />
<button onclick='saveConfig()'>Save</button></div>
<div class='card'><h2>USB Bridge Runbook</h2>
<ol class='steps'>
<li>Keep Mac on its normal Internet Wi-Fi. Do not join <b>ADV 2.4G</b> from Mac.</li>
<li>Connect ADV to Mac by USB data cable.</li>
<li>Use <pre>python3 tools/adv_bridge.py status</pre></li>
<li>Upload firmware to ADV, then trigger Band-0 OTA from ADV.</li>
</ol><div class='muted'>ADV hosts <code>/fw.bin</code> locally and bridges Mac USB commands to Band-0 over Wi-Fi.</div></div>
</main>
<script>
async function load(){const r=await fetch('/api/status');const d=await r.json();
document.getElementById('stations').textContent=d.stations;
document.getElementById('dns_hits').textContent=d.dns_hits;
document.getElementById('status').innerHTML='<div class=row><span>SSID</span><b>'+d.ssid+'</b></div><div class=row><span>AP IP</span><b>'+d.ap_ip+'</b></div><div class=row><span>Band-0 IP</span><b>'+d.band0_ip+'</b></div><div class=row><span>Firmware</span><b>'+d.firmware_size+' bytes</b></div><div class=row><span>Bridge</span><b>'+d.bridge_status+'</b></div><div class=row><span>Last DNS</span><b>'+d.last_dns_domain+'</b></div><div class=row><span>Uptime</span><b>'+Math.floor(d.uptime_ms/1000)+'s</b></div>';
document.getElementById('mac_ip').value=d.mac_ip;document.getElementById('band_ip').value=d.band0_ip;}
async function saveConfig(){const ip=document.getElementById('mac_ip').value;
const bip=document.getElementById('band_ip').value;
const r=await fetch('/api/config',{method:'POST',headers:{'Content-Type':'application/json'},body:JSON.stringify({mac_ip:ip,band_ip:bip})});
if(!r.ok){alert(await r.text());return;}load();}
load();setInterval(load,3000);
</script></body></html>)";
}

void setup_routes() {
  server.on("/", []() { server.send(200, "text/html", html_page()); });
  server.on("/api/config", HTTP_OPTIONS, []() { send_json(204, ""); });

  server.on("/api/status", []() {
    JsonDocument doc;
    add_status_fields(doc);
    String j;
    serializeJson(doc, j);
    send_json(200, j);
  });

  server.on("/api/firmware/status", []() {
    JsonDocument doc;
    doc["path"] = FIRMWARE_PATH;
    doc["size"] = firmware_size();
    doc["sha256_expected"] = fw_expected_sha256;
    doc["upload_active"] = fw_upload_active;
    doc["upload_received"] = fw_received;
    doc["upload_expected"] = fw_expected_size;
    String j;
    serializeJson(doc, j);
    send_json(200, j);
  });

  server.on("/fw.bin", HTTP_GET, []() {
    if (!SPIFFS.exists(FIRMWARE_PATH)) {
      server.send(404, "text/plain", "firmware not uploaded");
      return;
    }
    File f = SPIFFS.open(FIRMWARE_PATH, "r");
    if (!f) {
      server.send(500, "text/plain", "firmware open failed");
      return;
    }
    fw_download_count++;
    fw_last_served_size = f.size();
    server.sendHeader("Cache-Control", "no-store");
    server.streamFile(f, "application/octet-stream");
    f.close();
  });

  server.on("/api/band/status", HTTP_GET, []() {
    String response;
    int code = 0;
    bool ok = http_request("GET", band0_base_url() + "/api/status", "", response, code);
    server.send(ok ? 200 : 502, "application/json", response);
  });

  server.on("/api/band/ota", HTTP_POST, []() {
    String response;
    int code = 0;
    bool ok = post_ota_to_host(band0_ip.toString(), true, response, code);
    if (ok) ota_start_count++;
    server.send(ok ? 200 : 502, "application/json", response);
  });

  server.on("/api/config", HTTP_POST, []() {
    if (!server.hasArg("plain")) { send_json(400, "{\"error\":\"no body\"}"); return; }
    JsonDocument doc;
    if (deserializeJson(doc, server.arg("plain"))) { send_json(400, "{\"error\":\"bad json\"}"); return; }
    if (doc["mac_ip"].is<const char*>()) {
      IPAddress new_ip;
      if (!new_ip.fromString(doc["mac_ip"].as<const char*>())) {
        send_json(400, "{\"error\":\"invalid mac_ip\"}");
        return;
      }
      mac_ip = new_ip;
      save_mac_ip();
      Serial.printf("[CONFIG] mac_ip = %s\n", mac_ip.toString().c_str());
    }
    if (doc["band_ip"].is<const char*>()) {
      IPAddress new_ip;
      if (!new_ip.fromString(doc["band_ip"].as<const char*>())) {
        send_json(400, "{\"error\":\"invalid band_ip\"}");
        return;
      }
      band0_ip = new_ip;
      save_band0_ip();
      Serial.printf("[CONFIG] band_ip = %s\n", band0_ip.toString().c_str());
    }
    send_json(200, "{\"status\":\"ok\"}");
  });

  server.onNotFound([]() {
    if (server.method() == HTTP_OPTIONS) {
      send_json(204, "");
      return;
    }
    server.send(404, "text/plain", "not found");
  });
}

/* ── Setup & Loop ─────────────────────────────────────────── */

void setup() {
  Serial.begin(115200);
  delay(2000);

  Serial.println("\n========================================");
  Serial.println("  Band-0 MITM AP");
  Serial.println("  Build: " __DATE__ " " __TIME__);
  Serial.println("========================================");

  load_config();

  if (SPIFFS.begin(true)) {
    Serial.printf("[FS] SPIFFS ready, firmware size=%u\n", (unsigned)firmware_size());
  } else {
    Serial.println("[FS] SPIFFS mount failed");
  }

  // Start AP
  Serial.printf("[WiFi] Starting '%s'...\n", AP_SSID);
  WiFi.mode(WIFI_AP);
  ensure_softap_started();
  Serial.printf("[WiFi] IP: %s\n", WiFi.softAPIP().toString().c_str());

  // Web server
  setup_routes();
  server.begin();
  Serial.printf("[HTTP] http://%s\n", WiFi.softAPIP().toString().c_str());

  // DNS
  if (udp.begin(53)) {
    Serial.println("[DNS] Ready on UDP:53");
    Serial.printf("[DNS] Redirecting target domains → %s\n", mac_ip.toString().c_str());
  } else {
    Serial.println("[DNS] FAILED to bind port 53!");
  }

  Serial.println("[READY] USB bridge active; keep Mac on Internet Wi-Fi");
}

void loop() {
  server.handleClient();
  handle_dns();
  handle_serial_bridge();

  static unsigned long last_report = 0;
  if (millis() - last_report > 10000) {
    last_report = millis();
    int sta = WiFi.softAPgetStationNum();
    Serial.printf("[sta] %d devices connected\n", sta);
  }

  delay(5);
}
