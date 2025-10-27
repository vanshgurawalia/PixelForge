cmake_minimum_required(VERSION 3.16)
project(PixelForge VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Tell CMake where to find SDL2
find_package(SDL2 CONFIG REQUIRED)

add_executable(PixelForge
    src/main.cpp
    src/Engine/Window.cpp
)

target_include_directories(PixelForge PRIVATE include)
target_link_libraries(PixelForge PRIVATE SDL2::SDL2 SDL2::SDL2main)
