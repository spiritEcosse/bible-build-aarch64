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
include src/modules/CMakeFiles/modules.dir/depend.make

# Include the progress variables for this target.
include src/modules/CMakeFiles/modules.dir/progress.make

# Include the compile flags for this target's objects.
include src/modules/CMakeFiles/modules.dir/flags.make

src/modules/CMakeFiles/modules.dir/modules_autogen/mocs_compilation.cpp.o: src/modules/CMakeFiles/modules.dir/flags.make
src/modules/CMakeFiles/modules.dir/modules_autogen/mocs_compilation.cpp.o: src/modules/modules_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/modules/CMakeFiles/modules.dir/modules_autogen/mocs_compilation.cpp.o"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules.dir/modules_autogen/mocs_compilation.cpp.o -c /home/mersdk/src/src/modules/modules_autogen/mocs_compilation.cpp

src/modules/CMakeFiles/modules.dir/modules_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules.dir/modules_autogen/mocs_compilation.cpp.i"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/modules/modules_autogen/mocs_compilation.cpp > CMakeFiles/modules.dir/modules_autogen/mocs_compilation.cpp.i

src/modules/CMakeFiles/modules.dir/modules_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules.dir/modules_autogen/mocs_compilation.cpp.s"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/modules/modules_autogen/mocs_compilation.cpp -o CMakeFiles/modules.dir/modules_autogen/mocs_compilation.cpp.s

src/modules/CMakeFiles/modules.dir/src/booksmodel.cpp.o: src/modules/CMakeFiles/modules.dir/flags.make
src/modules/CMakeFiles/modules.dir/src/booksmodel.cpp.o: src/modules/src/booksmodel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/modules/CMakeFiles/modules.dir/src/booksmodel.cpp.o"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules.dir/src/booksmodel.cpp.o -c /home/mersdk/src/src/modules/src/booksmodel.cpp

src/modules/CMakeFiles/modules.dir/src/booksmodel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules.dir/src/booksmodel.cpp.i"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/modules/src/booksmodel.cpp > CMakeFiles/modules.dir/src/booksmodel.cpp.i

src/modules/CMakeFiles/modules.dir/src/booksmodel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules.dir/src/booksmodel.cpp.s"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/modules/src/booksmodel.cpp -o CMakeFiles/modules.dir/src/booksmodel.cpp.s

src/modules/CMakeFiles/modules.dir/src/commentsmodel.cpp.o: src/modules/CMakeFiles/modules.dir/flags.make
src/modules/CMakeFiles/modules.dir/src/commentsmodel.cpp.o: src/modules/src/commentsmodel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/modules/CMakeFiles/modules.dir/src/commentsmodel.cpp.o"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules.dir/src/commentsmodel.cpp.o -c /home/mersdk/src/src/modules/src/commentsmodel.cpp

src/modules/CMakeFiles/modules.dir/src/commentsmodel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules.dir/src/commentsmodel.cpp.i"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/modules/src/commentsmodel.cpp > CMakeFiles/modules.dir/src/commentsmodel.cpp.i

src/modules/CMakeFiles/modules.dir/src/commentsmodel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules.dir/src/commentsmodel.cpp.s"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/modules/src/commentsmodel.cpp -o CMakeFiles/modules.dir/src/commentsmodel.cpp.s

src/modules/CMakeFiles/modules.dir/src/dbmanager.cpp.o: src/modules/CMakeFiles/modules.dir/flags.make
src/modules/CMakeFiles/modules.dir/src/dbmanager.cpp.o: src/modules/src/dbmanager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/modules/CMakeFiles/modules.dir/src/dbmanager.cpp.o"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules.dir/src/dbmanager.cpp.o -c /home/mersdk/src/src/modules/src/dbmanager.cpp

src/modules/CMakeFiles/modules.dir/src/dbmanager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules.dir/src/dbmanager.cpp.i"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/modules/src/dbmanager.cpp > CMakeFiles/modules.dir/src/dbmanager.cpp.i

src/modules/CMakeFiles/modules.dir/src/dbmanager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules.dir/src/dbmanager.cpp.s"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/modules/src/dbmanager.cpp -o CMakeFiles/modules.dir/src/dbmanager.cpp.s

src/modules/CMakeFiles/modules.dir/src/groupmodules.cpp.o: src/modules/CMakeFiles/modules.dir/flags.make
src/modules/CMakeFiles/modules.dir/src/groupmodules.cpp.o: src/modules/src/groupmodules.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/modules/CMakeFiles/modules.dir/src/groupmodules.cpp.o"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules.dir/src/groupmodules.cpp.o -c /home/mersdk/src/src/modules/src/groupmodules.cpp

