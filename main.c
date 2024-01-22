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
#include "build/src_generated/di_nodeids.h"
#include "build/src_generated/namespace_di_generated.h"
#include "build/src_generated/rob_nodeids.h"
#include "build/src_generated/namespace_rob_generated.h"
#include "build/src_generated/ff_nodeids.h"
#include "build/src_generated/namespace_ff_generated.h"

static void beforeRead_Q_VFD1_Temperature(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=0;
    UA_Double Q_VFD1_Temperature = tags_ptr[i];
     
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &Q_VFD1_Temperature, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17552), value);
    shmdt(tags_ptr);
}

static void beforeRead_Q_VFD2_Temperature(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) { 
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=1;
    UA_Double Q_VFD2_Temperature = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &Q_VFD2_Temperature, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17603), value);
    shmdt(tags_ptr);
}
static void beforeRead_Q_VFD3_Temperature(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=2;
    UA_Double Q_VFD3_Temperature = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &Q_VFD3_Temperature, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17654), value);
    shmdt(tags_ptr);
}
static void beforeRead_Q_VFD4_Temperature(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=3;
    UA_Double Q_VFD4_Temperature = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &Q_VFD4_Temperature, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17705), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R01_SJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=4;
    UA_Double M_R01_SJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R01_SJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15111), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R01_LJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=5;
    UA_Double M_R01_LJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R01_LJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15117), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R01_RJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=6;
    UA_Double M_R01_RJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R01_RJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15123), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R01_UJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=7;
    UA_Double M_R01_UJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R01_UJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15129), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R01_BJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=8;
    UA_Double M_R01_BJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R01_BJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15135), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R01_TJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=9;
    UA_Double M_R01_TJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R01_TJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15141), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R02_SJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=10;
    UA_Double M_R02_SJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R02_SJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15147), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R02_LJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=11;
    UA_Double M_R02_LJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R02_LJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15153), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R02_RJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=12;
    UA_Double M_R02_RJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R02_RJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15159), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R02_UJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=13;
    UA_Double M_R02_UJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R02_UJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15165), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R02_BJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=14;
    UA_Double M_R02_BJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R02_BJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15171), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R02_TJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=15;
    UA_Double M_R02_TJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R02_TJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15177), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R03_SJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=16;
    UA_Double M_R03_SJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R03_SJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15183), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R03_LJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=17;
    UA_Double M_R03_LJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R03_LJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15189), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R03_RJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=18;
    UA_Double M_R03_RJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R03_RJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15195), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R03_UJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=19;
    UA_Double M_R03_UJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R03_UJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15201), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R03_BJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=20;
    UA_Double M_R03_BJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R03_BJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15207), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R03_TJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=21;
    UA_Double M_R03_TJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R03_TJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15213), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R04_SJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=22;
    UA_Double M_R04_SJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R04_SJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15219), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R04_LJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=23;
    UA_Double M_R04_LJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R04_LJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15225), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R04_RJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=24;
    UA_Double M_R04_RJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R04_RJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15231), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R04_UJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=25;
    UA_Double M_R04_UJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R04_UJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15237), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R04_BJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=26;
    UA_Double M_R04_BJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R04_BJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15243), value);
    shmdt(tags_ptr);
}
static void beforeRead_M_R04_TJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key = ftok("shared_memory_key", 1);
    int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);
    float *tags_ptr = (float *)shmat(shmid, NULL, 0);
    int i=27;
    UA_Double M_R04_TJointAngle_Degree = tags_ptr[i];
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R04_TJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,15249), value);
    shmdt(tags_ptr);
}
static void beforeRead_VFD1_DeviceManual(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD1_DeviceManual;
    UA_String_init(&VFD1_DeviceManual);
    char *string = "https://support.industry.siemens.com/cs/ww/en/view/109817922";
    VFD1_DeviceManual.length = strlen(string);
    VFD1_DeviceManual.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD1_DeviceManual, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17535), value);
}
static void beforeRead_VFD2_DeviceManual(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD2_DeviceManual;
    UA_String_init(&VFD2_DeviceManual);
    char *string = "https://support.industry.siemens.com/cs/ww/en/view/109817922";
    VFD2_DeviceManual.length = strlen(string);
    VFD2_DeviceManual.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD2_DeviceManual, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17586), value);
}
static void beforeRead_VFD3_DeviceManual(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD3_DeviceManual;
    UA_String_init(&VFD3_DeviceManual);
    char *string = "https://support.industry.siemens.com/cs/ww/en/view/109817922";
    VFD3_DeviceManual.length = strlen(string);
    VFD3_DeviceManual.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD3_DeviceManual, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17637), value);
}
static void beforeRead_VFD4_DeviceManual(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD4_DeviceManual;
    UA_String_init(&VFD4_DeviceManual);
    char *string = "https://support.industry.siemens.com/cs/ww/en/view/109817922";
    VFD4_DeviceManual.length = strlen(string);
    VFD4_DeviceManual.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD4_DeviceManual, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17688), value);
}
static void beforeRead_VFD1_DeviceRevision(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD1_DeviceRevision;
    UA_String_init(&VFD1_DeviceRevision);
    char *string = "6SL3244-0BB12-1FA0 V4.7SP10HF3";
    VFD1_DeviceRevision.length = strlen(string);
    VFD1_DeviceRevision.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD1_DeviceRevision, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17533), value);
}
static void beforeRead_VFD2_DeviceRevision(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD2_DeviceRevision;
    UA_String_init(&VFD2_DeviceRevision);
    char *string = "6SL3244-0BB12-1FA0 V4.7SP10HF3";
    VFD2_DeviceRevision.length = strlen(string);
    VFD2_DeviceRevision.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD2_DeviceRevision, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17584), value);
}
static void beforeRead_VFD3_DeviceRevision(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD3_DeviceRevision;
    UA_String_init(&VFD3_DeviceRevision);
    char *string = "6SL3244-0BB12-1FA0 V4.7SP10HF3";
    VFD3_DeviceRevision.length = strlen(string);
    VFD3_DeviceRevision.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD3_DeviceRevision, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17635), value);
}
static void beforeRead_VFD4_DeviceRevision(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD4_DeviceRevision;
    UA_String_init(&VFD4_DeviceRevision);
    char *string = "6SL3244-0BB12-1FA0 V4.7SP10HF3";
    VFD4_DeviceRevision.length = strlen(string);
    VFD4_DeviceRevision.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD4_DeviceRevision, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17686), value);
}
static void beforeRead_VFD1_HardwareRevision(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD1_HardwareRevision;
    UA_String_init(&VFD1_HardwareRevision);
    char *string = "01245";
    VFD1_HardwareRevision.length = strlen(string);
    VFD1_HardwareRevision.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD1_HardwareRevision, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17531), value);
}
static void beforeRead_VFD2_HardwareRevision(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD2_HardwareRevision;
    UA_String_init(&VFD2_HardwareRevision);
    char *string = "01145";
    VFD2_HardwareRevision.length = strlen(string);
    VFD2_HardwareRevision.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD2_HardwareRevision, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17582), value);
}
static void beforeRead_VFD3_HardwareRevision(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD3_HardwareRevision;
    UA_String_init(&VFD3_HardwareRevision);
    char *string = "01245";
    VFD3_HardwareRevision.length = strlen(string);
    VFD3_HardwareRevision.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD3_HardwareRevision, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17633), value);
}
static void beforeRead_VFD4_HardwareRevision(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD4_HardwareRevision;
    UA_String_init(&VFD4_HardwareRevision);
    char *string = "01245";
    VFD4_HardwareRevision.length = strlen(string);
    VFD4_HardwareRevision.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD4_HardwareRevision, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17684), value);
}
static void beforeRead_VFD1_Manufacturer(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    char *locale = "en-US";
    char *text = "Siemens AG";
    UA_LocalizedText VFD1_Manufacturer;
    VFD1_Manufacturer.locale = UA_STRING(locale);
    VFD1_Manufacturer.text = UA_STRING(text);      
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD1_Manufacturer, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17528), value);
}
static void beforeRead_VFD2_Manufacturer(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    char *locale = "en-US";
    char *text = "Siemens AG";
    UA_LocalizedText VFD2_Manufacturer;
    VFD2_Manufacturer.locale = UA_STRING(locale);
    VFD2_Manufacturer.text = UA_STRING(text);      
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD2_Manufacturer, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17579), value);
}
static void beforeRead_VFD3_Manufacturer(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    char *locale = "en-US";
    char *text = "Siemens AG";
    UA_LocalizedText VFD3_Manufacturer;
    VFD3_Manufacturer.locale = UA_STRING(locale);
    VFD3_Manufacturer.text = UA_STRING(text);      
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD3_Manufacturer, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17630), value);
}
static void beforeRead_VFD4_Manufacturer(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    char *locale = "en-US";
    char *text = "Siemens AG";
    UA_LocalizedText VFD4_Manufacturer;
    VFD4_Manufacturer.locale = UA_STRING(locale);
    VFD4_Manufacturer.text = UA_STRING(text);      
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD4_Manufacturer, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17681), value);
}
static void beforeRead_VFD1_Model(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    char *locale = "en-US";
    char *text = "CU240E-2 PN";
    UA_LocalizedText VFD1_Model;
    VFD1_Model.locale = UA_STRING(locale);
    VFD1_Model.text = UA_STRING(text);      
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD1_Model, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17530), value);
}
static void beforeRead_VFD2_Model(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    char *locale = "en-US";
    char *text = "CU240E-2 PN";
    UA_LocalizedText VFD2_Model;
    VFD2_Model.locale = UA_STRING(locale);
    VFD2_Model.text = UA_STRING(text);      
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD2_Model, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17581), value);
}
static void beforeRead_VFD3_Model(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    char *locale = "en-US";
    char *text = "CU240E-2 PN";
    UA_LocalizedText VFD3_Model;
    VFD3_Model.locale = UA_STRING(locale);
    VFD3_Model.text = UA_STRING(text);      
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD3_Model, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17632), value);
}
static void beforeRead_VFD4_Model(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    char *locale = "en-US";
    char *text = "CU240E-2 PN";
    UA_LocalizedText VFD4_Model;
    VFD4_Model.locale = UA_STRING(locale);
    VFD4_Model.text = UA_STRING(text);      
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD4_Model, &UA_TYPES[UA_TYPES_LOCALIZEDTEXT]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17683), value);
}
static void beforeRead_VFD1_ProductCode(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD1_ProductCode;
    UA_String_init(&VFD1_ProductCode);
    char *string = "6SL3244-0BB12-1FA0";
    VFD1_ProductCode.length = strlen(string);
    VFD1_ProductCode.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD1_ProductCode, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17534), value);
}
static void beforeRead_VFD2_ProductCode(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD2_ProductCode;
    UA_String_init(&VFD2_ProductCode);
    char *string = "6SL3244-0BB12-1FA0";
    VFD2_ProductCode.length = strlen(string);
    VFD2_ProductCode.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD2_ProductCode, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17585), value);
}
static void beforeRead_VFD3_ProductCode(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD3_ProductCode;
    UA_String_init(&VFD3_ProductCode);
    char *string = "6SL3244-0BB12-1FA0";
    VFD3_ProductCode.length = strlen(string);
    VFD3_ProductCode.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD3_ProductCode, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17636), value);
}
static void beforeRead_VFD4_ProductCode(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD4_ProductCode;
    UA_String_init(&VFD4_ProductCode);
    char *string = "6SL3244-0BB12-1FA0";
    VFD4_ProductCode.length = strlen(string);
    VFD4_ProductCode.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD4_ProductCode, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17687), value);
}
static void beforeRead_VFD1_SerialNumber(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD1_SerialNumber;
    UA_String_init(&VFD1_SerialNumber);
    char *string = "XAMO27-023753";
    VFD1_SerialNumber.length = strlen(string);
    VFD1_SerialNumber.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD1_SerialNumber, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17537), value);
}
static void beforeRead_VFD2_SerialNumber(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD2_SerialNumber;
    UA_String_init(&VFD2_SerialNumber);
    char *string = "XAM622-021478";
    VFD2_SerialNumber.length = strlen(string);
    VFD2_SerialNumber.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD2_SerialNumber, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17588), value);
}
static void beforeRead_VFD3_SerialNumber(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD3_SerialNumber;
    UA_String_init(&VFD3_SerialNumber);
    char *string = "XAN723-020486";
    VFD3_SerialNumber.length = strlen(string);
    VFD3_SerialNumber.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD3_SerialNumber, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17639), value);
}
static void beforeRead_VFD4_SerialNumber(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD4_SerialNumber;
    UA_String_init(&VFD4_SerialNumber);
    char *string = "XAN724-022366";
    VFD4_SerialNumber.length = strlen(string);
    VFD4_SerialNumber.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD4_SerialNumber, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17690), value);
}
static void beforeRead_VFD1_SoftwareRevision(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD1_SoftwareRevision;
    UA_String_init(&VFD1_SoftwareRevision);
    char *string = "V4.7SP10HF3";
    VFD1_SoftwareRevision.length = strlen(string);
    VFD1_SoftwareRevision.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD1_SoftwareRevision, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17532), value);
}
static void beforeRead_VFD2_SoftwareRevision(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD2_SoftwareRevision;
    UA_String_init(&VFD2_SoftwareRevision);
    char *string = "V4.7SP10HF3";
    VFD2_SoftwareRevision.length = strlen(string);
    VFD2_SoftwareRevision.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD2_SoftwareRevision, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17583), value);
}
static void beforeRead_VFD3_SoftwareRevision(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD3_SoftwareRevision;
    UA_String_init(&VFD3_SoftwareRevision);
    char *string = "V4.7SP10HF3";
    VFD3_SoftwareRevision.length = strlen(string);
    VFD3_SoftwareRevision.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD3_SoftwareRevision, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17634), value);
}
static void beforeRead_VFD4_SoftwareRevision(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    UA_String VFD4_SoftwareRevision;
    UA_String_init(&VFD4_SoftwareRevision);
    char *string = "V4.7SP10HF3";
    VFD4_SoftwareRevision.length = strlen(string);
    VFD4_SoftwareRevision.data = (UA_Byte*)string;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &VFD4_SoftwareRevision, &UA_TYPES[UA_TYPES_STRING]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17685), value);
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
     	
        //Tag Callbacks
        UA_ValueCallback callback_Q_VFD1_Temperature;
        callback_Q_VFD1_Temperature.onRead = beforeRead_Q_VFD1_Temperature;
        callback_Q_VFD1_Temperature.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17552), callback_Q_VFD1_Temperature);
        
        UA_ValueCallback callback_Q_VFD2_Temperature;
        callback_Q_VFD2_Temperature.onRead = beforeRead_Q_VFD2_Temperature;
        callback_Q_VFD2_Temperature.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17603), callback_Q_VFD2_Temperature);
        
        UA_ValueCallback callback_Q_VFD3_Temperature;
        callback_Q_VFD3_Temperature.onRead = beforeRead_Q_VFD3_Temperature;
        callback_Q_VFD3_Temperature.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17654), callback_Q_VFD3_Temperature);
        
        UA_ValueCallback callback_Q_VFD4_Temperature;
        callback_Q_VFD4_Temperature.onRead = beforeRead_Q_VFD4_Temperature;
        callback_Q_VFD4_Temperature.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17705), callback_Q_VFD4_Temperature);
        
        UA_ValueCallback callback_M_R01_SJointAngle_Degree;
        callback_M_R01_SJointAngle_Degree.onRead = beforeRead_M_R01_SJointAngle_Degree;
        callback_M_R01_SJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,15111), callback_M_R01_SJointAngle_Degree);
        
        UA_ValueCallback callback_M_R01_LJointAngle_Degree;
        callback_M_R01_LJointAngle_Degree.onRead = beforeRead_M_R01_LJointAngle_Degree;
        callback_M_R01_LJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,15117), callback_M_R01_LJointAngle_Degree);
        
        UA_ValueCallback callback_M_R01_RJointAngle_Degree;
        callback_M_R01_RJointAngle_Degree.onRead = beforeRead_M_R01_RJointAngle_Degree;
        callback_M_R01_RJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,15123), callback_M_R01_RJointAngle_Degree);
        
        UA_ValueCallback callback_M_R01_UJointAngle_Degree;
        callback_M_R01_UJointAngle_Degree.onRead = beforeRead_M_R01_UJointAngle_Degree;
        callback_M_R01_UJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,15129), callback_M_R01_UJointAngle_Degree);
        
        UA_ValueCallback callback_M_R01_BJointAngle_Degree;
        callback_M_R01_BJointAngle_Degree.onRead = beforeRead_M_R01_BJointAngle_Degree;
        callback_M_R01_BJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,15135), callback_M_R01_BJointAngle_Degree);
        
        UA_ValueCallback callback_M_R01_TJointAngle_Degree;
        callback_M_R01_TJointAngle_Degree.onRead = beforeRead_M_R01_TJointAngle_Degree;
        callback_M_R01_TJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,15141), callback_M_R01_TJointAngle_Degree);
        
        UA_ValueCallback callback_M_R02_SJointAngle_Degree;
        callback_M_R02_SJointAngle_Degree.onRead = beforeRead_M_R02_SJointAngle_Degree;
        callback_M_R02_SJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,15147), callback_M_R02_SJointAngle_Degree);
        
        UA_ValueCallback callback_M_R02_LJointAngle_Degree;
        callback_M_R02_LJointAngle_Degree.onRead = beforeRead_M_R02_LJointAngle_Degree;
        callback_M_R02_LJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,15153), callback_M_R02_LJointAngle_Degree);
        
        UA_ValueCallback callback_M_R02_RJointAngle_Degree;
        callback_M_R02_RJointAngle_Degree.onRead = beforeRead_M_R02_RJointAngle_Degree;
        callback_M_R02_RJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,15159), callback_M_R02_RJointAngle_Degree);
        
        UA_ValueCallback callback_M_R02_UJointAngle_Degree;
        callback_M_R02_UJointAngle_Degree.onRead = beforeRead_M_R02_UJointAngle_Degree;
        callback_M_R02_UJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,15165), callback_M_R02_UJointAngle_Degree);
        
        UA_ValueCallback callback_M_R02_BJointAngle_Degree;
        callback_M_R02_BJointAngle_Degree.onRead = beforeRead_M_R02_BJointAngle_Degree;
        callback_M_R02_BJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,15171), callback_M_R02_BJointAngle_Degree);
        
        UA_ValueCallback callback_M_R02_TJointAngle_Degree;
        callback_M_R02_TJointAngle_Degree.onRead = beforeRead_M_R02_TJointAngle_Degree;
        callback_M_R02_TJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,15141), callback_M_R02_TJointAngle_Degree);
        
        UA_ValueCallback callback_M_R03_SJointAngle_Degree;
        callback_M_R03_SJointAngle_Degree.onRead = beforeRead_M_R03_SJointAngle_Degree;
        callback_M_R03_SJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,15183), callback_M_R03_SJointAngle_Degree);
        
        UA_ValueCallback callback_M_R03_LJointAngle_Degree;
        callback_M_R03_LJointAngle_Degree.onRead = beforeRead_M_R03_LJointAngle_Degree;
        callback_M_R03_LJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,15189), callback_M_R03_LJointAngle_Degree);
        
        UA_ValueCallback callback_M_R03_RJointAngle_Degree;
        callback_M_R03_RJointAngle_Degree.onRead = beforeRead_M_R03_RJointAngle_Degree;
        callback_M_R03_RJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,15195), callback_M_R03_RJointAngle_Degree);
        
        UA_ValueCallback callback_M_R03_UJointAngle_Degree;
        callback_M_R03_UJointAngle_Degree.onRead = beforeRead_M_R03_UJointAngle_Degree;
        callback_M_R03_UJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,15201), callback_M_R03_UJointAngle_Degree);
        
        UA_ValueCallback callback_M_R03_BJointAngle_Degree;
        callback_M_R03_BJointAngle_Degree.onRead = beforeRead_M_R03_BJointAngle_Degree;
        callback_M_R03_BJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,15207), callback_M_R03_BJointAngle_Degree);
        
        UA_ValueCallback callback_M_R03_TJointAngle_Degree;
        callback_M_R03_TJointAngle_Degree.onRead = beforeRead_M_R03_TJointAngle_Degree;
        callback_M_R03_TJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,15213), callback_M_R03_TJointAngle_Degree);
        
        UA_ValueCallback callback_M_R04_SJointAngle_Degree;
        callback_M_R04_SJointAngle_Degree.onRead = beforeRead_M_R04_SJointAngle_Degree;
        callback_M_R04_SJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18238), callback_M_R04_SJointAngle_Degree);
        
        UA_ValueCallback callback_M_R04_LJointAngle_Degree;
        callback_M_R04_LJointAngle_Degree.onRead = beforeRead_M_R04_LJointAngle_Degree;
        callback_M_R04_LJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18244), callback_M_R04_LJointAngle_Degree);
        
        UA_ValueCallback callback_M_R04_RJointAngle_Degree;
        callback_M_R04_RJointAngle_Degree.onRead = beforeRead_M_R04_RJointAngle_Degree;
        callback_M_R04_RJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18250), callback_M_R04_RJointAngle_Degree);
        
        UA_ValueCallback callback_M_R04_UJointAngle_Degree;
        callback_M_R04_UJointAngle_Degree.onRead = beforeRead_M_R04_UJointAngle_Degree;
        callback_M_R04_UJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18256), callback_M_R04_UJointAngle_Degree);
        
        UA_ValueCallback callback_M_R04_BJointAngle_Degree;
        callback_M_R04_BJointAngle_Degree.onRead = beforeRead_M_R04_BJointAngle_Degree;
        callback_M_R04_BJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18262), callback_M_R04_BJointAngle_Degree);
        
        UA_ValueCallback callback_M_R04_TJointAngle_Degree;
        callback_M_R04_TJointAngle_Degree.onRead = beforeRead_M_R04_TJointAngle_Degree;
        callback_M_R04_TJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18268), callback_M_R04_TJointAngle_Degree);
        
        UA_ValueCallback callback_VFD1_DeviceManual;
        callback_VFD1_DeviceManual.onRead = beforeRead_VFD1_DeviceManual;
        callback_VFD1_DeviceManual.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17535), callback_VFD1_DeviceManual);
        
        UA_ValueCallback callback_VFD2_DeviceManual;
        callback_VFD2_DeviceManual.onRead = beforeRead_VFD2_DeviceManual;
        callback_VFD2_DeviceManual.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17586), callback_VFD2_DeviceManual);
        
        UA_ValueCallback callback_VFD3_DeviceManual;
        callback_VFD3_DeviceManual.onRead = beforeRead_VFD3_DeviceManual;
        callback_VFD3_DeviceManual.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17637), callback_VFD3_DeviceManual);
        
        UA_ValueCallback callback_VFD4_DeviceManual;
        callback_VFD4_DeviceManual.onRead = beforeRead_VFD4_DeviceManual;
        callback_VFD4_DeviceManual.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17688), callback_VFD4_DeviceManual);
        
        UA_ValueCallback callback_VFD1_DeviceRevision;
        callback_VFD1_DeviceRevision.onRead = beforeRead_VFD1_DeviceRevision;
        callback_VFD1_DeviceRevision.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17533), callback_VFD1_DeviceRevision);
        
        UA_ValueCallback callback_VFD2_DeviceRevision;
        callback_VFD2_DeviceRevision.onRead = beforeRead_VFD2_DeviceRevision;
        callback_VFD2_DeviceRevision.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17584), callback_VFD2_DeviceRevision);
        
        UA_ValueCallback callback_VFD3_DeviceRevision;
        callback_VFD3_DeviceRevision.onRead = beforeRead_VFD3_DeviceRevision;
        callback_VFD3_DeviceRevision.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17635), callback_VFD3_DeviceRevision);
        
        UA_ValueCallback callback_VFD4_DeviceRevision;
        callback_VFD4_DeviceRevision.onRead = beforeRead_VFD4_DeviceRevision;
        callback_VFD4_DeviceRevision.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17686), callback_VFD4_DeviceRevision);
        
        UA_ValueCallback callback_VFD1_HardwareRevision;
        callback_VFD1_HardwareRevision.onRead = beforeRead_VFD1_HardwareRevision;
        callback_VFD1_HardwareRevision.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17531), callback_VFD1_HardwareRevision);
        
        UA_ValueCallback callback_VFD2_HardwareRevision;
        callback_VFD2_HardwareRevision.onRead = beforeRead_VFD2_HardwareRevision;
        callback_VFD2_HardwareRevision.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17582), callback_VFD2_HardwareRevision);
        
        UA_ValueCallback callback_VFD3_HardwareRevision;
        callback_VFD3_HardwareRevision.onRead = beforeRead_VFD3_HardwareRevision;
        callback_VFD3_HardwareRevision.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17633), callback_VFD3_HardwareRevision);
        
        UA_ValueCallback callback_VFD4_HardwareRevision;
        callback_VFD4_HardwareRevision.onRead = beforeRead_VFD4_HardwareRevision;
        callback_VFD4_HardwareRevision.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17684), callback_VFD4_HardwareRevision);
        
        UA_ValueCallback callback_VFD1_Manufacturer;
        callback_VFD1_Manufacturer.onRead = beforeRead_VFD1_Manufacturer;
        callback_VFD1_Manufacturer.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17528), callback_VFD1_Manufacturer);
        
        UA_ValueCallback callback_VFD2_Manufacturer;
        callback_VFD2_Manufacturer.onRead = beforeRead_VFD2_Manufacturer;
        callback_VFD2_Manufacturer.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17579), callback_VFD2_Manufacturer);
        
        UA_ValueCallback callback_VFD3_Manufacturer;
        callback_VFD3_Manufacturer.onRead = beforeRead_VFD3_Manufacturer;
        callback_VFD3_Manufacturer.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17630), callback_VFD3_Manufacturer);
        
        UA_ValueCallback callback_VFD4_Manufacturer;
        callback_VFD4_Manufacturer.onRead = beforeRead_VFD4_Manufacturer;
        callback_VFD4_Manufacturer.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17681), callback_VFD4_Manufacturer);
        
        UA_ValueCallback callback_VFD1_Model;
        callback_VFD1_Model.onRead = beforeRead_VFD1_Model;
        callback_VFD1_Model.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17530), callback_VFD1_Model);
        
        UA_ValueCallback callback_VFD2_Model;
        callback_VFD2_Model.onRead = beforeRead_VFD2_Model;
        callback_VFD2_Model.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17581), callback_VFD2_Model);
        
        UA_ValueCallback callback_VFD3_Model;
        callback_VFD3_Model.onRead = beforeRead_VFD3_Model;
        callback_VFD3_Model.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17632), callback_VFD3_Model);
        
        UA_ValueCallback callback_VFD4_Model;
        callback_VFD4_Model.onRead = beforeRead_VFD4_Model;
        callback_VFD4_Model.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17683), callback_VFD4_Model);
        
        UA_ValueCallback callback_VFD1_ProductCode;
        callback_VFD1_ProductCode.onRead = beforeRead_VFD1_ProductCode;
        callback_VFD1_ProductCode.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17534), callback_VFD1_ProductCode);
        
        UA_ValueCallback callback_VFD2_ProductCode;
        callback_VFD2_ProductCode.onRead = beforeRead_VFD2_ProductCode;
        callback_VFD2_ProductCode.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17585), callback_VFD2_ProductCode);
        
        UA_ValueCallback callback_VFD3_ProductCode;
        callback_VFD3_ProductCode.onRead = beforeRead_VFD3_ProductCode;
        callback_VFD3_ProductCode.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17636), callback_VFD3_ProductCode);
        
        UA_ValueCallback callback_VFD4_ProductCode;
        callback_VFD4_ProductCode.onRead = beforeRead_VFD4_ProductCode;
        callback_VFD4_ProductCode.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17687), callback_VFD4_ProductCode);
        
        UA_ValueCallback callback_VFD1_SerialNumber;
        callback_VFD1_SerialNumber.onRead = beforeRead_VFD1_SerialNumber;
        callback_VFD1_SerialNumber.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17537), callback_VFD1_SerialNumber);
        
        UA_ValueCallback callback_VFD2_SerialNumber;
        callback_VFD2_SerialNumber.onRead = beforeRead_VFD2_SerialNumber;
        callback_VFD2_SerialNumber.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17588), callback_VFD2_SerialNumber);
        
        UA_ValueCallback callback_VFD3_SerialNumber;
        callback_VFD3_SerialNumber.onRead = beforeRead_VFD3_SerialNumber;
        callback_VFD3_SerialNumber.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17639), callback_VFD3_SerialNumber);
        
        UA_ValueCallback callback_VFD4_SerialNumber;
        callback_VFD4_SerialNumber.onRead = beforeRead_VFD4_SerialNumber;
        callback_VFD4_SerialNumber.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17690), callback_VFD4_SerialNumber);
        
        UA_ValueCallback callback_VFD1_SoftwareRevision;
        callback_VFD1_SoftwareRevision.onRead = beforeRead_VFD1_SoftwareRevision;
        callback_VFD1_SoftwareRevision.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17532), callback_VFD1_SoftwareRevision);
        
        UA_ValueCallback callback_VFD2_SoftwareRevision;
        callback_VFD2_SoftwareRevision.onRead = beforeRead_VFD2_SoftwareRevision;
        callback_VFD2_SoftwareRevision.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17583), callback_VFD2_SoftwareRevision);
        
        UA_ValueCallback callback_VFD3_SoftwareRevision;
        callback_VFD3_SoftwareRevision.onRead = beforeRead_VFD3_SoftwareRevision;
        callback_VFD3_SoftwareRevision.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17634), callback_VFD3_SoftwareRevision);
        
        UA_ValueCallback callback_VFD4_SoftwareRevision;
        callback_VFD4_SoftwareRevision.onRead = beforeRead_VFD4_SoftwareRevision;
        callback_VFD4_SoftwareRevision.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,17685), callback_VFD4_SoftwareRevision);
        
        retval = UA_Server_run(server, &running);        
    }
    
    UA_Server_delete(server);
    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}
