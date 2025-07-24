cmake_minimum_required(VERSION 3.10)
project(Space_War)

set(CMAKE_CXX_STANDARD 17)

# Find SFML
find_package(SFML 2.5 REQUIRED graphics window system)

include_directories(include)

add_executable(Space_War src/main.cpp)

target_link_libraries(Space_War sfml-graphics sfml-window sfml-system)
