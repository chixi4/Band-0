@echo off

netsh interface portproxy delete v4tov4 listenport=443 listenaddress=192.168.137.1
echo [1] port forwarding removed

netsh advfirewall firewall delete rule name="MITM_443" >nul 2>&1

powershell -NoProfile -Command "$c = Get-Content $env:windir\System32\drivers\etc\hosts -Raw; $c = $c -replace '192\.168\.137\.1\s+dot\.mindreset\.tech', ''; Set-Content $env:windir\System32\drivers\etc\hosts $c"
echo [2] hosts entry removed

taskkill /f /im mitmweb.exe >nul 2>&1
taskkill /f /im mitmdump.exe >nul 2>&1
echo [3] mitm stopped

echo [OK] cleanup done!
pause
