cmake_minimum_required(VERSION 3.20)

# Cardputer ADV MITM AP — 2.4GHz hotspot + DNS redirect + status display
# ESP32-S3, targets Band-0 MITM setup

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(cardputer_mitm_ap)
