# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_SOURCE_DIR = /home/vikram/Desktop/C/Acalc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vikram/Desktop/C/Acalc

# Include any dependencies generated for this target.
include CMakeFiles/acalc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/acalc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/acalc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/acalc.dir/flags.make

CMakeFiles/acalc.dir/src/ast.c.o: CMakeFiles/acalc.dir/flags.make
CMakeFiles/acalc.dir/src/ast.c.o: src/ast.c
CMakeFiles/acalc.dir/src/ast.c.o: CMakeFiles/acalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vikram/Desktop/C/Acalc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/acalc.dir/src/ast.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/acalc.dir/src/ast.c.o -MF CMakeFiles/acalc.dir/src/ast.c.o.d -o CMakeFiles/acalc.dir/src/ast.c.o -c /home/vikram/Desktop/C/Acalc/src/ast.c

CMakeFiles/acalc.dir/src/ast.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/acalc.dir/src/ast.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vikram/Desktop/C/Acalc/src/ast.c > CMakeFiles/acalc.dir/src/ast.c.i

CMakeFiles/acalc.dir/src/ast.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/acalc.dir/src/ast.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vikram/Desktop/C/Acalc/src/ast.c -o CMakeFiles/acalc.dir/src/ast.c.s

CMakeFiles/acalc.dir/src/astPrinter.c.o: CMakeFiles/acalc.dir/flags.make
CMakeFiles/acalc.dir/src/astPrinter.c.o: src/astPrinter.c
CMakeFiles/acalc.dir/src/astPrinter.c.o: CMakeFiles/acalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vikram/Desktop/C/Acalc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/acalc.dir/src/astPrinter.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/acalc.dir/src/astPrinter.c.o -MF CMakeFiles/acalc.dir/src/astPrinter.c.o.d -o CMakeFiles/acalc.dir/src/astPrinter.c.o -c /home/vikram/Desktop/C/Acalc/src/astPrinter.c

CMakeFiles/acalc.dir/src/astPrinter.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/acalc.dir/src/astPrinter.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vikram/Desktop/C/Acalc/src/astPrinter.c > CMakeFiles/acalc.dir/src/astPrinter.c.i

CMakeFiles/acalc.dir/src/astPrinter.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/acalc.dir/src/astPrinter.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vikram/Desktop/C/Acalc/src/astPrinter.c -o CMakeFiles/acalc.dir/src/astPrinter.c.s

CMakeFiles/acalc.dir/src/environment.c.o: CMakeFiles/acalc.dir/flags.make
CMakeFiles/acalc.dir/src/environment.c.o: src/environment.c
CMakeFiles/acalc.dir/src/environment.c.o: CMakeFiles/acalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vikram/Desktop/C/Acalc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/acalc.dir/src/environment.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/acalc.dir/src/environment.c.o -MF CMakeFiles/acalc.dir/src/environment.c.o.d -o CMakeFiles/acalc.dir/src/environment.c.o -c /home/vikram/Desktop/C/Acalc/src/environment.c

CMakeFiles/acalc.dir/src/environment.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/acalc.dir/src/environment.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vikram/Desktop/C/Acalc/src/environment.c > CMakeFiles/acalc.dir/src/environment.c.i

CMakeFiles/acalc.dir/src/environment.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/acalc.dir/src/environment.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vikram/Desktop/C/Acalc/src/environment.c -o CMakeFiles/acalc.dir/src/environment.c.s

CMakeFiles/acalc.dir/src/error.c.o: CMakeFiles/acalc.dir/flags.make
CMakeFiles/acalc.dir/src/error.c.o: src/error.c
CMakeFiles/acalc.dir/src/error.c.o: CMakeFiles/acalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vikram/Desktop/C/Acalc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/acalc.dir/src/error.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/acalc.dir/src/error.c.o -MF CMakeFiles/acalc.dir/src/error.c.o.d -o CMakeFiles/acalc.dir/src/error.c.o -c /home/vikram/Desktop/C/Acalc/src/error.c

CMakeFiles/acalc.dir/src/error.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/acalc.dir/src/error.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vikram/Desktop/C/Acalc/src/error.c > CMakeFiles/acalc.dir/src/error.c.i

