cmake_minimum_required(VERSION 3.10)
project(AeroSec LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Source files
set(SOURCES
    src/main.cpp
    src/parsers/NmapXmlParser.cpp
)

# Executable
add_executable(AeroSec ${SOURCES})
