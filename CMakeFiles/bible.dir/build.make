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
include CMakeFiles/bible.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bible.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bible.dir/flags.make

qrc_qml.cpp: qml/bible.qml
qrc_qml.cpp: qml/cover/CoverPage.qml
qrc_qml.cpp: qml/pages/BooksPage.qml
qrc_qml.cpp: qml/pages/Main.qml
qrc_qml.cpp: qml/pages/CommentsPage.qml
qrc_qml.cpp: qml/pages/CoverLoader.js
qrc_qml.cpp: qml/pages/History.qml
qrc_qml.cpp: qml/pages/ModuleInformation.qml
qrc_qml.cpp: qml/pages/ModulesPage.qml
qrc_qml.cpp: qml/pages/Pages.qml
qrc_qml.cpp: qml/pages/VersesListView.qml
qrc_qml.cpp: qml/components/ExpandingSectionBooks.qml
qrc_qml.cpp: qml/components/ExpandingSectionGroupPatch.qml
qrc_qml.cpp: qml/components/ExpandingSectionPatch.qml
qrc_qml.cpp: qml/components/FlippingPageHeader.qml
qrc_qml.cpp: qml/components/PageEdgeTransition.qml
qrc_qml.cpp: qml/components/FlippingLabelPatch.qml
qrc_qml.cpp: qml/components/GlassItemLeft.qml
qrc_qml.cpp: qml/qml.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_qml.cpp"
	/usr/lib64/qt5/bin/rcc --name qml --output /home/mersdk/src/qrc_qml.cpp /home/mersdk/src/qml/qml.qrc

CMakeFiles/bible.dir/bible_autogen/mocs_compilation.cpp.o: CMakeFiles/bible.dir/flags.make
CMakeFiles/bible.dir/bible_autogen/mocs_compilation.cpp.o: bible_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/bible.dir/bible_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bible.dir/bible_autogen/mocs_compilation.cpp.o -c /home/mersdk/src/bible_autogen/mocs_compilation.cpp

CMakeFiles/bible.dir/bible_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bible.dir/bible_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/bible_autogen/mocs_compilation.cpp > CMakeFiles/bible.dir/bible_autogen/mocs_compilation.cpp.i

CMakeFiles/bible.dir/bible_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bible.dir/bible_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/bible_autogen/mocs_compilation.cpp -o CMakeFiles/bible.dir/bible_autogen/mocs_compilation.cpp.s

CMakeFiles/bible.dir/src/bible.cpp.o: CMakeFiles/bible.dir/flags.make
CMakeFiles/bible.dir/src/bible.cpp.o: src/bible.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/bible.dir/src/bible.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bible.dir/src/bible.cpp.o -c /home/mersdk/src/src/bible.cpp

CMakeFiles/bible.dir/src/bible.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bible.dir/src/bible.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/src/bible.cpp > CMakeFiles/bible.dir/src/bible.cpp.i

CMakeFiles/bible.dir/src/bible.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bible.dir/src/bible.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/src/bible.cpp -o CMakeFiles/bible.dir/src/bible.cpp.s

CMakeFiles/bible.dir/qrc_qml.cpp.o: CMakeFiles/bible.dir/flags.make
CMakeFiles/bible.dir/qrc_qml.cpp.o: qrc_qml.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/bible.dir/qrc_qml.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bible.dir/qrc_qml.cpp.o -c /home/mersdk/src/qrc_qml.cpp

CMakeFiles/bible.dir/qrc_qml.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bible.dir/qrc_qml.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mersdk/src/qrc_qml.cpp > CMakeFiles/bible.dir/qrc_qml.cpp.i

CMakeFiles/bible.dir/qrc_qml.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bible.dir/qrc_qml.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mersdk/src/qrc_qml.cpp -o CMakeFiles/bible.dir/qrc_qml.cpp.s

# Object files for target bible
bible_OBJECTS = \
"CMakeFiles/bible.dir/bible_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/bible.dir/src/bible.cpp.o" \
"CMakeFiles/bible.dir/qrc_qml.cpp.o"

# External object files for target bible
bible_EXTERNAL_OBJECTS =

bible: CMakeFiles/bible.dir/bible_autogen/mocs_compilation.cpp.o
bible: CMakeFiles/bible.dir/src/bible.cpp.o
bible: CMakeFiles/bible.dir/qrc_qml.cpp.o
bible: CMakeFiles/bible.dir/build.make
bible: /usr/lib64/libQt5Widgets.so.5.6.3
bible: src/modules/libmodules.a
bible: src/dbmanager/libdbmanager.a
bible: src/core/libcore.a
bible: src/netmanager/libnetmanager.a
bible: /usr/lib64/libz.so
bible: src/modules/libmodules.a
bible: src/dbmanager/libdbmanager.a
bible: src/netmanager/libnetmanager.a
bible: /usr/lib64/libQt5Quick.so.5.6.3
bible: /usr/lib64/libQt5Gui.so.5.6.3
bible: 3rdparty/quazip/quazip/libquazip1-qt5.so.1.1
bible: /usr/lib64/libsqlite3.so
bible: /usr/lib64/libQt5Sql.so.5.6.3
bible: src/core/libcore.a
bible: /usr/lib64/libz.so
bible: /usr/lib64/libQt5Qml.so.5.6.3
bible: /usr/lib64/libQt5Network.so.5.6.3
bible: /usr/lib64/libQt5Core.so.5.6.3
bible: CMakeFiles/bible.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mersdk/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable bible"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bible.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bible.dir/build: bible

.PHONY : CMakeFiles/bible.dir/build

CMakeFiles/bible.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bible.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bible.dir/clean

CMakeFiles/bible.dir/depend: qrc_qml.cpp
	cd /home/mersdk/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mersdk/src /home/mersdk/src /home/mersdk/src /home/mersdk/src /home/mersdk/src/CMakeFiles/bible.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bible.dir/depend