CMakeFiles/acalc.dir/src/error.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/acalc.dir/src/error.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vikram/Desktop/C/Acalc/src/error.c -o CMakeFiles/acalc.dir/src/error.c.s

CMakeFiles/acalc.dir/src/expr.c.o: CMakeFiles/acalc.dir/flags.make
CMakeFiles/acalc.dir/src/expr.c.o: src/expr.c
CMakeFiles/acalc.dir/src/expr.c.o: CMakeFiles/acalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vikram/Desktop/C/Acalc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/acalc.dir/src/expr.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/acalc.dir/src/expr.c.o -MF CMakeFiles/acalc.dir/src/expr.c.o.d -o CMakeFiles/acalc.dir/src/expr.c.o -c /home/vikram/Desktop/C/Acalc/src/expr.c

CMakeFiles/acalc.dir/src/expr.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/acalc.dir/src/expr.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vikram/Desktop/C/Acalc/src/expr.c > CMakeFiles/acalc.dir/src/expr.c.i

CMakeFiles/acalc.dir/src/expr.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/acalc.dir/src/expr.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vikram/Desktop/C/Acalc/src/expr.c -o CMakeFiles/acalc.dir/src/expr.c.s

CMakeFiles/acalc.dir/src/interpreter.c.o: CMakeFiles/acalc.dir/flags.make
CMakeFiles/acalc.dir/src/interpreter.c.o: src/interpreter.c
CMakeFiles/acalc.dir/src/interpreter.c.o: CMakeFiles/acalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vikram/Desktop/C/Acalc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/acalc.dir/src/interpreter.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/acalc.dir/src/interpreter.c.o -MF CMakeFiles/acalc.dir/src/interpreter.c.o.d -o CMakeFiles/acalc.dir/src/interpreter.c.o -c /home/vikram/Desktop/C/Acalc/src/interpreter.c

CMakeFiles/acalc.dir/src/interpreter.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/acalc.dir/src/interpreter.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vikram/Desktop/C/Acalc/src/interpreter.c > CMakeFiles/acalc.dir/src/interpreter.c.i

CMakeFiles/acalc.dir/src/interpreter.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/acalc.dir/src/interpreter.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vikram/Desktop/C/Acalc/src/interpreter.c -o CMakeFiles/acalc.dir/src/interpreter.c.s

CMakeFiles/acalc.dir/src/main.c.o: CMakeFiles/acalc.dir/flags.make
CMakeFiles/acalc.dir/src/main.c.o: src/main.c
CMakeFiles/acalc.dir/src/main.c.o: CMakeFiles/acalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vikram/Desktop/C/Acalc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/acalc.dir/src/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/acalc.dir/src/main.c.o -MF CMakeFiles/acalc.dir/src/main.c.o.d -o CMakeFiles/acalc.dir/src/main.c.o -c /home/vikram/Desktop/C/Acalc/src/main.c

CMakeFiles/acalc.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/acalc.dir/src/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vikram/Desktop/C/Acalc/src/main.c > CMakeFiles/acalc.dir/src/main.c.i

CMakeFiles/acalc.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/acalc.dir/src/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vikram/Desktop/C/Acalc/src/main.c -o CMakeFiles/acalc.dir/src/main.c.s

CMakeFiles/acalc.dir/src/parser.c.o: CMakeFiles/acalc.dir/flags.make
CMakeFiles/acalc.dir/src/parser.c.o: src/parser.c
CMakeFiles/acalc.dir/src/parser.c.o: CMakeFiles/acalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vikram/Desktop/C/Acalc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/acalc.dir/src/parser.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/acalc.dir/src/parser.c.o -MF CMakeFiles/acalc.dir/src/parser.c.o.d -o CMakeFiles/acalc.dir/src/parser.c.o -c /home/vikram/Desktop/C/Acalc/src/parser.c

CMakeFiles/acalc.dir/src/parser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/acalc.dir/src/parser.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vikram/Desktop/C/Acalc/src/parser.c > CMakeFiles/acalc.dir/src/parser.c.i

CMakeFiles/acalc.dir/src/parser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/acalc.dir/src/parser.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vikram/Desktop/C/Acalc/src/parser.c -o CMakeFiles/acalc.dir/src/parser.c.s

