# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_SOURCE_DIR = /home/mersdk/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mersdk/src

# Utility rule file for netmanager_autogen.

# Include the progress variables for this target.
include src/netmanager/CMakeFiles/netmanager_autogen.dir/progress.make

src/netmanager/CMakeFiles/netmanager_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target netmanager"
	cd /home/mersdk/src/src/netmanager && /usr/bin/cmake -E cmake_autogen /home/mersdk/src/src/netmanager/CMakeFiles/netmanager_autogen.dir/AutogenInfo.json RelWithDebInfo

netmanager_autogen: src/netmanager/CMakeFiles/netmanager_autogen
netmanager_autogen: src/netmanager/CMakeFiles/netmanager_autogen.dir/build.make

.PHONY : netmanager_autogen

# Rule to build all files generated by this target.
src/netmanager/CMakeFiles/netmanager_autogen.dir/build: netmanager_autogen

.PHONY : src/netmanager/CMakeFiles/netmanager_autogen.dir/build

src/netmanager/CMakeFiles/netmanager_autogen.dir/clean:
	cd /home/mersdk/src/src/netmanager && $(CMAKE_COMMAND) -P CMakeFiles/netmanager_autogen.dir/cmake_clean.cmake
.PHONY : src/netmanager/CMakeFiles/netmanager_autogen.dir/clean

src/netmanager/CMakeFiles/netmanager_autogen.dir/depend:
	cd /home/mersdk/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mersdk/src /home/mersdk/src/src/netmanager /home/mersdk/src /home/mersdk/src/src/netmanager /home/mersdk/src/src/netmanager/CMakeFiles/netmanager_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/netmanager/CMakeFiles/netmanager_autogen.dir/depend
