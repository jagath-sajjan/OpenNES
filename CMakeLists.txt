cmake_minimum_required(VERSION 3.16)
project(OpenNES)

set(CMAKE_CXX_STANDARD 17)

add_executable(OpenNES
        CPU/Bus.cpp
        CPU/olc6502.cpp
        CPU/olcNes_Video1_6502.cpp
        CPU/j6502.cpp
        CPU/j6502.h
)
