# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/liljekvist/Projects/adventofcodeCMake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/liljekvist/Projects/adventofcodeCMake/build

# Include any dependencies generated for this target.
include day3/CMakeFiles/day3PT1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include day3/CMakeFiles/day3PT1.dir/compiler_depend.make

# Include the progress variables for this target.
include day3/CMakeFiles/day3PT1.dir/progress.make

# Include the compile flags for this target's objects.
include day3/CMakeFiles/day3PT1.dir/flags.make

day3/CMakeFiles/day3PT1.dir/solveP1.cpp.o: day3/CMakeFiles/day3PT1.dir/flags.make
day3/CMakeFiles/day3PT1.dir/solveP1.cpp.o: ../day3/solveP1.cpp
day3/CMakeFiles/day3PT1.dir/solveP1.cpp.o: day3/CMakeFiles/day3PT1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liljekvist/Projects/adventofcodeCMake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object day3/CMakeFiles/day3PT1.dir/solveP1.cpp.o"
	cd /home/liljekvist/Projects/adventofcodeCMake/build/day3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT day3/CMakeFiles/day3PT1.dir/solveP1.cpp.o -MF CMakeFiles/day3PT1.dir/solveP1.cpp.o.d -o CMakeFiles/day3PT1.dir/solveP1.cpp.o -c /home/liljekvist/Projects/adventofcodeCMake/day3/solveP1.cpp

day3/CMakeFiles/day3PT1.dir/solveP1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/day3PT1.dir/solveP1.cpp.i"
	cd /home/liljekvist/Projects/adventofcodeCMake/build/day3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liljekvist/Projects/adventofcodeCMake/day3/solveP1.cpp > CMakeFiles/day3PT1.dir/solveP1.cpp.i

day3/CMakeFiles/day3PT1.dir/solveP1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/day3PT1.dir/solveP1.cpp.s"
	cd /home/liljekvist/Projects/adventofcodeCMake/build/day3 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liljekvist/Projects/adventofcodeCMake/day3/solveP1.cpp -o CMakeFiles/day3PT1.dir/solveP1.cpp.s

# Object files for target day3PT1
day3PT1_OBJECTS = \
"CMakeFiles/day3PT1.dir/solveP1.cpp.o"

# External object files for target day3PT1
day3PT1_EXTERNAL_OBJECTS =

day3/day3PT1: day3/CMakeFiles/day3PT1.dir/solveP1.cpp.o
day3/day3PT1: day3/CMakeFiles/day3PT1.dir/build.make
day3/day3PT1: day3/CMakeFiles/day3PT1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/liljekvist/Projects/adventofcodeCMake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable day3PT1"
	cd /home/liljekvist/Projects/adventofcodeCMake/build/day3 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/day3PT1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
day3/CMakeFiles/day3PT1.dir/build: day3/day3PT1
.PHONY : day3/CMakeFiles/day3PT1.dir/build

day3/CMakeFiles/day3PT1.dir/clean:
	cd /home/liljekvist/Projects/adventofcodeCMake/build/day3 && $(CMAKE_COMMAND) -P CMakeFiles/day3PT1.dir/cmake_clean.cmake
.PHONY : day3/CMakeFiles/day3PT1.dir/clean

day3/CMakeFiles/day3PT1.dir/depend:
	cd /home/liljekvist/Projects/adventofcodeCMake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/liljekvist/Projects/adventofcodeCMake /home/liljekvist/Projects/adventofcodeCMake/day3 /home/liljekvist/Projects/adventofcodeCMake/build /home/liljekvist/Projects/adventofcodeCMake/build/day3 /home/liljekvist/Projects/adventofcodeCMake/build/day3/CMakeFiles/day3PT1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : day3/CMakeFiles/day3PT1.dir/depend