src/modules/CMakeFiles/modules.dir/src/groupmodules.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules.dir/src/groupmodules.cpp.i"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/modules/src/groupmodules.cpp > CMakeFiles/modules.dir/src/groupmodules.cpp.i

src/modules/CMakeFiles/modules.dir/src/groupmodules.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules.dir/src/groupmodules.cpp.s"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/modules/src/groupmodules.cpp -o CMakeFiles/modules.dir/src/groupmodules.cpp.s

src/modules/CMakeFiles/modules.dir/src/historymodel.cpp.o: src/modules/CMakeFiles/modules.dir/flags.make
src/modules/CMakeFiles/modules.dir/src/historymodel.cpp.o: src/modules/src/historymodel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/modules/CMakeFiles/modules.dir/src/historymodel.cpp.o"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules.dir/src/historymodel.cpp.o -c /home/mersdk/src/src/modules/src/historymodel.cpp

src/modules/CMakeFiles/modules.dir/src/historymodel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules.dir/src/historymodel.cpp.i"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/modules/src/historymodel.cpp > CMakeFiles/modules.dir/src/historymodel.cpp.i

src/modules/CMakeFiles/modules.dir/src/historymodel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules.dir/src/historymodel.cpp.s"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/modules/src/historymodel.cpp -o CMakeFiles/modules.dir/src/historymodel.cpp.s

src/modules/CMakeFiles/modules.dir/src/host.cpp.o: src/modules/CMakeFiles/modules.dir/flags.make
src/modules/CMakeFiles/modules.dir/src/host.cpp.o: src/modules/src/host.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/modules/CMakeFiles/modules.dir/src/host.cpp.o"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules.dir/src/host.cpp.o -c /home/mersdk/src/src/modules/src/host.cpp

src/modules/CMakeFiles/modules.dir/src/host.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules.dir/src/host.cpp.i"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/modules/src/host.cpp > CMakeFiles/modules.dir/src/host.cpp.i

src/modules/CMakeFiles/modules.dir/src/host.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules.dir/src/host.cpp.s"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/modules/src/host.cpp -o CMakeFiles/modules.dir/src/host.cpp.s

src/modules/CMakeFiles/modules.dir/src/hostmodel.cpp.o: src/modules/CMakeFiles/modules.dir/flags.make
src/modules/CMakeFiles/modules.dir/src/hostmodel.cpp.o: src/modules/src/hostmodel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/modules/CMakeFiles/modules.dir/src/hostmodel.cpp.o"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules.dir/src/hostmodel.cpp.o -c /home/mersdk/src/src/modules/src/hostmodel.cpp

src/modules/CMakeFiles/modules.dir/src/hostmodel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules.dir/src/hostmodel.cpp.i"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/modules/src/hostmodel.cpp > CMakeFiles/modules.dir/src/hostmodel.cpp.i

src/modules/CMakeFiles/modules.dir/src/hostmodel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules.dir/src/hostmodel.cpp.s"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/modules/src/hostmodel.cpp -o CMakeFiles/modules.dir/src/hostmodel.cpp.s

src/modules/CMakeFiles/modules.dir/src/managergroup.cpp.o: src/modules/CMakeFiles/modules.dir/flags.make
src/modules/CMakeFiles/modules.dir/src/managergroup.cpp.o: src/modules/src/managergroup.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/modules/CMakeFiles/modules.dir/src/managergroup.cpp.o"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules.dir/src/managergroup.cpp.o -c /home/mersdk/src/src/modules/src/managergroup.cpp

src/modules/CMakeFiles/modules.dir/src/managergroup.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules.dir/src/managergroup.cpp.i"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/modules/src/managergroup.cpp > CMakeFiles/modules.dir/src/managergroup.cpp.i

src/modules/CMakeFiles/modules.dir/src/managergroup.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules.dir/src/managergroup.cpp.s"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/modules/src/managergroup.cpp -o CMakeFiles/modules.dir/src/managergroup.cpp.s

src/modules/CMakeFiles/modules.dir/src/managerregistry.cpp.o: src/modules/CMakeFiles/modules.dir/flags.make
src/modules/CMakeFiles/modules.dir/src/managerregistry.cpp.o: src/modules/src/managerregistry.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/modules/CMakeFiles/modules.dir/src/managerregistry.cpp.o"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules.dir/src/managerregistry.cpp.o -c /home/mersdk/src/src/modules/src/managerregistry.cpp

