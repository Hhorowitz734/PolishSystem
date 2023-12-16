cmake_minimum_required(VERSION 3.10)
project(PolishSystem)

# Enable testing with CTest
enable_testing()

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add all .cpp files in the src directory for the main application
file(GLOB MAIN_SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

# Define the main application executable
add_executable(PolishSystem ${MAIN_SOURCES})

# Assuming Google Test is installed and findable by CMake
find_package(GTest REQUIRED)

file(GLOB MAIN_SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")
list(REMOVE_ITEM MAIN_SOURCES "${PROJECT_SOURCE_DIR}/src/main.cpp")  # Exclude main.cpp from MAIN_SOURCES

file(GLOB TEST_FILES "${PROJECT_SOURCE_DIR}/tests/*.cpp")

foreach(TEST_FILE ${TEST_FILES})
    get_filename_component(TEST_NAME ${TEST_FILE} NAME_WE)
    add_executable(${TEST_NAME} ${TEST_FILE} ${MAIN_SOURCES})
    target_link_libraries(${TEST_NAME} GTest::GTest GTest::Main)
    add_test(NAME ${TEST_NAME} COMMAND ${TEST_NAME})
endforeach()