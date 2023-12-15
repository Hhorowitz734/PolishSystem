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

# Optionally, create a library target if your tests need to link against
# the same code as your main application. 
# If you do this, link this library to your main application too.
add_library(PolishSystemLib STATIC ${MAIN_SOURCES})
target_link_libraries(PolishSystem PolishSystemLib)

# Assuming Google Test is installed and findable by CMake
find_package(GTest REQUIRED)

# Add all .cpp files in the tests directory
file(GLOB TEST_SOURCES "${PROJECT_SOURCE_DIR}/tests/*.cpp")

# Define the test executable
add_executable(PolishSystemTests ${TEST_SOURCES})

# Link the test executable against Google Test and the PolishSystem library
target_link_libraries(PolishSystemTests ${GTEST_LIBRARIES} PolishSystemLib)

# Add the test executable as a test for CTest
add_test(NAME PolishSystemTests COMMAND PolishSystemTests)