src/modules/CMakeFiles/modules.dir/src/managerregistry.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules.dir/src/managerregistry.cpp.i"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/modules/src/managerregistry.cpp > CMakeFiles/modules.dir/src/managerregistry.cpp.i

src/modules/CMakeFiles/modules.dir/src/managerregistry.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules.dir/src/managerregistry.cpp.s"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/modules/src/managerregistry.cpp -o CMakeFiles/modules.dir/src/managerregistry.cpp.s

src/modules/CMakeFiles/modules.dir/src/modelgroupmodules.cpp.o: src/modules/CMakeFiles/modules.dir/flags.make
src/modules/CMakeFiles/modules.dir/src/modelgroupmodules.cpp.o: src/modules/src/modelgroupmodules.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object src/modules/CMakeFiles/modules.dir/src/modelgroupmodules.cpp.o"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules.dir/src/modelgroupmodules.cpp.o -c /home/mersdk/src/src/modules/src/modelgroupmodules.cpp

src/modules/CMakeFiles/modules.dir/src/modelgroupmodules.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules.dir/src/modelgroupmodules.cpp.i"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/modules/src/modelgroupmodules.cpp > CMakeFiles/modules.dir/src/modelgroupmodules.cpp.i

src/modules/CMakeFiles/modules.dir/src/modelgroupmodules.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules.dir/src/modelgroupmodules.cpp.s"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/modules/src/modelgroupmodules.cpp -o CMakeFiles/modules.dir/src/modelgroupmodules.cpp.s

src/modules/CMakeFiles/modules.dir/src/modelhost.cpp.o: src/modules/CMakeFiles/modules.dir/flags.make
src/modules/CMakeFiles/modules.dir/src/modelhost.cpp.o: src/modules/src/modelhost.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object src/modules/CMakeFiles/modules.dir/src/modelhost.cpp.o"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules.dir/src/modelhost.cpp.o -c /home/mersdk/src/src/modules/src/modelhost.cpp

src/modules/CMakeFiles/modules.dir/src/modelhost.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules.dir/src/modelhost.cpp.i"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/modules/src/modelhost.cpp > CMakeFiles/modules.dir/src/modelhost.cpp.i

src/modules/CMakeFiles/modules.dir/src/modelhost.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules.dir/src/modelhost.cpp.s"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/modules/src/modelhost.cpp -o CMakeFiles/modules.dir/src/modelhost.cpp.s

src/modules/CMakeFiles/modules.dir/src/modelmodule.cpp.o: src/modules/CMakeFiles/modules.dir/flags.make
src/modules/CMakeFiles/modules.dir/src/modelmodule.cpp.o: src/modules/src/modelmodule.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object src/modules/CMakeFiles/modules.dir/src/modelmodule.cpp.o"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules.dir/src/modelmodule.cpp.o -c /home/mersdk/src/src/modules/src/modelmodule.cpp

src/modules/CMakeFiles/modules.dir/src/modelmodule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules.dir/src/modelmodule.cpp.i"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/modules/src/modelmodule.cpp > CMakeFiles/modules.dir/src/modelmodule.cpp.i

src/modules/CMakeFiles/modules.dir/src/modelmodule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules.dir/src/modelmodule.cpp.s"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/modules/src/modelmodule.cpp -o CMakeFiles/modules.dir/src/modelmodule.cpp.s

src/modules/CMakeFiles/modules.dir/src/modelregistry.cpp.o: src/modules/CMakeFiles/modules.dir/flags.make
src/modules/CMakeFiles/modules.dir/src/modelregistry.cpp.o: src/modules/src/modelregistry.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object src/modules/CMakeFiles/modules.dir/src/modelregistry.cpp.o"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules.dir/src/modelregistry.cpp.o -c /home/mersdk/src/src/modules/src/modelregistry.cpp

src/modules/CMakeFiles/modules.dir/src/modelregistry.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules.dir/src/modelregistry.cpp.i"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/modules/src/modelregistry.cpp > CMakeFiles/modules.dir/src/modelregistry.cpp.i

src/modules/CMakeFiles/modules.dir/src/modelregistry.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules.dir/src/modelregistry.cpp.s"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/modules/src/modelregistry.cpp -o CMakeFiles/modules.dir/src/modelregistry.cpp.s

