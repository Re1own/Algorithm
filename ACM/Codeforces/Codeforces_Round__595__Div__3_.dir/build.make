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
CMAKE_SOURCE_DIR = "/Users/zhouhuizhen/Desktop/ACM/Codeforces Round #595 (Div. 3)"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/zhouhuizhen/Desktop/ACM/Codeforces Round #595 (Div. 3)/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Codeforces_Round__595__Div__3_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Codeforces_Round__595__Div__3_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Codeforces_Round__595__Div__3_.dir/flags.make

CMakeFiles/Codeforces_Round__595__Div__3_.dir/main.cpp.o: CMakeFiles/Codeforces_Round__595__Div__3_.dir/flags.make
CMakeFiles/Codeforces_Round__595__Div__3_.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/zhouhuizhen/Desktop/ACM/Codeforces Round #595 (Div. 3)/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Codeforces_Round__595__Div__3_.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Codeforces_Round__595__Div__3_.dir/main.cpp.o -c "/Users/zhouhuizhen/Desktop/ACM/Codeforces Round #595 (Div. 3)/main.cpp"

CMakeFiles/Codeforces_Round__595__Div__3_.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Codeforces_Round__595__Div__3_.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/zhouhuizhen/Desktop/ACM/Codeforces Round #595 (Div. 3)/main.cpp" > CMakeFiles/Codeforces_Round__595__Div__3_.dir/main.cpp.i

CMakeFiles/Codeforces_Round__595__Div__3_.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Codeforces_Round__595__Div__3_.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/zhouhuizhen/Desktop/ACM/Codeforces Round #595 (Div. 3)/main.cpp" -o CMakeFiles/Codeforces_Round__595__Div__3_.dir/main.cpp.s

# Object files for target Codeforces_Round__595__Div__3_
Codeforces_Round__595__Div__3__OBJECTS = \
"CMakeFiles/Codeforces_Round__595__Div__3_.dir/main.cpp.o"

# External object files for target Codeforces_Round__595__Div__3_
Codeforces_Round__595__Div__3__EXTERNAL_OBJECTS =

Codeforces_Round__595__Div__3_: CMakeFiles/Codeforces_Round__595__Div__3_.dir/main.cpp.o
Codeforces_Round__595__Div__3_: CMakeFiles/Codeforces_Round__595__Div__3_.dir/build.make
Codeforces_Round__595__Div__3_: CMakeFiles/Codeforces_Round__595__Div__3_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/zhouhuizhen/Desktop/ACM/Codeforces Round #595 (Div. 3)/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Codeforces_Round__595__Div__3_"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Codeforces_Round__595__Div__3_.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Codeforces_Round__595__Div__3_.dir/build: Codeforces_Round__595__Div__3_

.PHONY : CMakeFiles/Codeforces_Round__595__Div__3_.dir/build

CMakeFiles/Codeforces_Round__595__Div__3_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Codeforces_Round__595__Div__3_.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Codeforces_Round__595__Div__3_.dir/clean

CMakeFiles/Codeforces_Round__595__Div__3_.dir/depend:
	cd "/Users/zhouhuizhen/Desktop/ACM/Codeforces Round #595 (Div. 3)/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/zhouhuizhen/Desktop/ACM/Codeforces Round #595 (Div. 3)" "/Users/zhouhuizhen/Desktop/ACM/Codeforces Round #595 (Div. 3)" "/Users/zhouhuizhen/Desktop/ACM/Codeforces Round #595 (Div. 3)/cmake-build-debug" "/Users/zhouhuizhen/Desktop/ACM/Codeforces Round #595 (Div. 3)/cmake-build-debug" "/Users/zhouhuizhen/Desktop/ACM/Codeforces Round #595 (Div. 3)/cmake-build-debug/CMakeFiles/Codeforces_Round__595__Div__3_.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Codeforces_Round__595__Div__3_.dir/depend
