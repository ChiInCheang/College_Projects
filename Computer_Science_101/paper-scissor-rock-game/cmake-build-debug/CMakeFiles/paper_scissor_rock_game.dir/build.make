# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/jeandsmith/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/172.4343.16/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/jeandsmith/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/172.4343.16/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jeandsmith/Documents/College_Projects/Computer_Science_101/paper-scissor-rock-game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jeandsmith/Documents/College_Projects/Computer_Science_101/paper-scissor-rock-game/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/paper_scissor_rock_game.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/paper_scissor_rock_game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/paper_scissor_rock_game.dir/flags.make

CMakeFiles/paper_scissor_rock_game.dir/main.cpp.o: CMakeFiles/paper_scissor_rock_game.dir/flags.make
CMakeFiles/paper_scissor_rock_game.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jeandsmith/Documents/College_Projects/Computer_Science_101/paper-scissor-rock-game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/paper_scissor_rock_game.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/paper_scissor_rock_game.dir/main.cpp.o -c /home/jeandsmith/Documents/College_Projects/Computer_Science_101/paper-scissor-rock-game/main.cpp

CMakeFiles/paper_scissor_rock_game.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/paper_scissor_rock_game.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeandsmith/Documents/College_Projects/Computer_Science_101/paper-scissor-rock-game/main.cpp > CMakeFiles/paper_scissor_rock_game.dir/main.cpp.i

CMakeFiles/paper_scissor_rock_game.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/paper_scissor_rock_game.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeandsmith/Documents/College_Projects/Computer_Science_101/paper-scissor-rock-game/main.cpp -o CMakeFiles/paper_scissor_rock_game.dir/main.cpp.s

CMakeFiles/paper_scissor_rock_game.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/paper_scissor_rock_game.dir/main.cpp.o.requires

CMakeFiles/paper_scissor_rock_game.dir/main.cpp.o.provides: CMakeFiles/paper_scissor_rock_game.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/paper_scissor_rock_game.dir/build.make CMakeFiles/paper_scissor_rock_game.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/paper_scissor_rock_game.dir/main.cpp.o.provides

CMakeFiles/paper_scissor_rock_game.dir/main.cpp.o.provides.build: CMakeFiles/paper_scissor_rock_game.dir/main.cpp.o


# Object files for target paper_scissor_rock_game
paper_scissor_rock_game_OBJECTS = \
"CMakeFiles/paper_scissor_rock_game.dir/main.cpp.o"

# External object files for target paper_scissor_rock_game
paper_scissor_rock_game_EXTERNAL_OBJECTS =

paper_scissor_rock_game: CMakeFiles/paper_scissor_rock_game.dir/main.cpp.o
paper_scissor_rock_game: CMakeFiles/paper_scissor_rock_game.dir/build.make
paper_scissor_rock_game: CMakeFiles/paper_scissor_rock_game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jeandsmith/Documents/College_Projects/Computer_Science_101/paper-scissor-rock-game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable paper_scissor_rock_game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/paper_scissor_rock_game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/paper_scissor_rock_game.dir/build: paper_scissor_rock_game

.PHONY : CMakeFiles/paper_scissor_rock_game.dir/build

CMakeFiles/paper_scissor_rock_game.dir/requires: CMakeFiles/paper_scissor_rock_game.dir/main.cpp.o.requires

.PHONY : CMakeFiles/paper_scissor_rock_game.dir/requires

CMakeFiles/paper_scissor_rock_game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/paper_scissor_rock_game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/paper_scissor_rock_game.dir/clean

CMakeFiles/paper_scissor_rock_game.dir/depend:
	cd /home/jeandsmith/Documents/College_Projects/Computer_Science_101/paper-scissor-rock-game/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jeandsmith/Documents/College_Projects/Computer_Science_101/paper-scissor-rock-game /home/jeandsmith/Documents/College_Projects/Computer_Science_101/paper-scissor-rock-game /home/jeandsmith/Documents/College_Projects/Computer_Science_101/paper-scissor-rock-game/cmake-build-debug /home/jeandsmith/Documents/College_Projects/Computer_Science_101/paper-scissor-rock-game/cmake-build-debug /home/jeandsmith/Documents/College_Projects/Computer_Science_101/paper-scissor-rock-game/cmake-build-debug/CMakeFiles/paper_scissor_rock_game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/paper_scissor_rock_game.dir/depend