src/modules/CMakeFiles/modules.dir/src/modelupdate.cpp.o: src/modules/CMakeFiles/modules.dir/flags.make
src/modules/CMakeFiles/modules.dir/src/modelupdate.cpp.o: src/modules/src/modelupdate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object src/modules/CMakeFiles/modules.dir/src/modelupdate.cpp.o"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules.dir/src/modelupdate.cpp.o -c /home/mersdk/src/src/modules/src/modelupdate.cpp

src/modules/CMakeFiles/modules.dir/src/modelupdate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules.dir/src/modelupdate.cpp.i"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/modules/src/modelupdate.cpp > CMakeFiles/modules.dir/src/modelupdate.cpp.i

src/modules/CMakeFiles/modules.dir/src/modelupdate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules.dir/src/modelupdate.cpp.s"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/modules/src/modelupdate.cpp -o CMakeFiles/modules.dir/src/modelupdate.cpp.s

src/modules/CMakeFiles/modules.dir/src/module.cpp.o: src/modules/CMakeFiles/modules.dir/flags.make
src/modules/CMakeFiles/modules.dir/src/module.cpp.o: src/modules/src/module.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object src/modules/CMakeFiles/modules.dir/src/module.cpp.o"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules.dir/src/module.cpp.o -c /home/mersdk/src/src/modules/src/module.cpp

src/modules/CMakeFiles/modules.dir/src/module.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules.dir/src/module.cpp.i"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/modules/src/module.cpp > CMakeFiles/modules.dir/src/module.cpp.i

src/modules/CMakeFiles/modules.dir/src/module.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules.dir/src/module.cpp.s"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/modules/src/module.cpp -o CMakeFiles/modules.dir/src/module.cpp.s

src/modules/CMakeFiles/modules.dir/src/moduledownload.cpp.o: src/modules/CMakeFiles/modules.dir/flags.make
src/modules/CMakeFiles/modules.dir/src/moduledownload.cpp.o: src/modules/src/moduledownload.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object src/modules/CMakeFiles/modules.dir/src/moduledownload.cpp.o"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules.dir/src/moduledownload.cpp.o -c /home/mersdk/src/src/modules/src/moduledownload.cpp

src/modules/CMakeFiles/modules.dir/src/moduledownload.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules.dir/src/moduledownload.cpp.i"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/modules/src/moduledownload.cpp > CMakeFiles/modules.dir/src/moduledownload.cpp.i

src/modules/CMakeFiles/modules.dir/src/moduledownload.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules.dir/src/moduledownload.cpp.s"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/modules/src/moduledownload.cpp -o CMakeFiles/modules.dir/src/moduledownload.cpp.s

src/modules/CMakeFiles/modules.dir/src/qsortfiltersqlquerymodel.cpp.o: src/modules/CMakeFiles/modules.dir/flags.make
src/modules/CMakeFiles/modules.dir/src/qsortfiltersqlquerymodel.cpp.o: src/modules/src/qsortfiltersqlquerymodel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object src/modules/CMakeFiles/modules.dir/src/qsortfiltersqlquerymodel.cpp.o"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules.dir/src/qsortfiltersqlquerymodel.cpp.o -c /home/mersdk/src/src/modules/src/qsortfiltersqlquerymodel.cpp

src/modules/CMakeFiles/modules.dir/src/qsortfiltersqlquerymodel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules.dir/src/qsortfiltersqlquerymodel.cpp.i"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/modules/src/qsortfiltersqlquerymodel.cpp > CMakeFiles/modules.dir/src/qsortfiltersqlquerymodel.cpp.i

src/modules/CMakeFiles/modules.dir/src/qsortfiltersqlquerymodel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules.dir/src/qsortfiltersqlquerymodel.cpp.s"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/modules/src/qsortfiltersqlquerymodel.cpp -o CMakeFiles/modules.dir/src/qsortfiltersqlquerymodel.cpp.s

src/modules/CMakeFiles/modules.dir/src/registry.cpp.o: src/modules/CMakeFiles/modules.dir/flags.make
src/modules/CMakeFiles/modules.dir/src/registry.cpp.o: src/modules/src/registry.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building CXX object src/modules/CMakeFiles/modules.dir/src/registry.cpp.o"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules.dir/src/registry.cpp.o -c /home/mersdk/src/src/modules/src/registry.cpp

src/modules/CMakeFiles/modules.dir/src/registry.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules.dir/src/registry.cpp.i"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/modules/src/registry.cpp > CMakeFiles/modules.dir/src/registry.cpp.i

src/modules/CMakeFiles/modules.dir/src/registry.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules.dir/src/registry.cpp.s"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/modules/src/registry.cpp -o CMakeFiles/modules.dir/src/registry.cpp.s

