# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/aarch64/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/aarch64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/m.xushvaqtov/CLionProjects/Lab_vectors

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/m.xushvaqtov/CLionProjects/Lab_vectors/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/checkers.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/checkers.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/checkers.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/checkers.dir/flags.make

CMakeFiles/checkers.dir/checkers.cpp.o: CMakeFiles/checkers.dir/flags.make
CMakeFiles/checkers.dir/checkers.cpp.o: /Users/m.xushvaqtov/CLionProjects/Lab_vectors/checkers.cpp
CMakeFiles/checkers.dir/checkers.cpp.o: CMakeFiles/checkers.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/m.xushvaqtov/CLionProjects/Lab_vectors/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/checkers.dir/checkers.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/checkers.dir/checkers.cpp.o -MF CMakeFiles/checkers.dir/checkers.cpp.o.d -o CMakeFiles/checkers.dir/checkers.cpp.o -c /Users/m.xushvaqtov/CLionProjects/Lab_vectors/checkers.cpp

CMakeFiles/checkers.dir/checkers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/checkers.dir/checkers.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/m.xushvaqtov/CLionProjects/Lab_vectors/checkers.cpp > CMakeFiles/checkers.dir/checkers.cpp.i

CMakeFiles/checkers.dir/checkers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/checkers.dir/checkers.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/m.xushvaqtov/CLionProjects/Lab_vectors/checkers.cpp -o CMakeFiles/checkers.dir/checkers.cpp.s

# Object files for target checkers
checkers_OBJECTS = \
"CMakeFiles/checkers.dir/checkers.cpp.o"

# External object files for target checkers
checkers_EXTERNAL_OBJECTS =

checkers: CMakeFiles/checkers.dir/checkers.cpp.o
checkers: CMakeFiles/checkers.dir/build.make
checkers: CMakeFiles/checkers.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/m.xushvaqtov/CLionProjects/Lab_vectors/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable checkers"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/checkers.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/checkers.dir/build: checkers
.PHONY : CMakeFiles/checkers.dir/build

CMakeFiles/checkers.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/checkers.dir/cmake_clean.cmake
.PHONY : CMakeFiles/checkers.dir/clean

CMakeFiles/checkers.dir/depend:
	cd /Users/m.xushvaqtov/CLionProjects/Lab_vectors/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/m.xushvaqtov/CLionProjects/Lab_vectors /Users/m.xushvaqtov/CLionProjects/Lab_vectors /Users/m.xushvaqtov/CLionProjects/Lab_vectors/cmake-build-debug /Users/m.xushvaqtov/CLionProjects/Lab_vectors/cmake-build-debug /Users/m.xushvaqtov/CLionProjects/Lab_vectors/cmake-build-debug/CMakeFiles/checkers.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/checkers.dir/depend

