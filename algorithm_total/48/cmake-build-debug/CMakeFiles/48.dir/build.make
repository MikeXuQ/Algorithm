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
CMAKE_SOURCE_DIR = D:\mine\algorithm_total\48

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\mine\algorithm_total\48\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/48.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/48.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/48.dir/flags.make

CMakeFiles/48.dir/main.cpp.obj: CMakeFiles/48.dir/flags.make
CMakeFiles/48.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\mine\algorithm_total\48\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/48.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\48.dir\main.cpp.obj -c D:\mine\algorithm_total\48\main.cpp

CMakeFiles/48.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/48.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\mine\algorithm_total\48\main.cpp > CMakeFiles\48.dir\main.cpp.i

CMakeFiles/48.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/48.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\mine\algorithm_total\48\main.cpp -o CMakeFiles\48.dir\main.cpp.s

CMakeFiles/48.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/48.dir/main.cpp.obj.requires

CMakeFiles/48.dir/main.cpp.obj.provides: CMakeFiles/48.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\48.dir\build.make CMakeFiles/48.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/48.dir/main.cpp.obj.provides

CMakeFiles/48.dir/main.cpp.obj.provides.build: CMakeFiles/48.dir/main.cpp.obj


# Object files for target 48
48_OBJECTS = \
"CMakeFiles/48.dir/main.cpp.obj"

# External object files for target 48
48_EXTERNAL_OBJECTS =

48.exe: CMakeFiles/48.dir/main.cpp.obj
48.exe: CMakeFiles/48.dir/build.make
48.exe: CMakeFiles/48.dir/linklibs.rsp
48.exe: CMakeFiles/48.dir/objects1.rsp
48.exe: CMakeFiles/48.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\mine\algorithm_total\48\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 48.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\48.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/48.dir/build: 48.exe

.PHONY : CMakeFiles/48.dir/build

CMakeFiles/48.dir/requires: CMakeFiles/48.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/48.dir/requires

CMakeFiles/48.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\48.dir\cmake_clean.cmake
.PHONY : CMakeFiles/48.dir/clean

CMakeFiles/48.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\mine\algorithm_total\48 D:\mine\algorithm_total\48 D:\mine\algorithm_total\48\cmake-build-debug D:\mine\algorithm_total\48\cmake-build-debug D:\mine\algorithm_total\48\cmake-build-debug\CMakeFiles\48.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/48.dir/depend
