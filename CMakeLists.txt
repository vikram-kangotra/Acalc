cmake_minimum_required(VERSION 3.9.1)

project(Acalc)

include_directories(include)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "src/*.c")

add_executable(acalc ${SOURCES})

target_link_libraries(acalc m)
