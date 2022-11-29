cmake_minimum_required(VERSION 3.16)
project(DataStructures VERSION 1.0.0 LANGUAGES C CXX)

add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(config)

enable_testing()

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(Docs)
