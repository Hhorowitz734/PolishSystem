# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.27.7/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.27.7/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/bhorowitz/Desktop/PolishSystem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bhorowitz/Desktop/PolishSystem/build

# Include any dependencies generated for this target.
include CMakeFiles/PolishSystem.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/PolishSystem.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/PolishSystem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PolishSystem.dir/flags.make

CMakeFiles/PolishSystem.dir/src/decade.cpp.o: CMakeFiles/PolishSystem.dir/flags.make
CMakeFiles/PolishSystem.dir/src/decade.cpp.o: /Users/bhorowitz/Desktop/PolishSystem/src/decade.cpp
CMakeFiles/PolishSystem.dir/src/decade.cpp.o: CMakeFiles/PolishSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/bhorowitz/Desktop/PolishSystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PolishSystem.dir/src/decade.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PolishSystem.dir/src/decade.cpp.o -MF CMakeFiles/PolishSystem.dir/src/decade.cpp.o.d -o CMakeFiles/PolishSystem.dir/src/decade.cpp.o -c /Users/bhorowitz/Desktop/PolishSystem/src/decade.cpp

CMakeFiles/PolishSystem.dir/src/decade.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/PolishSystem.dir/src/decade.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bhorowitz/Desktop/PolishSystem/src/decade.cpp > CMakeFiles/PolishSystem.dir/src/decade.cpp.i

CMakeFiles/PolishSystem.dir/src/decade.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/PolishSystem.dir/src/decade.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bhorowitz/Desktop/PolishSystem/src/decade.cpp -o CMakeFiles/PolishSystem.dir/src/decade.cpp.s

CMakeFiles/PolishSystem.dir/src/main.cpp.o: CMakeFiles/PolishSystem.dir/flags.make
CMakeFiles/PolishSystem.dir/src/main.cpp.o: /Users/bhorowitz/Desktop/PolishSystem/src/main.cpp
CMakeFiles/PolishSystem.dir/src/main.cpp.o: CMakeFiles/PolishSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/bhorowitz/Desktop/PolishSystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PolishSystem.dir/src/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PolishSystem.dir/src/main.cpp.o -MF CMakeFiles/PolishSystem.dir/src/main.cpp.o.d -o CMakeFiles/PolishSystem.dir/src/main.cpp.o -c /Users/bhorowitz/Desktop/PolishSystem/src/main.cpp

CMakeFiles/PolishSystem.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/PolishSystem.dir/src/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bhorowitz/Desktop/PolishSystem/src/main.cpp > CMakeFiles/PolishSystem.dir/src/main.cpp.i

CMakeFiles/PolishSystem.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/PolishSystem.dir/src/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bhorowitz/Desktop/PolishSystem/src/main.cpp -o CMakeFiles/PolishSystem.dir/src/main.cpp.s

CMakeFiles/PolishSystem.dir/src/year.cpp.o: CMakeFiles/PolishSystem.dir/flags.make
CMakeFiles/PolishSystem.dir/src/year.cpp.o: /Users/bhorowitz/Desktop/PolishSystem/src/year.cpp
CMakeFiles/PolishSystem.dir/src/year.cpp.o: CMakeFiles/PolishSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/bhorowitz/Desktop/PolishSystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/PolishSystem.dir/src/year.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PolishSystem.dir/src/year.cpp.o -MF CMakeFiles/PolishSystem.dir/src/year.cpp.o.d -o CMakeFiles/PolishSystem.dir/src/year.cpp.o -c /Users/bhorowitz/Desktop/PolishSystem/src/year.cpp

CMakeFiles/PolishSystem.dir/src/year.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/PolishSystem.dir/src/year.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bhorowitz/Desktop/PolishSystem/src/year.cpp > CMakeFiles/PolishSystem.dir/src/year.cpp.i

CMakeFiles/PolishSystem.dir/src/year.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/PolishSystem.dir/src/year.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bhorowitz/Desktop/PolishSystem/src/year.cpp -o CMakeFiles/PolishSystem.dir/src/year.cpp.s

# Object files for target PolishSystem
PolishSystem_OBJECTS = \
"CMakeFiles/PolishSystem.dir/src/decade.cpp.o" \
"CMakeFiles/PolishSystem.dir/src/main.cpp.o" \
"CMakeFiles/PolishSystem.dir/src/year.cpp.o"

# External object files for target PolishSystem
PolishSystem_EXTERNAL_OBJECTS =

PolishSystem: CMakeFiles/PolishSystem.dir/src/decade.cpp.o
PolishSystem: CMakeFiles/PolishSystem.dir/src/main.cpp.o
PolishSystem: CMakeFiles/PolishSystem.dir/src/year.cpp.o
PolishSystem: CMakeFiles/PolishSystem.dir/build.make
PolishSystem: libPolishSystemLib.a
PolishSystem: CMakeFiles/PolishSystem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/bhorowitz/Desktop/PolishSystem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable PolishSystem"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PolishSystem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PolishSystem.dir/build: PolishSystem
.PHONY : CMakeFiles/PolishSystem.dir/build

CMakeFiles/PolishSystem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PolishSystem.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PolishSystem.dir/clean

CMakeFiles/PolishSystem.dir/depend:
	cd /Users/bhorowitz/Desktop/PolishSystem/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bhorowitz/Desktop/PolishSystem /Users/bhorowitz/Desktop/PolishSystem /Users/bhorowitz/Desktop/PolishSystem/build /Users/bhorowitz/Desktop/PolishSystem/build /Users/bhorowitz/Desktop/PolishSystem/build/CMakeFiles/PolishSystem.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/PolishSystem.dir/depend

