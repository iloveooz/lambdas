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
CMAKE_SOURCE_DIR = /home/fahr/git/lambdas/qt-lambdas/lambdas

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fahr/git/lambdas/qt-lambdas/build-lambdas-Desktop-Default

# Utility rule file for lambdas_autogen.

# Include the progress variables for this target.
include CMakeFiles/lambdas_autogen.dir/progress.make

CMakeFiles/lambdas_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fahr/git/lambdas/qt-lambdas/build-lambdas-Desktop-Default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target lambdas"
	/usr/bin/cmake -E cmake_autogen /home/fahr/git/lambdas/qt-lambdas/build-lambdas-Desktop-Default/CMakeFiles/lambdas_autogen.dir ""

lambdas_autogen: CMakeFiles/lambdas_autogen
lambdas_autogen: CMakeFiles/lambdas_autogen.dir/build.make

.PHONY : lambdas_autogen

# Rule to build all files generated by this target.
CMakeFiles/lambdas_autogen.dir/build: lambdas_autogen

.PHONY : CMakeFiles/lambdas_autogen.dir/build

CMakeFiles/lambdas_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lambdas_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lambdas_autogen.dir/clean

CMakeFiles/lambdas_autogen.dir/depend:
	cd /home/fahr/git/lambdas/qt-lambdas/build-lambdas-Desktop-Default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fahr/git/lambdas/qt-lambdas/lambdas /home/fahr/git/lambdas/qt-lambdas/lambdas /home/fahr/git/lambdas/qt-lambdas/build-lambdas-Desktop-Default /home/fahr/git/lambdas/qt-lambdas/build-lambdas-Desktop-Default /home/fahr/git/lambdas/qt-lambdas/build-lambdas-Desktop-Default/CMakeFiles/lambdas_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lambdas_autogen.dir/depend

