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

# Utility rule file for myServer-ns-OpcUaFf.

# Include the progress variables for this target.
include CMakeFiles/myServer-ns-OpcUaFf.dir/progress.make

CMakeFiles/myServer-ns-OpcUaFf: src_generated/namespace_OpcUaFf_generated.c
CMakeFiles/myServer-ns-OpcUaFf: src_generated/namespace_OpcUaFf_generated.h


src_generated/namespace_OpcUaFf_generated.c: /usr/share/open62541/tools/nodeset_compiler/nodeset_compiler.py
src_generated/namespace_OpcUaFf_generated.c: /usr/share/open62541/tools/nodeset_compiler/nodes.py
src_generated/namespace_OpcUaFf_generated.c: /usr/share/open62541/tools/nodeset_compiler/nodeset.py
src_generated/namespace_OpcUaFf_generated.c: /usr/share/open62541/tools/nodeset_compiler/datatypes.py
src_generated/namespace_OpcUaFf_generated.c: /usr/share/open62541/tools/nodeset_compiler/backend_open62541.py
src_generated/namespace_OpcUaFf_generated.c: /usr/share/open62541/tools/nodeset_compiler/backend_open62541_nodes.py
src_generated/namespace_OpcUaFf_generated.c: /usr/share/open62541/tools/nodeset_compiler/backend_open62541_datatypes.py
src_generated/namespace_OpcUaFf_generated.c: ../model/Published/Opc.Ua.Ff.NodeSet2.xml
src_generated/namespace_OpcUaFf_generated.c: /usr/share/open62541/tools/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/conneXt/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating src_generated/namespace_OpcUaFf_generated.c, src_generated/namespace_OpcUaFf_generated.h"
	/usr/bin/python /usr/share/open62541/tools/nodeset_compiler/nodeset_compiler.py --internal-headers --types-array=UA_TYPES --types-array=UA_TYPES_OPCUAFF --existing=/usr/share/open62541/tools/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml --xml=/home/ubuntu/conneXt/model/Published/Opc.Ua.Ff.NodeSet2.xml /home/ubuntu/conneXt/build/src_generated//namespace_OpcUaFf_generated

src_generated/namespace_OpcUaFf_generated.h: src_generated/namespace_OpcUaFf_generated.c
	@$(CMAKE_COMMAND) -E touch_nocreate src_generated/namespace_OpcUaFf_generated.h

myServer-ns-OpcUaFf: CMakeFiles/myServer-ns-OpcUaFf
myServer-ns-OpcUaFf: src_generated/namespace_OpcUaFf_generated.c
myServer-ns-OpcUaFf: src_generated/namespace_OpcUaFf_generated.h
myServer-ns-OpcUaFf: CMakeFiles/myServer-ns-OpcUaFf.dir/build.make

.PHONY : myServer-ns-OpcUaFf

# Rule to build all files generated by this target.
CMakeFiles/myServer-ns-OpcUaFf.dir/build: myServer-ns-OpcUaFf

.PHONY : CMakeFiles/myServer-ns-OpcUaFf.dir/build

CMakeFiles/myServer-ns-OpcUaFf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myServer-ns-OpcUaFf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myServer-ns-OpcUaFf.dir/clean

CMakeFiles/myServer-ns-OpcUaFf.dir/depend:
	cd /home/ubuntu/conneXt/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/conneXt /home/ubuntu/conneXt /home/ubuntu/conneXt/build /home/ubuntu/conneXt/build /home/ubuntu/conneXt/build/CMakeFiles/myServer-ns-OpcUaFf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myServer-ns-OpcUaFf.dir/depend
