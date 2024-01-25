#include <open62541/plugin/log_stdout.h>
#include <open62541/server.h>
#include <open62541/server_config_default.h>

/* Files example_namespace.h and example_namespace.c are created from server_nodeset.xml in the
 * /src_generated directory by CMake */
#include "../open62541/build/src_generated/open62541/namespace0_generated.h"
#include "build/src_generated/di_nodeids.h"
#include "build/src_generated/namespace_di_generated.h"
#include "build/src_generated/rob_nodeids.h"
#include "build/src_generated/namespace_rob_generated.h"
#include "build/src_generated/ff_nodeids.h"
#include "build/src_generated/namespace_ff_generated.h"

#include <signal.h>
#include <stdlib.h>

static volatile UA_Boolean running = true;

static void stopHandler(int sig) {
	UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "received ctrl-c");
	running = false;
}
//	Main Server

int main(int argc, char** argv) {            
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);
    
    UA_Server *server = UA_Server_new();
    UA_ServerConfig_setDefault(UA_Server_getConfig(server));

    UA_StatusCode retval;
    /* create nodes from nodeset */
    if(namespace_di_generated(server) != UA_STATUSCODE_GOOD) {
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the DI nodeset."
        "Check previous output for any error.");
        UA_Server_delete(server);
        retval = UA_STATUSCODE_BADUNEXPECTEDERROR;
    }
    if(namespace_rob_generated(server) != UA_STATUSCODE_GOOD) {
    UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the Robotics nodeset."
        "Check previous output for any error.");
        UA_Server_delete(server);
        retval = UA_STATUSCODE_BADUNEXPECTEDERROR;
    }   
    if(namespace_ff_generated(server) != UA_STATUSCODE_GOOD) {
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the FF nodeset."
        "Check previous output for any error.");
        retval = UA_STATUSCODE_BADUNEXPECTEDERROR;
    } 
    else {        
        retval = UA_Server_run(server, &running);        
    }
    
    UA_Server_delete(server);
    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}
