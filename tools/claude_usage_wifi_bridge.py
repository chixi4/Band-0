#!/usr/bin/env python3
"""Claude Usage Wi-Fi bridge for Band-0.

This companion keeps the original cardputer-claude-usage bridge as the source
of truth for Claude OAuth, cache, error handling, and compact payload shape.
It adds the missing transport for this project:

  original bridge (:8787) -> ADV USB serial -> ADV 2.4G -> Band-0 HTTP API
"""

from __future__ import annotations

import argparse
import json
import os
import threading
import time
from dataclasses import dataclass, field
from http import HTTPStatus
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from typing import Any
from urllib.error import HTTPError, URLError
from urllib.parse import parse_qs, urlencode, urlparse
from urllib.request import Request, urlopen

from adv_bridge import (
    AdvBridge,
    BridgeError,
    DEFAULT_BAUD,
    candidate_ports,
    parse_http_body,
    probe_port,
)


DEFAULT_SOURCE = "http://127.0.0.1:8787"
DEFAULT_INTERVAL = 60


def compact(text: Any, max_len: int = 42) -> str:
    value = " ".join(str(text or "").split())
    if len(value) <= max_len:
        return value
    return value[: max_len - 1] + "."


def json_response(handler: BaseHTTPRequestHandler, status: int, body: dict[str, Any]) -> None:
    raw = json.dumps(body, ensure_ascii=False, separators=(",", ":")).encode("utf-8")
    handler.send_response(status)
    handler.send_header("Content-Type", "application/json; charset=utf-8")
    handler.send_header("Cache-Control", "no-store")
    handler.send_header("Access-Control-Allow-Origin", "*")
    handler.send_header("Access-Control-Allow-Methods", "GET,POST,OPTIONS")
    handler.send_header("Access-Control-Allow-Headers", "Content-Type")
    handler.send_header("Content-Length", str(len(raw)))
    handler.end_headers()
    handler.wfile.write(raw)


def html_response(handler: BaseHTTPRequestHandler, body: str) -> None:
    raw = body.encode("utf-8")
    handler.send_response(HTTPStatus.OK)
    handler.send_header("Content-Type", "text/html; charset=utf-8")
    handler.send_header("Cache-Control", "no-store")
    handler.send_header("Content-Length", str(len(raw)))
    handler.end_headers()
    handler.wfile.write(raw)


def error_payload(message: str) -> dict[str, Any]:
    now = int(time.time())
    return {
        "v": 1,
        "cu": None,
        "cr": None,
        "ri": "",
        "wu": None,
        "wr": None,
        "wi": "",
        "m": "",
        "d": False,
        "s": "error",
        "age": 0,
        "stale": False,
        "src": "wifi-bridge",
        "err": compact(message),
        "ts": now,
        "fs": now or 1,
    }


@dataclass
class BridgeState:
    auto_enabled: bool = False
    interval_seconds: int = DEFAULT_INTERVAL
    sync_count: int = 0
    last_sync_at: float = 0
    last_error: str = ""
    last_payload: dict[str, Any] | None = None
    last_usage: dict[str, Any] | None = None
    last_push: dict[str, Any] | None = None
    lock: threading.Lock = field(default_factory=threading.Lock)
    adv_lock: threading.Lock = field(default_factory=threading.Lock)
    stop_event: threading.Event = field(default_factory=threading.Event)


