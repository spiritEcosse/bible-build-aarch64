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

# Include any dependencies generated for this target.
include src/netmanager/CMakeFiles/netmanager.dir/depend.make

# Include the progress variables for this target.
include src/netmanager/CMakeFiles/netmanager.dir/progress.make

# Include the compile flags for this target's objects.
include src/netmanager/CMakeFiles/netmanager.dir/flags.make

src/netmanager/CMakeFiles/netmanager.dir/netmanager_autogen/mocs_compilation.cpp.o: src/netmanager/CMakeFiles/netmanager.dir/flags.make
src/netmanager/CMakeFiles/netmanager.dir/netmanager_autogen/mocs_compilation.cpp.o: src/netmanager/netmanager_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/netmanager/CMakeFiles/netmanager.dir/netmanager_autogen/mocs_compilation.cpp.o"
	cd /home/mersdk/src/src/netmanager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/netmanager.dir/netmanager_autogen/mocs_compilation.cpp.o -c /home/mersdk/src/src/netmanager/netmanager_autogen/mocs_compilation.cpp

src/netmanager/CMakeFiles/netmanager.dir/netmanager_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/netmanager.dir/netmanager_autogen/mocs_compilation.cpp.i"
	cd /home/mersdk/src/src/netmanager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/netmanager/netmanager_autogen/mocs_compilation.cpp > CMakeFiles/netmanager.dir/netmanager_autogen/mocs_compilation.cpp.i

src/netmanager/CMakeFiles/netmanager.dir/netmanager_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/netmanager.dir/netmanager_autogen/mocs_compilation.cpp.s"
	cd /home/mersdk/src/src/netmanager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/netmanager/netmanager_autogen/mocs_compilation.cpp -o CMakeFiles/netmanager.dir/netmanager_autogen/mocs_compilation.cpp.s

src/netmanager/CMakeFiles/netmanager.dir/src/textprogressbar.cpp.o: src/netmanager/CMakeFiles/netmanager.dir/flags.make
src/netmanager/CMakeFiles/netmanager.dir/src/textprogressbar.cpp.o: src/netmanager/src/textprogressbar.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/netmanager/CMakeFiles/netmanager.dir/src/textprogressbar.cpp.o"
	cd /home/mersdk/src/src/netmanager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/netmanager.dir/src/textprogressbar.cpp.o -c /home/mersdk/src/src/netmanager/src/textprogressbar.cpp

src/netmanager/CMakeFiles/netmanager.dir/src/textprogressbar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/netmanager.dir/src/textprogressbar.cpp.i"
	cd /home/mersdk/src/src/netmanager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/netmanager/src/textprogressbar.cpp > CMakeFiles/netmanager.dir/src/textprogressbar.cpp.i

src/netmanager/CMakeFiles/netmanager.dir/src/textprogressbar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/netmanager.dir/src/textprogressbar.cpp.s"
	cd /home/mersdk/src/src/netmanager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/netmanager/src/textprogressbar.cpp -o CMakeFiles/netmanager.dir/src/textprogressbar.cpp.s

src/netmanager/CMakeFiles/netmanager.dir/src/quickdownload.cpp.o: src/netmanager/CMakeFiles/netmanager.dir/flags.make
src/netmanager/CMakeFiles/netmanager.dir/src/quickdownload.cpp.o: src/netmanager/src/quickdownload.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/netmanager/CMakeFiles/netmanager.dir/src/quickdownload.cpp.o"
	cd /home/mersdk/src/src/netmanager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/netmanager.dir/src/quickdownload.cpp.o -c /home/mersdk/src/src/netmanager/src/quickdownload.cpp

src/netmanager/CMakeFiles/netmanager.dir/src/quickdownload.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/netmanager.dir/src/quickdownload.cpp.i"
	cd /home/mersdk/src/src/netmanager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/netmanager/src/quickdownload.cpp > CMakeFiles/netmanager.dir/src/quickdownload.cpp.i

src/netmanager/CMakeFiles/netmanager.dir/src/quickdownload.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/netmanager.dir/src/quickdownload.cpp.s"
	cd /home/mersdk/src/src/netmanager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/netmanager/src/quickdownload.cpp -o CMakeFiles/netmanager.dir/src/quickdownload.cpp.s

src/netmanager/CMakeFiles/netmanager.dir/src/downloadmanager.cpp.o: src/netmanager/CMakeFiles/netmanager.dir/flags.make
src/netmanager/CMakeFiles/netmanager.dir/src/downloadmanager.cpp.o: src/netmanager/src/downloadmanager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/netmanager/CMakeFiles/netmanager.dir/src/downloadmanager.cpp.o"
	cd /home/mersdk/src/src/netmanager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/netmanager.dir/src/downloadmanager.cpp.o -c /home/mersdk/src/src/netmanager/src/downloadmanager.cpp

src/netmanager/CMakeFiles/netmanager.dir/src/downloadmanager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/netmanager.dir/src/downloadmanager.cpp.i"
	cd /home/mersdk/src/src/netmanager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/netmanager/src/downloadmanager.cpp > CMakeFiles/netmanager.dir/src/downloadmanager.cpp.i

