cmake_minimum_required(VERSION 3.25.1)
project(vector)

SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror -Wpedantic -Wextra")

include_directories(".")

add_library(vec2 vec2.c)