CMakeFiles/acalc.dir/src/scanner.c.o: CMakeFiles/acalc.dir/flags.make
CMakeFiles/acalc.dir/src/scanner.c.o: src/scanner.c
CMakeFiles/acalc.dir/src/scanner.c.o: CMakeFiles/acalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vikram/Desktop/C/Acalc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/acalc.dir/src/scanner.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/acalc.dir/src/scanner.c.o -MF CMakeFiles/acalc.dir/src/scanner.c.o.d -o CMakeFiles/acalc.dir/src/scanner.c.o -c /home/vikram/Desktop/C/Acalc/src/scanner.c

CMakeFiles/acalc.dir/src/scanner.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/acalc.dir/src/scanner.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vikram/Desktop/C/Acalc/src/scanner.c > CMakeFiles/acalc.dir/src/scanner.c.i

CMakeFiles/acalc.dir/src/scanner.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/acalc.dir/src/scanner.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vikram/Desktop/C/Acalc/src/scanner.c -o CMakeFiles/acalc.dir/src/scanner.c.s

CMakeFiles/acalc.dir/src/vector.c.o: CMakeFiles/acalc.dir/flags.make
CMakeFiles/acalc.dir/src/vector.c.o: src/vector.c
CMakeFiles/acalc.dir/src/vector.c.o: CMakeFiles/acalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vikram/Desktop/C/Acalc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/acalc.dir/src/vector.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/acalc.dir/src/vector.c.o -MF CMakeFiles/acalc.dir/src/vector.c.o.d -o CMakeFiles/acalc.dir/src/vector.c.o -c /home/vikram/Desktop/C/Acalc/src/vector.c

CMakeFiles/acalc.dir/src/vector.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/acalc.dir/src/vector.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vikram/Desktop/C/Acalc/src/vector.c > CMakeFiles/acalc.dir/src/vector.c.i

CMakeFiles/acalc.dir/src/vector.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/acalc.dir/src/vector.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vikram/Desktop/C/Acalc/src/vector.c -o CMakeFiles/acalc.dir/src/vector.c.s

# Object files for target acalc
acalc_OBJECTS = \
"CMakeFiles/acalc.dir/src/ast.c.o" \
"CMakeFiles/acalc.dir/src/astPrinter.c.o" \
"CMakeFiles/acalc.dir/src/environment.c.o" \
"CMakeFiles/acalc.dir/src/error.c.o" \
"CMakeFiles/acalc.dir/src/expr.c.o" \
"CMakeFiles/acalc.dir/src/interpreter.c.o" \
"CMakeFiles/acalc.dir/src/main.c.o" \
"CMakeFiles/acalc.dir/src/parser.c.o" \
"CMakeFiles/acalc.dir/src/scanner.c.o" \
"CMakeFiles/acalc.dir/src/vector.c.o"

# External object files for target acalc
acalc_EXTERNAL_OBJECTS =

acalc: CMakeFiles/acalc.dir/src/ast.c.o
acalc: CMakeFiles/acalc.dir/src/astPrinter.c.o
acalc: CMakeFiles/acalc.dir/src/environment.c.o
acalc: CMakeFiles/acalc.dir/src/error.c.o
acalc: CMakeFiles/acalc.dir/src/expr.c.o
acalc: CMakeFiles/acalc.dir/src/interpreter.c.o
acalc: CMakeFiles/acalc.dir/src/main.c.o
acalc: CMakeFiles/acalc.dir/src/parser.c.o
acalc: CMakeFiles/acalc.dir/src/scanner.c.o
acalc: CMakeFiles/acalc.dir/src/vector.c.o
acalc: CMakeFiles/acalc.dir/build.make
acalc: CMakeFiles/acalc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vikram/Desktop/C/Acalc/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking C executable acalc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/acalc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/acalc.dir/build: acalc
.PHONY : CMakeFiles/acalc.dir/build

CMakeFiles/acalc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/acalc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/acalc.dir/clean

CMakeFiles/acalc.dir/depend:
	cd /home/vikram/Desktop/C/Acalc && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vikram/Desktop/C/Acalc /home/vikram/Desktop/C/Acalc /home/vikram/Desktop/C/Acalc /home/vikram/Desktop/C/Acalc /home/vikram/Desktop/C/Acalc/CMakeFiles/acalc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/acalc.dir/depend

