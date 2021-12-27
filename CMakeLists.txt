cmake_minimum_required (VERSION 3.5)

project(subprojects)


set(WITH_DEBUG TRUE)
# option(DEBUG "Option debug" OFF)
SET(_CMAKE_VERBOSE 0)

# Add sub directories
add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(examples/hello)