src/netmanager/CMakeFiles/netmanager.dir/src/downloadmanager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/netmanager.dir/src/downloadmanager.cpp.s"
	cd /home/mersdk/src/src/netmanager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/netmanager/src/downloadmanager.cpp -o CMakeFiles/netmanager.dir/src/downloadmanager.cpp.s

src/netmanager/CMakeFiles/netmanager.dir/src/curlmulti.cpp.o: src/netmanager/CMakeFiles/netmanager.dir/flags.make
src/netmanager/CMakeFiles/netmanager.dir/src/curlmulti.cpp.o: src/netmanager/src/curlmulti.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/netmanager/CMakeFiles/netmanager.dir/src/curlmulti.cpp.o"
	cd /home/mersdk/src/src/netmanager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/netmanager.dir/src/curlmulti.cpp.o -c /home/mersdk/src/src/netmanager/src/curlmulti.cpp

src/netmanager/CMakeFiles/netmanager.dir/src/curlmulti.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/netmanager.dir/src/curlmulti.cpp.i"
	cd /home/mersdk/src/src/netmanager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/netmanager/src/curlmulti.cpp > CMakeFiles/netmanager.dir/src/curlmulti.cpp.i

src/netmanager/CMakeFiles/netmanager.dir/src/curlmulti.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/netmanager.dir/src/curlmulti.cpp.s"
	cd /home/mersdk/src/src/netmanager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/netmanager/src/curlmulti.cpp -o CMakeFiles/netmanager.dir/src/curlmulti.cpp.s

src/netmanager/CMakeFiles/netmanager.dir/src/curleasy.cpp.o: src/netmanager/CMakeFiles/netmanager.dir/flags.make
src/netmanager/CMakeFiles/netmanager.dir/src/curleasy.cpp.o: src/netmanager/src/curleasy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/netmanager/CMakeFiles/netmanager.dir/src/curleasy.cpp.o"
	cd /home/mersdk/src/src/netmanager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/netmanager.dir/src/curleasy.cpp.o -c /home/mersdk/src/src/netmanager/src/curleasy.cpp

src/netmanager/CMakeFiles/netmanager.dir/src/curleasy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/netmanager.dir/src/curleasy.cpp.i"
	cd /home/mersdk/src/src/netmanager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/netmanager/src/curleasy.cpp > CMakeFiles/netmanager.dir/src/curleasy.cpp.i

src/netmanager/CMakeFiles/netmanager.dir/src/curleasy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/netmanager.dir/src/curleasy.cpp.s"
	cd /home/mersdk/src/src/netmanager && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/netmanager/src/curleasy.cpp -o CMakeFiles/netmanager.dir/src/curleasy.cpp.s

# Object files for target netmanager
netmanager_OBJECTS = \
"CMakeFiles/netmanager.dir/netmanager_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/netmanager.dir/src/textprogressbar.cpp.o" \
"CMakeFiles/netmanager.dir/src/quickdownload.cpp.o" \
"CMakeFiles/netmanager.dir/src/downloadmanager.cpp.o" \
"CMakeFiles/netmanager.dir/src/curlmulti.cpp.o" \
"CMakeFiles/netmanager.dir/src/curleasy.cpp.o"

# External object files for target netmanager
netmanager_EXTERNAL_OBJECTS =

src/netmanager/libnetmanager.a: src/netmanager/CMakeFiles/netmanager.dir/netmanager_autogen/mocs_compilation.cpp.o
src/netmanager/libnetmanager.a: src/netmanager/CMakeFiles/netmanager.dir/src/textprogressbar.cpp.o
src/netmanager/libnetmanager.a: src/netmanager/CMakeFiles/netmanager.dir/src/quickdownload.cpp.o
src/netmanager/libnetmanager.a: src/netmanager/CMakeFiles/netmanager.dir/src/downloadmanager.cpp.o
src/netmanager/libnetmanager.a: src/netmanager/CMakeFiles/netmanager.dir/src/curlmulti.cpp.o
src/netmanager/libnetmanager.a: src/netmanager/CMakeFiles/netmanager.dir/src/curleasy.cpp.o
src/netmanager/libnetmanager.a: src/netmanager/CMakeFiles/netmanager.dir/build.make
src/netmanager/libnetmanager.a: src/netmanager/CMakeFiles/netmanager.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX static library libnetmanager.a"
	cd /home/mersdk/src/src/netmanager && $(CMAKE_COMMAND) -P CMakeFiles/netmanager.dir/cmake_clean_target.cmake
	cd /home/mersdk/src/src/netmanager && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/netmanager.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/netmanager/CMakeFiles/netmanager.dir/build: src/netmanager/libnetmanager.a

.PHONY : src/netmanager/CMakeFiles/netmanager.dir/build

src/netmanager/CMakeFiles/netmanager.dir/clean:
	cd /home/mersdk/src/src/netmanager && $(CMAKE_COMMAND) -P CMakeFiles/netmanager.dir/cmake_clean.cmake
.PHONY : src/netmanager/CMakeFiles/netmanager.dir/clean

src/netmanager/CMakeFiles/netmanager.dir/depend:
	cd /home/mersdk/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mersdk/src /home/mersdk/src/src/netmanager /home/mersdk/src /home/mersdk/src/src/netmanager /home/mersdk/src/src/netmanager/CMakeFiles/netmanager.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/netmanager/CMakeFiles/netmanager.dir/depend