src/modules/CMakeFiles/modules.dir/src/versesmodel.cpp.o: src/modules/CMakeFiles/modules.dir/flags.make
src/modules/CMakeFiles/modules.dir/src/versesmodel.cpp.o: src/modules/src/versesmodel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building CXX object src/modules/CMakeFiles/modules.dir/src/versesmodel.cpp.o"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules.dir/src/versesmodel.cpp.o -c /home/mersdk/src/src/modules/src/versesmodel.cpp

src/modules/CMakeFiles/modules.dir/src/versesmodel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules.dir/src/versesmodel.cpp.i"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/modules/src/versesmodel.cpp > CMakeFiles/modules.dir/src/versesmodel.cpp.i

src/modules/CMakeFiles/modules.dir/src/versesmodel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules.dir/src/versesmodel.cpp.s"
	cd /home/mersdk/src/src/modules && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/modules/src/versesmodel.cpp -o CMakeFiles/modules.dir/src/versesmodel.cpp.s

# Object files for target modules
modules_OBJECTS = \
"CMakeFiles/modules.dir/modules_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/modules.dir/src/booksmodel.cpp.o" \
"CMakeFiles/modules.dir/src/commentsmodel.cpp.o" \
"CMakeFiles/modules.dir/src/dbmanager.cpp.o" \
"CMakeFiles/modules.dir/src/groupmodules.cpp.o" \
"CMakeFiles/modules.dir/src/historymodel.cpp.o" \
"CMakeFiles/modules.dir/src/host.cpp.o" \
"CMakeFiles/modules.dir/src/hostmodel.cpp.o" \
"CMakeFiles/modules.dir/src/managergroup.cpp.o" \
"CMakeFiles/modules.dir/src/managerregistry.cpp.o" \
"CMakeFiles/modules.dir/src/modelgroupmodules.cpp.o" \
"CMakeFiles/modules.dir/src/modelhost.cpp.o" \
"CMakeFiles/modules.dir/src/modelmodule.cpp.o" \
"CMakeFiles/modules.dir/src/modelregistry.cpp.o" \
"CMakeFiles/modules.dir/src/modelupdate.cpp.o" \
"CMakeFiles/modules.dir/src/module.cpp.o" \
"CMakeFiles/modules.dir/src/moduledownload.cpp.o" \
"CMakeFiles/modules.dir/src/qsortfiltersqlquerymodel.cpp.o" \
"CMakeFiles/modules.dir/src/registry.cpp.o" \
"CMakeFiles/modules.dir/src/versesmodel.cpp.o"

# External object files for target modules
modules_EXTERNAL_OBJECTS =

src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/modules_autogen/mocs_compilation.cpp.o
src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/src/booksmodel.cpp.o
src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/src/commentsmodel.cpp.o
src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/src/dbmanager.cpp.o
src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/src/groupmodules.cpp.o
src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/src/historymodel.cpp.o
src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/src/host.cpp.o
src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/src/hostmodel.cpp.o
src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/src/managergroup.cpp.o
src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/src/managerregistry.cpp.o
src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/src/modelgroupmodules.cpp.o
src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/src/modelhost.cpp.o
src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/src/modelmodule.cpp.o
src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/src/modelregistry.cpp.o
src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/src/modelupdate.cpp.o
src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/src/module.cpp.o
src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/src/moduledownload.cpp.o
src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/src/qsortfiltersqlquerymodel.cpp.o
src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/src/registry.cpp.o
src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/src/versesmodel.cpp.o
src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/build.make
src/modules/libmodules.a: src/modules/CMakeFiles/modules.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Linking CXX static library libmodules.a"
	cd /home/mersdk/src/src/modules && $(CMAKE_COMMAND) -P CMakeFiles/modules.dir/cmake_clean_target.cmake
	cd /home/mersdk/src/src/modules && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/modules.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/modules/CMakeFiles/modules.dir/build: src/modules/libmodules.a

.PHONY : src/modules/CMakeFiles/modules.dir/build

src/modules/CMakeFiles/modules.dir/clean:
	cd /home/mersdk/src/src/modules && $(CMAKE_COMMAND) -P CMakeFiles/modules.dir/cmake_clean.cmake
.PHONY : src/modules/CMakeFiles/modules.dir/clean

src/modules/CMakeFiles/modules.dir/depend:
	cd /home/mersdk/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mersdk/src /home/mersdk/src/src/modules /home/mersdk/src /home/mersdk/src/src/modules /home/mersdk/src/src/modules/CMakeFiles/modules.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/modules/CMakeFiles/modules.dir/depend
