# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zhouhuizhen/Desktop/ACM/Union_found

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zhouhuizhen/Desktop/ACM/Union_found/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Union_found.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Union_found.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Union_found.dir/flags.make

CMakeFiles/Union_found.dir/main.cpp.o: CMakeFiles/Union_found.dir/flags.make
CMakeFiles/Union_found.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhouhuizhen/Desktop/ACM/Union_found/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Union_found.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Union_found.dir/main.cpp.o -c /Users/zhouhuizhen/Desktop/ACM/Union_found/main.cpp

CMakeFiles/Union_found.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Union_found.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhouhuizhen/Desktop/ACM/Union_found/main.cpp > CMakeFiles/Union_found.dir/main.cpp.i

CMakeFiles/Union_found.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Union_found.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhouhuizhen/Desktop/ACM/Union_found/main.cpp -o CMakeFiles/Union_found.dir/main.cpp.s

# Object files for target Union_found
Union_found_OBJECTS = \
"CMakeFiles/Union_found.dir/main.cpp.o"

# External object files for target Union_found
Union_found_EXTERNAL_OBJECTS =

Union_found: CMakeFiles/Union_found.dir/main.cpp.o
Union_found: CMakeFiles/Union_found.dir/build.make
Union_found: CMakeFiles/Union_found.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhouhuizhen/Desktop/ACM/Union_found/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Union_found"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Union_found.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Union_found.dir/build: Union_found

.PHONY : CMakeFiles/Union_found.dir/build

CMakeFiles/Union_found.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Union_found.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Union_found.dir/clean

CMakeFiles/Union_found.dir/depend:
	cd /Users/zhouhuizhen/Desktop/ACM/Union_found/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhouhuizhen/Desktop/ACM/Union_found /Users/zhouhuizhen/Desktop/ACM/Union_found /Users/zhouhuizhen/Desktop/ACM/Union_found/cmake-build-debug /Users/zhouhuizhen/Desktop/ACM/Union_found/cmake-build-debug /Users/zhouhuizhen/Desktop/ACM/Union_found/cmake-build-debug/CMakeFiles/Union_found.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Union_found.dir/depend

