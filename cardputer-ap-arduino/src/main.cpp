/**
 * Band-0 MITM AP — ESP32-S3 2.4GHz AP + DNS + Web Config
 *
 * 架构：
 *   ESP32-S3 开 2.4GHz 热点 "Band-0-MITM"
 *   DNS 劫持 dot.mindreset.tech → Mac IP
 *   Web UI http://192.168.4.1 配置 Mac IP
 *   Mac 运行 local_cloud.py 提供魔改固件
 */

#include <Arduino.h>
#include <WiFi.h>
#include <WebServer.h>
#include <ArduinoJson.h>
#include <WiFiUdp.h>

#define AP_SSID      "adv-2.4G"
#define AP_PASSWORD  "mitm1234"
#define AP_CHANNEL   6
#define AP_IP        IPAddress(192,168,4,1)
#define AP_NETMASK   IPAddress(255,255,255,0)

static IPAddress mac_ip(192, 168, 4, 2);
static WebServer server(80);
static WiFiUDP udp;

static const char* REDIRECT_DOMAINS[] = {
  "dot.mindreset.tech", "os-cdn.mindreset.tech",
  "mindreset.tech", "www.mindreset.tech"
};

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

  Serial.printf("[DNS] %s → %s\n", domain, mac_ip.toString().c_str());
}

/* ── Web Handlers ─────────────────────────────────────────── */

static String html_page() {
  return R"(<!DOCTYPE html>
<html><head><meta charset='utf-8'><meta name='viewport' content='width=device-width,initial-scale=1'>
<title>Band-0 MITM AP</title>
<style>
body{font-family:sans-serif;margin:20px;background:#f0f0f0}
.card{background:#fff;border-radius:10px;padding:16px;margin:12px 0;box-shadow:0 2px 6px rgba(0,0,0,.1)}
h2{color:#333;font-size:16px;margin:0 0 8px}
label{display:block;margin:8px 0 4px;color:#666;font-size:13px}
input{width:100%;padding:8px;border:1px solid #ddd;border-radius:6px;box-sizing:border-box;font-size:14px}
button{background:#007aff;color:#fff;border:none;padding:10px 20px;border-radius:6px;font-size:14px;margin-top:10px;cursor:pointer}
code{background:#eee;padding:2px 6px;border-radius:3px}
pre{background:#f5f5f5;padding:8px;border-radius:4px;overflow-x:auto;font-size:12px}
</style></head><body>
<h1 style='font-size:20px'>🔧 Band-0 MITM AP</h1>
<div class='card'><h2>Status</h2><div id='status'>Loading...</div></div>
<div class='card'><h2>Mac MITM IP</h2>
<label>IP of the Mac running local_cloud.py</label>
<input id='mac_ip' value=')" + mac_ip.toString() + R"(' />
<button onclick='saveConfig()'>Save</button></div>
<div class='card'><h2>Usage</h2>
<ol style='font-size:13px;color:#555;padding-left:20px'>
<li>Connect Mac to <b>Band-0-MITM</b> Wi-Fi</li>
<li>Set Mac's IP above, click Save</li>
<li>On Mac: <pre>python3 tools/local_cloud.py --host 0.0.0.0 --port 8088 --public-host <i>YOUR_MAC_IP</i>:8088 --firmware build/firmware_1.2.5_hello_ota.bin</pre></li>
<li>Connect Band-0 device to this AP</li>
<li>DNS auto-redirects dot.mindreset.tech → your Mac</li>
</ol></div>
<script>
async function load(){const r=await fetch('/api/status');const d=await r.json();
document.getElementById('status').innerHTML='SSID: <b>'+d.ssid+'</b><br>Mac IP: <b>'+d.mac_ip+'</b><br>Connected: <b>'+d.stations+'</b>';}
async function saveConfig(){const ip=document.getElementById('mac_ip').value;
await fetch('/api/config',{method:'POST',body:JSON.stringify({mac_ip:ip})});alert('Saved!');load();}
load();setInterval(load,3000);
</script></body></html>)";
}

void setup_routes() {
  server.on("/", []() { server.send(200, "text/html", html_page()); });

  server.on("/api/status", []() {
    String j = "{\"ssid\":\"" + String(AP_SSID) + "\",\"mac_ip\":\"" + mac_ip.toString() + "\",\"stations\":" + String(WiFi.softAPgetStationNum()) + "}";
    server.send(200, "application/json", j);
  });

  server.on("/api/config", HTTP_POST, []() {
    if (!server.hasArg("plain")) { server.send(400, "application/json", "{\"error\":\"no body\"}"); return; }
    JsonDocument doc;
    if (deserializeJson(doc, server.arg("plain"))) { server.send(400, "application/json", "{\"error\":\"bad json\"}"); return; }
    if (doc["mac_ip"].is<const char*>()) {
      IPAddress new_ip;
      if (new_ip.fromString(doc["mac_ip"].as<const char*>())) {
        mac_ip = new_ip;
        Serial.printf("[CONFIG] mac_ip = %s\n", mac_ip.toString().c_str());
      }
    }
    server.send(200, "application/json", "{\"status\":\"ok\"}");
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

  // Start AP
  Serial.printf("[WiFi] Starting '%s'...\n", AP_SSID);
  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(AP_IP, AP_IP, AP_NETMASK);
  WiFi.softAP(AP_SSID, AP_PASSWORD, AP_CHANNEL, 0, 8);
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

  Serial.println("[READY] Connect Mac + Band-0 to this AP");
}

void loop() {
  server.handleClient();
  handle_dns();

  static unsigned long last_report = 0;
  if (millis() - last_report > 10000) {
    last_report = millis();
    int sta = WiFi.softAPgetStationNum();
    Serial.printf("[sta] %d devices connected\n", sta);
  }

  delay(5);
}
