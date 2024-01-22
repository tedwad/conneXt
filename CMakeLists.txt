cmake_minimum_required(VERSION 3.2)
project(myServer)
# open62541 must be installed.
# If in custom path, then use -DCMAKE_PREFIX_PATH=/home/ubuntu/conneXt/install
# To force cmake to use python3, use -DPYTHON_EXECUTABLE:FILEPATH=/usr/bin/python3.8 
find_package(open62541 REQUIRED COMPONENTS FullNamespace)
# Output directory for Nodeset Compiler
set(GENERATE_OUTPUT_DIR "${CMAKE_BINARY_DIR}/src_generated/")
file(MAKE_DIRECTORY "${GENERATE_OUTPUT_DIR}")
include_directories("${GENERATE_OUTPUT_DIR}")

ua_generate_nodeset_and_datatypes(
        NAME "mvi"
        TARGET_PREFIX "${PROJECT_NAME}"
        OUTPUT_DIR "${GENERATE_OUTPUT_DIR}"
        FILE_NS "${PROJECT_SOURCE_DIR}/model_mvi/Opc.Ua.Mvi.NodeSet2.xml"
        INTERNAL
        DEPENDS "${UA_FILE_NS0}"
)
# Previous macro automatically sets some variables which hold the generated source code files using the provided NAME
add_executable(main main.c               
               ${UA_NODESET_MVI_SOURCES}
               ${UA_TYPES_MVI_SOURCES}               
               )
# Make sure the nodeset compiler is execute before compiling the main file
add_dependencies(main
                 ${PROJECT_NAME}-ns-mvi
                 )
target_link_libraries(main open62541::open62541)
