cmake_minimum_required(VERSION 3.20)

# Project name: matches the original firmware's "Quote_0_ESP8684_IDF"
set(EXTRA_COMPONENT_DIRS components)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(Quote_0_ESP8684_IDF)
