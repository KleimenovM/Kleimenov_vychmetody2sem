# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "G:\My Drive\MIPT LPR 4 semester\CppPython\Kleimenov_vychmetody2sem\wk1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "G:\My Drive\MIPT LPR 4 semester\CppPython\Kleimenov_vychmetody2sem\wk1\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/wk1.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/wk1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/wk1.dir/flags.make

CMakeFiles/wk1.dir/5.cpp.obj: CMakeFiles/wk1.dir/flags.make
CMakeFiles/wk1.dir/5.cpp.obj: ../5.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="G:\My Drive\MIPT LPR 4 semester\CppPython\Kleimenov_vychmetody2sem\wk1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/wk1.dir/5.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\wk1.dir\5.cpp.obj -c "G:\My Drive\MIPT LPR 4 semester\CppPython\Kleimenov_vychmetody2sem\wk1\5.cpp"

CMakeFiles/wk1.dir/5.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/wk1.dir/5.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "G:\My Drive\MIPT LPR 4 semester\CppPython\Kleimenov_vychmetody2sem\wk1\5.cpp" > CMakeFiles\wk1.dir\5.cpp.i

CMakeFiles/wk1.dir/5.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/wk1.dir/5.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "G:\My Drive\MIPT LPR 4 semester\CppPython\Kleimenov_vychmetody2sem\wk1\5.cpp" -o CMakeFiles\wk1.dir\5.cpp.s

# Object files for target wk1
wk1_OBJECTS = \
"CMakeFiles/wk1.dir/5.cpp.obj"

# External object files for target wk1
wk1_EXTERNAL_OBJECTS =

wk1.exe: CMakeFiles/wk1.dir/5.cpp.obj
wk1.exe: CMakeFiles/wk1.dir/build.make
wk1.exe: CMakeFiles/wk1.dir/linklibs.rsp
wk1.exe: CMakeFiles/wk1.dir/objects1.rsp
wk1.exe: CMakeFiles/wk1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="G:\My Drive\MIPT LPR 4 semester\CppPython\Kleimenov_vychmetody2sem\wk1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable wk1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\wk1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/wk1.dir/build: wk1.exe
.PHONY : CMakeFiles/wk1.dir/build

CMakeFiles/wk1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\wk1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/wk1.dir/clean

CMakeFiles/wk1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "G:\My Drive\MIPT LPR 4 semester\CppPython\Kleimenov_vychmetody2sem\wk1" "G:\My Drive\MIPT LPR 4 semester\CppPython\Kleimenov_vychmetody2sem\wk1" "G:\My Drive\MIPT LPR 4 semester\CppPython\Kleimenov_vychmetody2sem\wk1\cmake-build-debug" "G:\My Drive\MIPT LPR 4 semester\CppPython\Kleimenov_vychmetody2sem\wk1\cmake-build-debug" "G:\My Drive\MIPT LPR 4 semester\CppPython\Kleimenov_vychmetody2sem\wk1\cmake-build-debug\CMakeFiles\wk1.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/wk1.dir/depend

