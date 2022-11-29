cmake_minimum_required(VERSION 3.16)
project(DataStructures VERSION 1.0.0 LANGUAGES C CXX)

set(ENABLE_COVERAGE ON)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(Docs)
include(CodeCoverage)

append_coverage_compiler_flags()
enable_testing()

add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(config)