class UsageWifiBridge:
    def __init__(self, args: argparse.Namespace):
        self.args = args
        self.state = BridgeState(
            auto_enabled=args.auto,
            interval_seconds=args.interval,
        )
        self._resolved_adv_port = ""

    def source_json(self, path: str, query: dict[str, Any] | None = None, timeout: float = 12) -> dict[str, Any]:
        url = self.args.source.rstrip("/") + path
        if query:
            url += "?" + urlencode({k: v for k, v in query.items() if v is not None})
        headers = {"Accept": "application/json"}
        if self.args.bridge_token:
            headers["X-Bridge-Token"] = self.args.bridge_token
        req = Request(url, headers=headers)
        try:
            with urlopen(req, timeout=timeout) as resp:
                return json.loads(resp.read().decode("utf-8"))
        except HTTPError as exc:
            detail = exc.read().decode("utf-8", "replace")
            raise RuntimeError(f"source HTTP {exc.code}: {compact(detail, 120)}") from exc
        except (URLError, TimeoutError, json.JSONDecodeError) as exc:
            raise RuntimeError(f"source unavailable: {compact(exc)}") from exc

    def adv_cmd(self, name: str, timeout: float = 12, **payload: Any) -> dict[str, Any]:
        with self.state.adv_lock:
            bridge = self.open_adv_bridge()
            try:
                return bridge.cmd(name, timeout=timeout, **payload)
            finally:
                bridge.close()

    def open_adv_bridge(self) -> AdvBridge:
        if self.args.adv_port != "auto":
            return AdvBridge(self.args.adv_port, baud=self.args.baud, verbose=self.args.verbose)

        if self._resolved_adv_port:
            try:
                return AdvBridge(self._resolved_adv_port, baud=self.args.baud, verbose=self.args.verbose)
            except Exception:
                self._resolved_adv_port = ""

        for port in candidate_ports():
            if probe_port(port, self.args.baud, verbose=False):
                self._resolved_adv_port = port
                return AdvBridge(port, baud=self.args.baud, verbose=self.args.verbose)
        raise BridgeError("ADV bridge serial port not found")

    def adv_status(self) -> dict[str, Any]:
        return self.adv_cmd("status", timeout=5)

    def band_get(self, path: str = "/api/status", timeout: float = 12) -> dict[str, Any]:
        return parse_http_body(self.adv_cmd("band_get", timeout=timeout, path=path))

    def band_post(self, path: str, payload: dict[str, Any] | None = None,
                  body: str | None = None, timeout: float = 12) -> dict[str, Any]:
        data: dict[str, Any] = {"path": path}
        if payload is not None:
            data["payload"] = payload
        if body is not None:
            data["body"] = body
        return parse_http_body(self.adv_cmd("band_post", timeout=timeout, **data))

    def sync_once(self, force: bool = False, demo: bool = False) -> dict[str, Any]:
        payload_doc: dict[str, Any]
        try:
            payload_doc = self.source_json(
                "/api/device-payload",
                {"force": "1" if force else None, "demo": "1" if demo else None},
                timeout=18 if force else 12,
            )
            payload = payload_doc.get("payload")
            if not isinstance(payload, dict):
                raise RuntimeError("source did not return payload object")
            source_error = ""
        except Exception as exc:
            payload_doc = {
                "payload": error_payload(str(exc)),
                "usage": {"status": "error", "source": "wifi-bridge", "error": str(exc)},
                "line": "",
            }
            payload = payload_doc["payload"]
            source_error = str(exc)

        push_resp = self.band_post("/api/push", payload=payload, timeout=15)
        now = time.time()
        with self.state.lock:
            self.state.sync_count += 1
            self.state.last_sync_at = now
            self.state.last_payload = payload
            self.state.last_usage = payload_doc.get("usage") if isinstance(payload_doc.get("usage"), dict) else None
            self.state.last_push = push_resp
            self.state.last_error = source_error

        return {
            "ok": True,
            "source_error": source_error or None,
            "payload": payload,
            "usage": payload_doc.get("usage"),
            "push": push_resp,
            "synced_at": now,
        }

    def push_wait(self, hint: str = "Open localhost:8788") -> dict[str, Any]:
        payload = {"cmd": "wait", "hint": compact(hint, 40)}
        resp = self.band_post("/api/push", payload=payload, timeout=12)
        with self.state.lock:
            self.state.last_payload = payload
            self.state.last_push = resp
            self.state.last_sync_at = time.time()
        return {"ok": True, "payload": payload, "push": resp}

    def set_auto(self, enabled: bool, interval: int | None = None) -> dict[str, Any]:
        with self.state.lock:
            self.state.auto_enabled = enabled
            if interval is not None:
                self.state.interval_seconds = max(10, min(3600, int(interval)))
        return self.snapshot(include_remote=False)

    def snapshot(self, include_remote: bool = True) -> dict[str, Any]:
        with self.state.lock:
            state = {
                "auto_enabled": self.state.auto_enabled,
                "interval_seconds": self.state.interval_seconds,
                "sync_count": self.state.sync_count,
                "last_sync_at": self.state.last_sync_at,
                "last_error": self.state.last_error,
                "last_payload": self.state.last_payload,
                "last_usage": self.state.last_usage,
                "last_push": self.state.last_push,
            }

        result: dict[str, Any] = {
            "ok": True,
            "bridge": "band0-claude-usage-wifi",
            "source": self.args.source,
            "adv_port": self.args.adv_port,
            "resolved_adv_port": self._resolved_adv_port,
            "state": state,
            "now": time.time(),
        }
        if include_remote:
            for name, getter in (
                ("source_status", lambda: self.source_json("/api/status", timeout=6)),
                ("adv_status", self.adv_status),
                ("band_status", lambda: self.band_get("/api/status", timeout=8)),
            ):
                try:
                    result[name] = getter()
                except Exception as exc:
                    result[name] = {"ok": False, "error": str(exc)}
            result["resolved_adv_port"] = self._resolved_adv_port
        return result

    def auto_loop(self) -> None:
        while not self.state.stop_event.is_set():
            with self.state.lock:
                enabled = self.state.auto_enabled
                interval = self.state.interval_seconds
            if enabled:
                try:
                    self.sync_once(force=False, demo=False)
                except Exception as exc:
                    with self.state.lock:
                        self.state.last_error = str(exc)
            self.state.stop_event.wait(max(10, interval))


