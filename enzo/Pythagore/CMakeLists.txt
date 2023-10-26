cmake_minimum_required(VERSION 3.0)
project(PythagoreanSolve)

# Find the required SDL2 package
find_package(SDL2 REQUIRED)

# Set the source files for your program
set(SOURCES pythagore.c)

# Add the executable
add_executable(pythagorean ${SOURCES})

# Link against SDL2 and the math library
target_link_libraries(pythagorean SDL2 m)

# Include SDL2 headers
target_include_directories(pythagorean PRIVATE ${SDL2_INCLUDE_DIRS})
