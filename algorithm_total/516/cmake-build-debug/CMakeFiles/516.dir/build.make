# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\mine\CLion 2017.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "D:\mine\CLion 2017.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\mine\algorithm_total\516

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\mine\algorithm_total\516\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/516.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/516.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/516.dir/flags.make

CMakeFiles/516.dir/main.cpp.obj: CMakeFiles/516.dir/flags.make
CMakeFiles/516.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\mine\algorithm_total\516\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/516.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\516.dir\main.cpp.obj -c D:\mine\algorithm_total\516\main.cpp

CMakeFiles/516.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/516.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\mine\algorithm_total\516\main.cpp > CMakeFiles\516.dir\main.cpp.i

CMakeFiles/516.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/516.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\mine\algorithm_total\516\main.cpp -o CMakeFiles\516.dir\main.cpp.s

CMakeFiles/516.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/516.dir/main.cpp.obj.requires

CMakeFiles/516.dir/main.cpp.obj.provides: CMakeFiles/516.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\516.dir\build.make CMakeFiles/516.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/516.dir/main.cpp.obj.provides

CMakeFiles/516.dir/main.cpp.obj.provides.build: CMakeFiles/516.dir/main.cpp.obj


# Object files for target 516
516_OBJECTS = \
"CMakeFiles/516.dir/main.cpp.obj"

# External object files for target 516
516_EXTERNAL_OBJECTS =

516.exe: CMakeFiles/516.dir/main.cpp.obj
516.exe: CMakeFiles/516.dir/build.make
516.exe: CMakeFiles/516.dir/linklibs.rsp
516.exe: CMakeFiles/516.dir/objects1.rsp
516.exe: CMakeFiles/516.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\mine\algorithm_total\516\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 516.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\516.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/516.dir/build: 516.exe

.PHONY : CMakeFiles/516.dir/build

CMakeFiles/516.dir/requires: CMakeFiles/516.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/516.dir/requires

CMakeFiles/516.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\516.dir\cmake_clean.cmake
.PHONY : CMakeFiles/516.dir/clean

CMakeFiles/516.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\mine\algorithm_total\516 D:\mine\algorithm_total\516 D:\mine\algorithm_total\516\cmake-build-debug D:\mine\algorithm_total\516\cmake-build-debug D:\mine\algorithm_total\516\cmake-build-debug\CMakeFiles\516.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/516.dir/depend

