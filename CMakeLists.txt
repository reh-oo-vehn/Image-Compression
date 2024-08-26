cmake_minimum_required(VERSION 3.10)

# Set the project name
project(ImageCompressor)

# Find OpenCV package
find_package(OpenCV REQUIRED)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add the executable
add_executable(compress_image src/main.cpp)

# Link OpenCV libraries
target_link_libraries(compress_image ${OpenCV_LIBS})
