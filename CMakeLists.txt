cmake_minimum_required (VERSION 3.5)

project(subprojects)

# Add sub directories
add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(examples/hello)
