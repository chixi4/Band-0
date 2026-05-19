cmake_minimum_required(VERSION 3.20)

# Updater app — a minimal ESP-IDF project that reads OTA URL from NVS,
# downloads the firmware, writes it to the main partition, and reboots.
#
# This is a separate project from the main app. It is flashed to
# the "updater" partition (offset 0x150000).

set(EXTRA_COMPONENT_DIRS ../components)
set(COMPONENTS main)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(Quote_0_Updater)