def make_handler(service: UsageWifiBridge) -> type[BaseHTTPRequestHandler]:
    class Handler(BaseHTTPRequestHandler):
        server_version = "Band0UsageBridge/1.0"

        def do_OPTIONS(self) -> None:
            self.send_response(HTTPStatus.NO_CONTENT)
            self.send_header("Access-Control-Allow-Origin", "*")
            self.send_header("Access-Control-Allow-Methods", "GET,POST,OPTIONS")
            self.send_header("Access-Control-Allow-Headers", "Content-Type")
            self.end_headers()

        def do_GET(self) -> None:
            parsed = urlparse(self.path)
            query = parse_qs(parsed.query)
            try:
                if parsed.path == "/":
                    html_response(self, DASHBOARD_HTML)
                elif parsed.path == "/api/status":
                    json_response(self, HTTPStatus.OK, service.snapshot(include_remote=True))
                elif parsed.path == "/api/payload":
                    data = service.source_json(
                        "/api/device-payload",
                        {
                            "force": "1" if query.get("force", ["0"])[0] == "1" else None,
                            "demo": "1" if query.get("demo", ["0"])[0] == "1" else None,
                        },
                    )
                    json_response(self, HTTPStatus.OK, data)
                elif parsed.path == "/api/band/status":
                    json_response(self, HTTPStatus.OK, service.band_get("/api/status"))
                elif parsed.path == "/api/band/usage":
                    json_response(self, HTTPStatus.OK, service.band_get("/api/usage"))
                elif parsed.path == "/api/band/logs":
                    json_response(self, HTTPStatus.OK, service.band_get("/api/logs"))
                else:
                    json_response(self, HTTPStatus.NOT_FOUND, {"ok": False, "error": "not found"})
            except Exception as exc:
                json_response(self, HTTPStatus.BAD_GATEWAY, {"ok": False, "error": str(exc)})

        def do_POST(self) -> None:
            parsed = urlparse(self.path)
            length = int(self.headers.get("Content-Length", "0") or "0")
            raw = self.rfile.read(length).decode("utf-8") if length else "{}"
            try:
                body = json.loads(raw or "{}")
            except json.JSONDecodeError:
                json_response(self, HTTPStatus.BAD_REQUEST, {"ok": False, "error": "bad json"})
                return

            try:
                if parsed.path == "/api/sync":
                    result = service.sync_once(
                        force=bool(body.get("force")),
                        demo=bool(body.get("demo")),
                    )
                    json_response(self, HTTPStatus.OK, result)
                elif parsed.path == "/api/wait":
                    json_response(self, HTTPStatus.OK, service.push_wait(body.get("hint") or "Open localhost:8788"))
                elif parsed.path == "/api/auto":
                    json_response(
                        self,
                        HTTPStatus.OK,
                        service.set_auto(bool(body.get("enabled")), body.get("interval_seconds")),
                    )
                elif parsed.path == "/api/band/mode":
                    mode = body.get("mode", "usage")
                    json_response(self, HTTPStatus.OK, service.band_post("/api/mode", payload={"mode": mode}))
                elif parsed.path == "/api/band/reboot":
                    json_response(self, HTTPStatus.OK, service.band_post("/api/reboot", body="{}"))
                else:
                    json_response(self, HTTPStatus.NOT_FOUND, {"ok": False, "error": "not found"})
            except Exception as exc:
                json_response(self, HTTPStatus.BAD_GATEWAY, {"ok": False, "error": str(exc)})

        def log_message(self, fmt: str, *args: Any) -> None:
            if service.args.verbose:
                super().log_message(fmt, *args)

    return Handler


