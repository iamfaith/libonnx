# $ cmake --version
cmake_minimum_required(VERSION 3.5)

# Set the project name
project (test_main)

message(STATUS "CMAKE_CURRENT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}")

# Add an executable
add_executable(${PROJECT_NAME} main.c)


# link the new hello_library target with the hello_binary target
target_link_libraries( ${PROJECT_NAME}
    PRIVATE 
    sublibrary1 m
)

# target_link_libraries(${PROJECT_NAME} m)