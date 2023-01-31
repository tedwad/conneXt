# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/ubuntu/conneXt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/conneXt/build

# Utility rule file for myServer-types-DI.

# Include the progress variables for this target.
include CMakeFiles/myServer-types-DI.dir/progress.make

CMakeFiles/myServer-types-DI: src_generated/types_DI_generated.c
CMakeFiles/myServer-types-DI: src_generated/types_DI_generated.h
CMakeFiles/myServer-types-DI: src_generated/types_DI_generated_handling.h
CMakeFiles/myServer-types-DI: src_generated/types_DI_generated_encoding_binary.h


src_generated/types_DI_generated.c: /usr/share/open62541/tools/generate_datatypes.py
src_generated/types_DI_generated.c: ../nodesets/DI/Opc.Ua.Di.Types.bsd
src_generated/types_DI_generated.c: ../nodesets/DI/OpcUaDiModel.csv
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/conneXt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating src_generated/types_DI_generated.c, src_generated/types_DI_generated.h, src_generated/types_DI_generated_handling.h, src_generated/types_DI_generated_encoding_binary.h"
	/usr/bin/python /usr/share/open62541/tools/generate_datatypes.py --namespaceMap=1:http://opcfoundation.org/UA/DI/ --type-bsd=/home/ubuntu/conneXt/nodesets/DI/Opc.Ua.Di.Types.bsd --type-csv=/home/ubuntu/conneXt/nodesets/DI/OpcUaDiModel.csv --no-builtin /home/ubuntu/conneXt/build/src_generated//types_DI

src_generated/types_DI_generated.h: src_generated/types_DI_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate src_generated/types_DI_generated.h

src_generated/types_DI_generated_handling.h: src_generated/types_DI_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate src_generated/types_DI_generated_handling.h

src_generated/types_DI_generated_encoding_binary.h: src_generated/types_DI_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate src_generated/types_DI_generated_encoding_binary.h

myServer-types-DI: CMakeFiles/myServer-types-DI
myServer-types-DI: src_generated/types_DI_generated.c
myServer-types-DI: src_generated/types_DI_generated.h
myServer-types-DI: src_generated/types_DI_generated_handling.h
myServer-types-DI: src_generated/types_DI_generated_encoding_binary.h
myServer-types-DI: CMakeFiles/myServer-types-DI.dir/build.make

.PHONY : myServer-types-DI

# Rule to build all files generated by this target.
CMakeFiles/myServer-types-DI.dir/build: myServer-types-DI

.PHONY : CMakeFiles/myServer-types-DI.dir/build

CMakeFiles/myServer-types-DI.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myServer-types-DI.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myServer-types-DI.dir/clean

CMakeFiles/myServer-types-DI.dir/depend:
	cd /home/ubuntu/conneXt/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/conneXt /home/ubuntu/conneXt /home/ubuntu/conneXt/build /home/ubuntu/conneXt/build /home/ubuntu/conneXt/build/CMakeFiles/myServer-types-DI.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myServer-types-DI.dir/depend

