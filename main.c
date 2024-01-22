/* This work is licensed under a Creative Commons CCZero 1.0 Universal License.
 * See http://creativecommons.org/publicdomain/zero/1.0/ for more information. */

#include <pthread.h>
#include <open62541/plugin/log_stdout.h>
#include <open62541/server.h>
#include <open62541/server_config_default.h>
#include <open62541/common.h>

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#define sleep_ms(ms) usleep(ms * 1000)

#include <cjson/cJSON.h>
#include <sys/ipc.h>
#include <sys/shm.h>

/* Files example_namespace.h and example_namespace.c are created from server_nodeset.xml in the
 * /src_generated directory by CMake */
#include "../open62541/build/src_generated/open62541/namespace0_generated.h"
#include "build/src_generated/namespace_mvi_generated.h"


static void beforeRead_ConfigCorrect(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(bool), IPC_CREAT | 0666);
    bool *correctconfig_ptr = (bool *)shmat(shmid, NULL, 0);
    UA_Boolean ConfigCorrect = correctconfig_ptr;
     
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &ConfigCorrect, &UA_TYPES[UA_TYPES_BOOLEAN]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(2,6003), value);
    shmdt(correctconfig_ptr);
}


static volatile UA_Boolean running = true;

static void stopHandler(int sign) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}

int main(int argc, char** argv) {            
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);
    
    UA_Server *server = UA_Server_new();
    UA_ServerConfig_setDefault(UA_Server_getConfig(server));

    UA_StatusCode retval;
    /* create nodes from nodeset */
    if(namespace_mvi_generated(server) != UA_STATUSCODE_GOOD) {
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the MVI nodeset."
        "Check previous output for any error.");
        UA_Server_delete(server);
        retval = UA_STATUSCODE_BADUNEXPECTEDERROR;
    }
    else {       	
        //Tag Callbacks
        UA_ValueCallback callback_ConfigCorrect;
        callback_ConfigCorrect.onRead = beforeRead_ConfigCorrect;
        callback_ConfigCorrect.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(2,6003), callback_ConfigCorrect);
        
        retval = UA_Server_run(server, &running);        
    }
    
    UA_Server_delete(server);
    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}
