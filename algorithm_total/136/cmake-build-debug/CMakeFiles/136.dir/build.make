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
CMAKE_SOURCE_DIR = D:\mine\algorithm_total\136

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\mine\algorithm_total\136\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/136.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/136.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/136.dir/flags.make

CMakeFiles/136.dir/main.cpp.obj: CMakeFiles/136.dir/flags.make
CMakeFiles/136.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\mine\algorithm_total\136\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/136.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\136.dir\main.cpp.obj -c D:\mine\algorithm_total\136\main.cpp

CMakeFiles/136.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/136.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\mine\algorithm_total\136\main.cpp > CMakeFiles\136.dir\main.cpp.i

CMakeFiles/136.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/136.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\mine\algorithm_total\136\main.cpp -o CMakeFiles\136.dir\main.cpp.s

CMakeFiles/136.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/136.dir/main.cpp.obj.requires

CMakeFiles/136.dir/main.cpp.obj.provides: CMakeFiles/136.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\136.dir\build.make CMakeFiles/136.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/136.dir/main.cpp.obj.provides

CMakeFiles/136.dir/main.cpp.obj.provides.build: CMakeFiles/136.dir/main.cpp.obj


# Object files for target 136
136_OBJECTS = \
"CMakeFiles/136.dir/main.cpp.obj"

# External object files for target 136
136_EXTERNAL_OBJECTS =

136.exe: CMakeFiles/136.dir/main.cpp.obj
136.exe: CMakeFiles/136.dir/build.make
136.exe: CMakeFiles/136.dir/linklibs.rsp
136.exe: CMakeFiles/136.dir/objects1.rsp
136.exe: CMakeFiles/136.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\mine\algorithm_total\136\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 136.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\136.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/136.dir/build: 136.exe

.PHONY : CMakeFiles/136.dir/build

CMakeFiles/136.dir/requires: CMakeFiles/136.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/136.dir/requires

CMakeFiles/136.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\136.dir\cmake_clean.cmake
.PHONY : CMakeFiles/136.dir/clean

CMakeFiles/136.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\mine\algorithm_total\136 D:\mine\algorithm_total\136 D:\mine\algorithm_total\136\cmake-build-debug D:\mine\algorithm_total\136\cmake-build-debug D:\mine\algorithm_total\136\cmake-build-debug\CMakeFiles\136.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/136.dir/depend

