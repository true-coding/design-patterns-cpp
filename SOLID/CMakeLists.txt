cmake_minimum_required(VERSION 3.8)
project(SOLID)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp SRP.cpp OCP.cpp ISP.cpp LSP.cpp)
add_executable(SOLID ${SOURCE_FILES})