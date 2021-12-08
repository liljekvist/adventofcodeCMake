# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("adventofcode")

# Include sub-projects.
add_subdirectory ("day1")
add_subdirectory ("day2")
