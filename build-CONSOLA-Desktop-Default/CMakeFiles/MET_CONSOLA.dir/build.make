# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/juancospina/PJ/Project/CONSOLA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/juancospina/PJ/Project/build-CONSOLA-Desktop-Default

# Include any dependencies generated for this target.
include CMakeFiles/MET_CONSOLA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MET_CONSOLA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MET_CONSOLA.dir/flags.make

CMakeFiles/MET_CONSOLA.dir/main.cpp.o: CMakeFiles/MET_CONSOLA.dir/flags.make
CMakeFiles/MET_CONSOLA.dir/main.cpp.o: /home/juancospina/PJ/Project/CONSOLA/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/juancospina/PJ/Project/build-CONSOLA-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MET_CONSOLA.dir/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MET_CONSOLA.dir/main.cpp.o -c /home/juancospina/PJ/Project/CONSOLA/main.cpp

CMakeFiles/MET_CONSOLA.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MET_CONSOLA.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/juancospina/PJ/Project/CONSOLA/main.cpp > CMakeFiles/MET_CONSOLA.dir/main.cpp.i

CMakeFiles/MET_CONSOLA.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MET_CONSOLA.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/juancospina/PJ/Project/CONSOLA/main.cpp -o CMakeFiles/MET_CONSOLA.dir/main.cpp.s

CMakeFiles/MET_CONSOLA.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/MET_CONSOLA.dir/main.cpp.o.requires

CMakeFiles/MET_CONSOLA.dir/main.cpp.o.provides: CMakeFiles/MET_CONSOLA.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/MET_CONSOLA.dir/build.make CMakeFiles/MET_CONSOLA.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/MET_CONSOLA.dir/main.cpp.o.provides

CMakeFiles/MET_CONSOLA.dir/main.cpp.o.provides.build: CMakeFiles/MET_CONSOLA.dir/main.cpp.o


CMakeFiles/MET_CONSOLA.dir/sensor.cpp.o: CMakeFiles/MET_CONSOLA.dir/flags.make
CMakeFiles/MET_CONSOLA.dir/sensor.cpp.o: /home/juancospina/PJ/Project/CONSOLA/sensor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/juancospina/PJ/Project/build-CONSOLA-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MET_CONSOLA.dir/sensor.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MET_CONSOLA.dir/sensor.cpp.o -c /home/juancospina/PJ/Project/CONSOLA/sensor.cpp

CMakeFiles/MET_CONSOLA.dir/sensor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MET_CONSOLA.dir/sensor.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/juancospina/PJ/Project/CONSOLA/sensor.cpp > CMakeFiles/MET_CONSOLA.dir/sensor.cpp.i

CMakeFiles/MET_CONSOLA.dir/sensor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MET_CONSOLA.dir/sensor.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/juancospina/PJ/Project/CONSOLA/sensor.cpp -o CMakeFiles/MET_CONSOLA.dir/sensor.cpp.s

CMakeFiles/MET_CONSOLA.dir/sensor.cpp.o.requires:

.PHONY : CMakeFiles/MET_CONSOLA.dir/sensor.cpp.o.requires

CMakeFiles/MET_CONSOLA.dir/sensor.cpp.o.provides: CMakeFiles/MET_CONSOLA.dir/sensor.cpp.o.requires
	$(MAKE) -f CMakeFiles/MET_CONSOLA.dir/build.make CMakeFiles/MET_CONSOLA.dir/sensor.cpp.o.provides.build
.PHONY : CMakeFiles/MET_CONSOLA.dir/sensor.cpp.o.provides

CMakeFiles/MET_CONSOLA.dir/sensor.cpp.o.provides.build: CMakeFiles/MET_CONSOLA.dir/sensor.cpp.o


# Object files for target MET_CONSOLA
MET_CONSOLA_OBJECTS = \
"CMakeFiles/MET_CONSOLA.dir/main.cpp.o" \
"CMakeFiles/MET_CONSOLA.dir/sensor.cpp.o"

# External object files for target MET_CONSOLA
MET_CONSOLA_EXTERNAL_OBJECTS =

MET_CONSOLA: CMakeFiles/MET_CONSOLA.dir/main.cpp.o
MET_CONSOLA: CMakeFiles/MET_CONSOLA.dir/sensor.cpp.o
MET_CONSOLA: CMakeFiles/MET_CONSOLA.dir/build.make
MET_CONSOLA: CMakeFiles/MET_CONSOLA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/juancospina/PJ/Project/build-CONSOLA-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable MET_CONSOLA"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MET_CONSOLA.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MET_CONSOLA.dir/build: MET_CONSOLA

.PHONY : CMakeFiles/MET_CONSOLA.dir/build

CMakeFiles/MET_CONSOLA.dir/requires: CMakeFiles/MET_CONSOLA.dir/main.cpp.o.requires
CMakeFiles/MET_CONSOLA.dir/requires: CMakeFiles/MET_CONSOLA.dir/sensor.cpp.o.requires

.PHONY : CMakeFiles/MET_CONSOLA.dir/requires

CMakeFiles/MET_CONSOLA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MET_CONSOLA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MET_CONSOLA.dir/clean

CMakeFiles/MET_CONSOLA.dir/depend:
	cd /home/juancospina/PJ/Project/build-CONSOLA-Desktop-Default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/juancospina/PJ/Project/CONSOLA /home/juancospina/PJ/Project/CONSOLA /home/juancospina/PJ/Project/build-CONSOLA-Desktop-Default /home/juancospina/PJ/Project/build-CONSOLA-Desktop-Default /home/juancospina/PJ/Project/build-CONSOLA-Desktop-Default/CMakeFiles/MET_CONSOLA.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MET_CONSOLA.dir/depend

