param([switch]$Stop)

if ($Stop) {
    # ---- STOP CAPTURE ----
    Write-Host "Stopping packet capture..."
    pktmon stop
    Write-Host "Converting to pcapng..."
    pktmon etl2pcap D:\dev\Rand-0\hotspot_capture.etl -o D:\dev\Rand-0\hotspot_capture.pcapng
    Write-Host ""
    Write-Host "========================================="
    Write-Host "Done! Files saved to D:\dev\Rand-0\"
    Write-Host "  - hotspot_capture.etl"
    Write-Host "  - hotspot_capture.pcapng (Wireshark-compatible)"
    Write-Host "========================================="
    pause
    exit
}

# ---- START CAPTURE ----
Write-Host "========================================="
Write-Host "  Hotspot Packet Capture Tool"
Write-Host "========================================="
Write-Host ""

# Clean up any previous capture
pktmon stop 2>$null
pktmon filter remove 2>$null

# Add filter for hotspot subnet
pktmon filter add Hotspot -i 192.168.137.0/24

# Start capture
Write-Host "Starting capture on hotspot (192.168.137.0/24)..."
pktmon start --capture --comp nics --pkt-size 0 -f D:\dev\Rand-0\hotspot_capture.etl --log-mode circular --file-size 200

Write-Host ""
Write-Host "========================================="
Write-Host "  CAPTURE IS NOW RUNNING!"
Write-Host "========================================="
Write-Host ""
Write-Host "Network Info:"
Write-Host "  Hotspot IP: 192.168.137.1"
Write-Host "  Subnet:     192.168.137.0/24"
Write-Host "  Interface:  WLAN 4"
Write-Host ""
Write-Host "Now connect your embedded device to the"
Write-Host "hotspot and let it make its requests."
Write-Host ""
Write-Host ""
Write-Host "After ESP32-C finishes its work:"
Read-Host "Press ENTER to stop capture and convert"
pktmon stop
Write-Host "Converting to pcapng..."
pktmon etl2pcap D:\dev\Rand-0\hotspot_capture.etl -o D:\dev\Rand-0\hotspot_capture.pcapng
Write-Host "===== DONE! =====" -ForegroundColor Green
pause
