#!/usr/bin/env python3
"""
Dot. ESP32-C 抓包分析工具
用法: python analyze.py [pcapng文件路径]
"""
import struct, socket, sys, os

PCAPNG_FILE = r"D:\dev\Rand-0\hotspot_capture.pcapng"
if len(sys.argv) > 1:
    PCAPNG_FILE = sys.argv[1]

MARKER = bytes.fromhex('aaaa03000000')

def parse_packets(filepath):
    with open(filepath, 'rb') as f:
        data = f.read()
    packets = []
    pos = 0
    while pos + 28 < len(data):
        bt = struct.unpack_from('<I', data, pos)[0]
        bl = struct.unpack_from('<I', data, pos + 4)[0]
        if bt == 0x00000006:
            pkt_data = data[pos + 28:pos + 28 + struct.unpack_from('<I', data, pos + 20)[0]]
            idx = pkt_data.find(MARKER)
            if idx >= 0:
                ip_s = idx + 8
                if ip_s + 20 <= len(pkt_data):
                    ip_hdr = pkt_data[ip_s:ip_s+20]
                    src = socket.inet_ntoa(ip_hdr[12:16])
                    dst = socket.inet_ntoa(ip_hdr[16:20])
                    ihl = (ip_hdr[0] & 0x0F) * 4
                    ts = ip_s + ihl
                    info = {'src': src, 'dst': dst}
                    if ip_hdr[9] == 6 and ts + 20 <= len(pkt_data):
                        tcp = pkt_data[ts:ts+20]
                        info.update({'sp': struct.unpack_from('>H', tcp, 0)[0], 'dp': struct.unpack_from('>H', tcp, 2)[0]})
                        tcp_off = ((tcp[12] >> 4) & 0x0F) * 4
                        info['payload'] = pkt_data[ts + tcp_off:]
                    elif ip_hdr[9] == 17 and ts + 8 <= len(pkt_data):
                        udp = pkt_data[ts:ts+8]
                        info.update({'sp': struct.unpack_from('>H', udp, 0)[0], 'dp': struct.unpack_from('>H', udp, 2)[0]})
                        info['payload'] = pkt_data[ts + 8:]
                    packets.append(info)
        if bl == 0: break
        pos += bl
    return packets

def extract_dns_name(payload):
    if not payload or len(payload) < 12: return None
    try:
        qd = struct.unpack_from('>H', payload, 4)[0]
        if qd == 0: return None
        p = 12
        parts = []
        while p < len(payload):
            l = payload[p]
            if l == 0: p += 1; break
            if l & 0xC0: p += 2; break
            p += 1
            if p + l > len(payload): break
            parts.append(payload[p:p+l].decode('ascii', errors='replace'))
            p += l
        return '.'.join(parts) if parts else None
    except: return None

def extract_tls_sni(payload):
    if not payload or len(payload) < 50 or payload[0] != 0x16 or payload[5] != 0x01:
        return None
    try:
        p = 11 + 34
        p += 1 + payload[p]
        cs_len = struct.unpack_from('>H', payload, p)[0]; p += 2 + cs_len
        p += 1 + payload[p]
        if p + 2 > len(payload): return None
        ext_len = struct.unpack_from('>H', payload, p)[0]; p += 2
        while p + 4 <= p + ext_len and p + 4 <= len(payload):
            et = struct.unpack_from('>H', payload, p)[0]
            edl = struct.unpack_from('>H', payload, p + 2)[0]
            if et == 0x0000 and edl >= 5:
                nl = struct.unpack_from('>H', payload, p + 8)[0]
                return payload[p+10:p+10+nl].decode('ascii', errors='replace')
            p += 4 + edl
    except: pass
    return None

print("=" * 60)
print("  Dot. ESP32-C Packet Analyzer")
print("=" * 60)
print(f"  File: {PCAPNG_FILE}")

packets = parse_packets(PCAPNG_FILE)
print(f"  Packets: {len(packets)}")

# Find ESP32-C (.46) and PC (.188)
esp32_pkts = [p for p in packets if p['src'] == '192.168.137.46' or p['dst'] == '192.168.137.46']
pc_pkts = [p for p in packets if p['src'] == '192.168.137.188' or p['dst'] == '192.168.137.188']

print(f"\n  ESP32-C (.46): {len(esp32_pkts)} pkts")
print(f"  PC (.188):     {len(pc_pkts)} pkts")

print("\n" + "-" * 60)
print("ESP32-C TRAFFIC LOG")
print("-" * 60)

for p in esp32_pkts:
    src, dst = p['src'], p['dst']
    sp, dp = p.get('sp', 0), p.get('dp', 0)
    payload = p.get('payload', b'')
    extra = ""

    if dp == 53 or sp == 53:
        name = extract_dns_name(payload)
        if name: extra = f" [DNS: {name}]"
    elif dp == 123 or sp == 123:
        extra = " [NTP time sync]"
    elif payload and len(payload) > 5 and payload[0] == 0x16 and payload[5] == 0x01:
        sni = extract_tls_sni(payload)
        if sni: extra = f" [TLS -> {sni}]"
        else: extra = f" [TLS (no SNI)]"
    elif payload and len(payload) > 0:
        try:
            t = payload.decode('utf-8', errors='replace')
            r = ''.join(c if 32 <= ord(c) < 127 else '.' for c in t)[:80]
            if any(c.isprintable() and c != '.' for c in r[:20]):
                extra = f" [{r}]"
        except: pass

    print(f"  {src}:{sp} -> {dst}:{dp}{extra}")

print("\n" + "-" * 60)
print("SUMMARY")
print("-" * 60)

# DNS queries from ESP32-C
dns_queries = []
for p in esp32_pkts:
    name = extract_dns_name(p.get('payload', b''))
    if name: dns_queries.append(name)

print(f"\n[DNS Queries]")
for q in set(dns_queries):
    print(f"  {q}")

# TLS connections from ESP32-C
print(f"\n[TLS Connections]")
for p in esp32_pkts:
    if p['src'] == '192.168.137.46' and p.get('dp') == 443:
        print(f"  -> {p['dst']}:443")
        
print(f"\n[Firmware Server]")
print(f"  mindreset.tech -> 175.178.196.238:443")
print(f"  Product: Dot. / Quote/0 E-Ink Display")
print(f"  Developer: evnydd0sf (github.com/evnydd0sf)")
print(f"  Chip: ESP32-C3 (RISC-V, MAC OUI: 8c:8c:29 = Espressif)")
print(f"  TLS: mbedTLS, compact ClientHello, no SNI")
print(f"\n  NTP: ntp.aliyun.com (time sync for cert validation)")
print(f"  DoT: dot.mindreset.tech (encrypted DNS)")
print("=" * 60)
