# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/pyamcha/Desktop/c01/ex03

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/pyamcha/Desktop/c01/ex03/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex03.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ex03.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex03.dir/flags.make

CMakeFiles/ex03.dir/main.cpp.o: CMakeFiles/ex03.dir/flags.make
CMakeFiles/ex03.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pyamcha/Desktop/c01/ex03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex03.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex03.dir/main.cpp.o -c /Users/pyamcha/Desktop/c01/ex03/main.cpp

CMakeFiles/ex03.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex03.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pyamcha/Desktop/c01/ex03/main.cpp > CMakeFiles/ex03.dir/main.cpp.i

CMakeFiles/ex03.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex03.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pyamcha/Desktop/c01/ex03/main.cpp -o CMakeFiles/ex03.dir/main.cpp.s

CMakeFiles/ex03.dir/Weapon.cpp.o: CMakeFiles/ex03.dir/flags.make
CMakeFiles/ex03.dir/Weapon.cpp.o: ../Weapon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pyamcha/Desktop/c01/ex03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex03.dir/Weapon.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex03.dir/Weapon.cpp.o -c /Users/pyamcha/Desktop/c01/ex03/Weapon.cpp

CMakeFiles/ex03.dir/Weapon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex03.dir/Weapon.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pyamcha/Desktop/c01/ex03/Weapon.cpp > CMakeFiles/ex03.dir/Weapon.cpp.i

CMakeFiles/ex03.dir/Weapon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex03.dir/Weapon.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pyamcha/Desktop/c01/ex03/Weapon.cpp -o CMakeFiles/ex03.dir/Weapon.cpp.s

CMakeFiles/ex03.dir/HumanA.cpp.o: CMakeFiles/ex03.dir/flags.make
CMakeFiles/ex03.dir/HumanA.cpp.o: ../HumanA.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pyamcha/Desktop/c01/ex03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ex03.dir/HumanA.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex03.dir/HumanA.cpp.o -c /Users/pyamcha/Desktop/c01/ex03/HumanA.cpp

CMakeFiles/ex03.dir/HumanA.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex03.dir/HumanA.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pyamcha/Desktop/c01/ex03/HumanA.cpp > CMakeFiles/ex03.dir/HumanA.cpp.i

CMakeFiles/ex03.dir/HumanA.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex03.dir/HumanA.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pyamcha/Desktop/c01/ex03/HumanA.cpp -o CMakeFiles/ex03.dir/HumanA.cpp.s

CMakeFiles/ex03.dir/HumanB.cpp.o: CMakeFiles/ex03.dir/flags.make
CMakeFiles/ex03.dir/HumanB.cpp.o: ../HumanB.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/pyamcha/Desktop/c01/ex03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ex03.dir/HumanB.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex03.dir/HumanB.cpp.o -c /Users/pyamcha/Desktop/c01/ex03/HumanB.cpp

CMakeFiles/ex03.dir/HumanB.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex03.dir/HumanB.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/pyamcha/Desktop/c01/ex03/HumanB.cpp > CMakeFiles/ex03.dir/HumanB.cpp.i

CMakeFiles/ex03.dir/HumanB.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex03.dir/HumanB.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/pyamcha/Desktop/c01/ex03/HumanB.cpp -o CMakeFiles/ex03.dir/HumanB.cpp.s

# Object files for target ex03
ex03_OBJECTS = \
"CMakeFiles/ex03.dir/main.cpp.o" \
"CMakeFiles/ex03.dir/Weapon.cpp.o" \
"CMakeFiles/ex03.dir/HumanA.cpp.o" \
"CMakeFiles/ex03.dir/HumanB.cpp.o"

# External object files for target ex03
ex03_EXTERNAL_OBJECTS =

ex03: CMakeFiles/ex03.dir/main.cpp.o
ex03: CMakeFiles/ex03.dir/Weapon.cpp.o
ex03: CMakeFiles/ex03.dir/HumanA.cpp.o
ex03: CMakeFiles/ex03.dir/HumanB.cpp.o
ex03: CMakeFiles/ex03.dir/build.make
ex03: CMakeFiles/ex03.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/pyamcha/Desktop/c01/ex03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ex03"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex03.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex03.dir/build: ex03
.PHONY : CMakeFiles/ex03.dir/build

CMakeFiles/ex03.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex03.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex03.dir/clean

CMakeFiles/ex03.dir/depend:
	cd /Users/pyamcha/Desktop/c01/ex03/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/pyamcha/Desktop/c01/ex03 /Users/pyamcha/Desktop/c01/ex03 /Users/pyamcha/Desktop/c01/ex03/cmake-build-debug /Users/pyamcha/Desktop/c01/ex03/cmake-build-debug /Users/pyamcha/Desktop/c01/ex03/cmake-build-debug/CMakeFiles/ex03.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex03.dir/depend