DASHBOARD_HTML = r"""<!doctype html>
<html lang="zh-CN">
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>Band-0 Claude Usage Bridge</title>
<style>
:root{color-scheme:light;--bg:#f7f8fa;--panel:#fff;--text:#15171a;--muted:#68707a;--line:#d9dee5;--ink:#15171a;--soft:#f0f3f6;--ok:#0f7b4d;--warn:#a25c00;--bad:#b42318}
*{box-sizing:border-box}body{margin:0;background:var(--bg);color:var(--text);font:14px/1.45 ui-sans-serif,system-ui,-apple-system,BlinkMacSystemFont,"Segoe UI",sans-serif}
main{max-width:1080px;margin:0 auto;padding:24px;display:grid;gap:16px;grid-template-columns:minmax(300px,360px) 1fr}
header{grid-column:1/-1;display:flex;align-items:end;justify-content:space-between;gap:16px;border-bottom:1px solid var(--line);padding-bottom:14px}
h1{font-size:22px;margin:0;letter-spacing:0}.sub{color:var(--muted);margin-top:4px}.panel{background:var(--panel);border:1px solid var(--line);border-radius:8px;padding:16px}
.stack{display:grid;gap:16px}.row{display:flex;align-items:center;justify-content:space-between;gap:12px}.muted{color:var(--muted)}.mono{font-family:ui-monospace,SFMono-Regular,Menlo,monospace}
button{border:1px solid var(--line);background:var(--panel);color:var(--text);border-radius:6px;padding:8px 10px;font:inherit;cursor:pointer}button.primary{background:var(--ink);color:white;border-color:var(--ink)}button:disabled{opacity:.55;cursor:not-allowed}
.buttons{display:flex;flex-wrap:wrap;gap:8px}.status{display:grid;gap:8px}.status div{display:flex;justify-content:space-between;gap:12px;border-bottom:1px solid var(--line);padding-bottom:7px}.status div:last-child{border-bottom:0;padding-bottom:0}
.badge{display:inline-flex;align-items:center;justify-content:center;min-width:56px;border:1px solid var(--line);border-radius:999px;padding:2px 8px;font-size:12px}.ok{color:var(--ok)}.warn{color:var(--warn)}.bad{color:var(--bad)}
.device{width:min(100%,320px);aspect-ratio:1;margin:auto;border:1px solid #111;border-radius:8px;background:#fff;color:#111;padding:14px;display:grid;grid-template-rows:auto 1fr auto;gap:10px;font-family:ui-monospace,SFMono-Regular,Menlo,monospace;box-shadow:0 10px 24px rgba(20,25,30,.08)}
.device-head{display:flex;align-items:center;justify-content:space-between;border-bottom:2px solid #111;padding-bottom:8px}.logo{display:flex;align-items:center;gap:8px;font-weight:800}.clawd{display:inline-grid;grid-template-columns:repeat(18,1px);grid-auto-rows:2px;gap:0;transform:scale(2);transform-origin:left center;margin-right:18px}.clawd i{width:1px;height:2px;background:#111}.screen-badge{border:1px solid #111;padding:2px 6px;font-size:12px}
.quota{display:grid;gap:14px;align-content:center}.quota-block{border:1px solid #111;padding:10px}.quota-top{display:flex;justify-content:space-between;align-items:center}.pct{font-size:22px;font-weight:800}.pill{border:1px solid #111;padding:2px 7px;font-size:12px}.bar{height:10px;border:1px solid #111;margin-top:8px}.fill{height:100%;background:#111;width:0}.detail{font-size:12px;margin-top:6px;color:#333;white-space:nowrap;overflow:hidden;text-overflow:ellipsis}.foot{border-top:2px solid #111;padding-top:8px;font-size:12px;white-space:nowrap;overflow:hidden;text-overflow:ellipsis;text-align:center}
pre{max-height:260px;overflow:auto;background:var(--soft);border-radius:6px;padding:12px;font-size:12px}
@media(max-width:760px){main{grid-template-columns:1fr;padding:16px}header{align-items:start;flex-direction:column}.device{width:min(100%,300px)}}
</style>
</head>
<body>
<main>
  <header>
    <div>
      <h1>Band-0 Claude Usage Bridge</h1>
      <div class="sub">Claude bridge :8787 -> ADV USB -> ADV 2.4G -> Band-0</div>
    </div>
    <div class="buttons">
      <button id="refresh">Refresh</button>
      <button class="primary" id="sync">Sync now</button>
      <button id="demo">Push demo</button>
    </div>
  </header>
  <section class="panel stack">
    <div class="device">
      <div class="device-head"><span class="logo"><span class="clawd" id="clawd"></span>Usage</span><span class="screen-badge" id="badge">WAIT</span></div>
      <div class="quota">
        <div class="quota-block">
          <div class="quota-top"><span class="pct" id="cu">--%</span><span class="pill">Now</span></div>
          <div class="bar"><div class="fill" id="cuFill"></div></div>
          <div class="detail" id="ci">resets in --</div>
        </div>
        <div class="quota-block">
          <div class="quota-top"><span class="pct" id="wu">--%</span><span class="pill">Week</span></div>
          <div class="bar"><div class="fill" id="wuFill"></div></div>
          <div class="detail" id="wi">resets in --</div>
        </div>
      </div>
      <div class="foot" id="foot">Waiting for bridge</div>
    </div>
    <div class="buttons">
      <button id="auto">Auto sync off</button>
      <button id="wait">Show waiting</button>
      <button id="mode">Open Usage app</button>
      <button id="apps">Open Apps</button>
      <button id="settings">Settings</button>
      <button id="wireless">Wireless</button>
      <button id="bandStatus">Band status</button>
      <button id="bandLogs">Logs</button>
    </div>
  </section>
  <section class="stack">
    <div class="panel">
      <div class="row"><strong>Transport</strong><span class="badge" id="overall">checking</span></div>
      <div class="status" id="status"></div>
    </div>
    <div class="panel">
      <div class="row"><strong>Last response</strong><span class="muted mono" id="when">-</span></div>
      <pre id="raw">{}</pre>
    </div>
  </section>
</main>
<script>
const $=id=>document.getElementById(id);
let state={auto:false};
const clawdRows=['...XXXXXXXXXXXX...','...XX.XXXXXX.XX...','.XXXXXXXXXXXXXXXX.','...XXXXXXXXXXXX...','....X.X....X.X....'];
$('clawd').innerHTML=clawdRows.flatMap(r=>[...r].map(ch=>`<i style="opacity:${ch==='X'?1:0}"></i>`)).join('');
function pct(v){return Number.isFinite(v)?Math.max(0,Math.min(100,Math.round(v))):null}
function text(v,f='--'){return (v===undefined||v===null||v==='')?f:String(v)}
function compactFromBandUsage(u){
  if(!u)return null;
  return {cu:u.current_used,cr:u.current_remaining,ri:u.current_resets_in,wu:u.weekly_used,wr:u.weekly_remaining,wi:u.weekly_resets_in,m:u.model,s:u.status,src:u.transport,err:u.error,stale:u.stale,d:u.demo};
}
function setPayload(p){
  p=p||{};
  const cu=pct(p.cu), wu=pct(p.wu), cr=pct(p.cr), wr=pct(p.wr);
  $('cu').textContent=cu===null?'--%':cu+'%'; $('wu').textContent=wu===null?'--%':wu+'%';
  $('cuFill').style.width=(cu||0)+'%'; $('wuFill').style.width=(wu||0)+'%';
  $('ci').textContent=(cr===null?'':' '+cr+'% left · ')+'resets in '+text(p.ri);
  $('wi').textContent=(wr===null?'':' '+wr+'% left · ')+'resets in '+text(p.wi);
  let badge='WAIT', foot='Waiting for bridge';
  if(p.err){badge='ERROR';foot=p.err}else if(p.stale){badge='STALE';foot='Cached · '+text(p.src,p.s||'stale')}else if(p.d){badge='DEMO';foot='Demo · '+text(p.m,p.s||'ready')}else if(cu!==null||wu!==null){badge='LIVE';foot=text(p.m,'live')+' via '+text(p.src,'wifi')}
  $('badge').textContent=badge; $('foot').textContent=foot;
}
async function api(path,opts){
  const r=await fetch(path,{headers:{'Content-Type':'application/json'},...opts});
  const j=await r.json().catch(()=>({ok:false,error:'bad json'}));
  if(!r.ok) throw new Error(j.error||r.statusText);
  return j;
}
function renderStatus(j){
  state.auto=!!j.state?.auto_enabled;
  $('auto').textContent=state.auto?'Auto sync on':'Auto sync off';
  const src=j.source_status, adv=j.adv_status, st=j.state||{};
  const band=j.band_status?.body_json || j.band_status;
  const bandUsage=compactFromBandUsage(band?.usage);
  const rows=[
    ['Claude bridge',src?.status==='ok'?'ok':(src?.error||'unknown')],
    ['ADV USB',adv?.device==='adv-bridge'?'ok':(adv?.error||'unknown')],
    ['ADV AP',adv?.ssid?adv.ssid:'-'],
    ['Band IP',adv?.band0_ip||adv?.mac_ip||'-'],
    ['Stations',adv?.stations??'-'],
    ['Band health',band?.health || band?.error || '-'],
    ['Band firmware',band?.firmware || '-'],
    ['Band mode',band?.mode ?? '-'],
    ['ADV staged',adv?.firmware_size?`${adv.firmware_size} B`:'-'],
    ['Auto sync',state.auto?`${st.interval_seconds}s`:'off'],
    ['Sync count',st.sync_count??0],
    ['Last error',st.last_error||'-'],
  ];
  $('status').innerHTML=rows.map(([k,v])=>`<div><span class="muted">${k}</span><span class="mono">${String(v)}</span></div>`).join('');
  $('overall').textContent=(src?.status==='ok'&&adv?.device==='adv-bridge')?'ready':'check';
  $('overall').className='badge '+((src?.status==='ok'&&adv?.device==='adv-bridge')?'ok':'warn');
  if(st.last_payload)setPayload(st.last_payload);
  else if(bandUsage)setPayload(bandUsage);
  $('when').textContent=st.last_sync_at?new Date(st.last_sync_at*1000).toLocaleTimeString():'-';
  $('raw').textContent=JSON.stringify(j,null,2);
}
async function refresh(){try{renderStatus(await api('/api/status'))}catch(e){$('overall').textContent='error';$('overall').className='badge bad';$('raw').textContent=String(e)}}
async function sync(demo=false){$('sync').disabled=true;try{const j=await api('/api/sync',{method:'POST',body:JSON.stringify({force:!demo,demo})});setPayload(j.payload);$('raw').textContent=JSON.stringify(j,null,2);await refresh()}catch(e){$('raw').textContent=String(e)}finally{$('sync').disabled=false}}
$('refresh').onclick=refresh;$('sync').onclick=()=>sync(false);$('demo').onclick=()=>sync(true);
$('auto').onclick=async()=>{await api('/api/auto',{method:'POST',body:JSON.stringify({enabled:!state.auto,interval_seconds:60})});refresh()};
$('wait').onclick=async()=>{$('raw').textContent=JSON.stringify(await api('/api/wait',{method:'POST',body:JSON.stringify({})}),null,2);refresh()};
$('mode').onclick=async()=>{$('raw').textContent=JSON.stringify(await api('/api/band/mode',{method:'POST',body:JSON.stringify({mode:'usage'})}),null,2);refresh()};
$('apps').onclick=async()=>{$('raw').textContent=JSON.stringify(await api('/api/band/mode',{method:'POST',body:JSON.stringify({mode:'menu'})}),null,2);refresh()};
$('settings').onclick=async()=>{$('raw').textContent=JSON.stringify(await api('/api/band/mode',{method:'POST',body:JSON.stringify({mode:'settings'})}),null,2);refresh()};
$('wireless').onclick=async()=>{$('raw').textContent=JSON.stringify(await api('/api/band/mode',{method:'POST',body:JSON.stringify({mode:'wireless'})}),null,2);refresh()};
$('bandStatus').onclick=async()=>{$('raw').textContent=JSON.stringify(await api('/api/band/status'),null,2)};
$('bandLogs').onclick=async()=>{$('raw').textContent=JSON.stringify(await api('/api/band/logs'),null,2)};
refresh();setInterval(refresh,5000);
</script>
</body>
</html>
"""


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", default="127.0.0.1")
    parser.add_argument("--port", type=int, default=8788)
    parser.add_argument("--source", default=DEFAULT_SOURCE, help="cardputer-claude-usage bridge base URL")
    parser.add_argument("--bridge-token", default=os.environ.get("BRIDGE_TOKEN", ""))
    parser.add_argument("--adv-port", default="auto")
    parser.add_argument("--baud", type=int, default=DEFAULT_BAUD)
    parser.add_argument("--interval", type=int, default=DEFAULT_INTERVAL)
    parser.add_argument("--auto", action="store_true", help="start periodic sync immediately")
    parser.add_argument("--verbose", action="store_true")
    return parser.parse_args()


def main() -> None:
    args = parse_args()
    service = UsageWifiBridge(args)
    worker = threading.Thread(target=service.auto_loop, name="usage-auto-sync", daemon=True)
    worker.start()

    httpd = ThreadingHTTPServer((args.host, args.port), make_handler(service))
    print("Band-0 Claude Usage Wi-Fi Bridge")
    print(f"  Dashboard: http://{args.host}:{args.port}/")
    print(f"  Source:    {args.source}")
    print(f"  ADV port:  {args.adv_port}")
    print("")
    try:
        httpd.serve_forever()
    except KeyboardInterrupt:
        pass
    finally:
        service.state.stop_event.set()
        httpd.server_close()


if __name__ == "__main__":
    try:
        main()
    except (BridgeError, OSError) as exc:
        raise SystemExit(f"error: {exc}") from exc
