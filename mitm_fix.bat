@echo off
cd /d D:\dev\Rand-0

echo 192.168.137.1 dot.mindreset.tech >> %windir%\System32\drivers\etc\hosts
echo [1] hosts entry added

netsh interface portproxy add v4tov4 listenport=443 listenaddress=192.168.137.1 connectport=8080 connectaddress=127.0.0.1
echo [2] port forwarding 443-8080 added

netsh advfirewall firewall add rule name="MITM_443" dir=in action=allow protocol=tcp localport=443,8080,8081 >nul 2>&1

echo.
echo ========================================
echo  MITM ACTIVE
echo ========================================
echo  mitmweb: http://127.0.0.1:8081
echo  Connect ESP32-C to hotspot now!
echo  Then check mitmweb for requests.
echo ========================================
pause
