cmake_minimum_required(VERSION 3.10)  # Define the minimum required CMake version

project(HotelManagementSystem)  # Define the project name

set(CMAKE_CXX_STANDARD 14)  # Set C++14 standard

# List all source files (you can also separate headers but it's not necessary for this simple setup)
set(SOURCES
    src/main.cpp
    src/hotel.cpp
    src/room.cpp
)

# Define the executable and its sources
add_executable(HotelManagementSystem ${SOURCES})

# If there are additional include directories, use include_directories to add them.
# For example: include_directories(include)
