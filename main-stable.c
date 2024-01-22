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
    key_t key_Q_VFD1_Temperature = ftok("shared_memory", 1);
    int shmid_Q_VFD1_Temperature = shmget(key_Q_VFD1_Temperature, sizeof(float), IPC_CREAT | 0666);
    float *Q_VFD1_Temperature_ptr = (float *)shmat(shmid_Q_VFD1_Temperature, NULL, 0);
    UA_Double Q_VFD1_Temperature = *Q_VFD1_Temperature_ptr;

    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &Q_VFD1_Temperature, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17552), value);
    shmdt(Q_VFD1_Temperature_ptr);
}
static void beforeRead_Q_VFD2_Temperature(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_Q_VFD2_Temperature = ftok("shared_memory", 2);
    int shmid_Q_VFD2_Temperature = shmget(key_Q_VFD2_Temperature, sizeof(float), IPC_CREAT | 0666);
    float *Q_VFD2_Temperature_ptr = (float *)shmat(shmid_Q_VFD2_Temperature, NULL, 0);	
    UA_Double Q_VFD2_Temperature = *Q_VFD2_Temperature_ptr;    
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &Q_VFD2_Temperature, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17603), value);
    shmdt(Q_VFD2_Temperature_ptr);
}
static void beforeRead_Q_VFD3_Temperature(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_Q_VFD3_Temperature = ftok("shared_memory", 3);
    int shmid_Q_VFD3_Temperature = shmget(key_Q_VFD3_Temperature, sizeof(float), IPC_CREAT | 0666);
    float *Q_VFD3_Temperature_ptr = (float *)shmat(shmid_Q_VFD3_Temperature, NULL, 0);
    UA_Double Q_VFD3_Temperature = *Q_VFD3_Temperature_ptr;
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &Q_VFD3_Temperature, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17654), value);
    shmdt(Q_VFD3_Temperature_ptr);
}
static void beforeRead_Q_VFD4_Temperature(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_Q_VFD4_Temperature = ftok("shared_memory", 4);
    int shmid_Q_VFD4_Temperature = shmget(key_Q_VFD4_Temperature, sizeof(float), IPC_CREAT | 0666);
    float *Q_VFD4_Temperature_ptr = (float *)shmat(shmid_Q_VFD4_Temperature, NULL, 0);
    UA_Double Q_VFD4_Temperature = *Q_VFD4_Temperature_ptr;  
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &Q_VFD4_Temperature, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,17705), value);
    shmdt(Q_VFD4_Temperature_ptr);
}
static void beforeRead_M_R01_SJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R01_SJointAngle_Degree = ftok("shared_memory", 5);
    int shmid_M_R01_SJointAngle_Degree = shmget(key_M_R01_SJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R01_SJointAngle_Degree_ptr = (float *)shmat(shmid_M_R01_SJointAngle_Degree, NULL, 0);
    UA_Double M_R01_SJointAngle_Degree = *M_R01_SJointAngle_Degree_ptr;   
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R01_SJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18053), value);
    shmdt(M_R01_SJointAngle_Degree_ptr); 
}
static void beforeRead_M_R01_LJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R01_LJointAngle_Degree = ftok("shared_memory", 6);
    int shmid_M_R01_LJointAngle_Degree = shmget(key_M_R01_LJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R01_LJointAngle_Degree_ptr = (float *)shmat(shmid_M_R01_LJointAngle_Degree, NULL, 0);
    UA_Double M_R01_LJointAngle_Degree = *M_R01_LJointAngle_Degree_ptr; 
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R01_LJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18059), value);
    shmdt(M_R01_LJointAngle_Degree_ptr); 
}
static void beforeRead_M_R01_RJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R01_RJointAngle_Degree = ftok("shared_memory", 7);
    int shmid_M_R01_RJointAngle_Degree = shmget(key_M_R01_RJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R01_RJointAngle_Degree_ptr = (float *)shmat(shmid_M_R01_RJointAngle_Degree, NULL, 0);
    UA_Double M_R01_RJointAngle_Degree = *M_R01_RJointAngle_Degree_ptr;
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R01_RJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18065), value);
    shmdt(M_R01_RJointAngle_Degree_ptr);
}
static void beforeRead_M_R01_UJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R01_UJointAngle_Degree = ftok("shared_memory", 8);
    int shmid_M_R01_UJointAngle_Degree = shmget(key_M_R01_UJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R01_UJointAngle_Degree_ptr = (float *)shmat(shmid_M_R01_UJointAngle_Degree, NULL, 0);
    UA_Double M_R01_UJointAngle_Degree = *M_R01_UJointAngle_Degree_ptr;

    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R01_UJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18071), value);
    shmdt(M_R01_UJointAngle_Degree_ptr);
}
static void beforeRead_M_R01_BJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R01_BJointAngle_Degree = ftok("shared_memory", 9);
    int shmid_M_R01_BJointAngle_Degree = shmget(key_M_R01_BJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R01_BJointAngle_Degree_ptr = (float *)shmat(shmid_M_R01_BJointAngle_Degree, NULL, 0);
    UA_Double M_R01_BJointAngle_Degree = *M_R01_BJointAngle_Degree_ptr;

    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R01_BJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18077), value);
    shmdt(M_R01_BJointAngle_Degree_ptr);
}
static void beforeRead_M_R01_TJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R01_TJointAngle_Degree = ftok("shared_memory", 10);
    int shmid_M_R01_TJointAngle_Degree = shmget(key_M_R01_TJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R01_TJointAngle_Degree_ptr = (float *)shmat(shmid_M_R01_TJointAngle_Degree, NULL, 0);
    UA_Double M_R01_TJointAngle_Degree = *M_R01_TJointAngle_Degree_ptr;    
   
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R01_TJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18083), value);
    shmdt(M_R01_TJointAngle_Degree_ptr);
}
static void beforeRead_M_R02_SJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R02_SJointAngle_Degree = ftok("shared_memory", 11);
    int shmid_M_R02_SJointAngle_Degree = shmget(key_M_R02_SJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R02_SJointAngle_Degree_ptr = (float *)shmat(shmid_M_R02_SJointAngle_Degree, NULL, 0);
    UA_Double M_R02_SJointAngle_Degree = *M_R02_SJointAngle_Degree_ptr;
        
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R02_SJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18164), value);
    shmdt(M_R02_SJointAngle_Degree_ptr);
}
static void beforeRead_M_R02_LJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R02_LJointAngle_Degree = ftok("shared_memory", 12);
    int shmid_M_R02_LJointAngle_Degree = shmget(key_M_R02_LJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R02_LJointAngle_Degree_ptr = (float *)shmat(shmid_M_R02_LJointAngle_Degree, NULL, 0);
    UA_Double M_R02_LJointAngle_Degree = *M_R02_LJointAngle_Degree_ptr;

    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R02_LJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18170), value);
    shmdt(M_R02_LJointAngle_Degree_ptr);
}
static void beforeRead_M_R02_RJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R02_RJointAngle_Degree = ftok("shared_memory", 13);
    int shmid_M_R02_RJointAngle_Degree = shmget(key_M_R02_RJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R02_RJointAngle_Degree_ptr = (float *)shmat(shmid_M_R02_RJointAngle_Degree, NULL, 0);
    UA_Double M_R02_RJointAngle_Degree = *M_R02_RJointAngle_Degree_ptr;
  
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R02_RJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18176), value);
    shmdt(M_R02_RJointAngle_Degree_ptr);
}
static void beforeRead_M_R02_UJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R02_UJointAngle_Degree = ftok("shared_memory", 14);
    int shmid_M_R02_UJointAngle_Degree = shmget(key_M_R02_UJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R02_UJointAngle_Degree_ptr = (float *)shmat(shmid_M_R02_UJointAngle_Degree, NULL, 0);
    UA_Double M_R02_UJointAngle_Degree = *M_R02_UJointAngle_Degree_ptr;

    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R02_UJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18182), value);
    shmdt(M_R02_UJointAngle_Degree_ptr);
}
static void beforeRead_M_R02_BJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R02_BJointAngle_Degree = ftok("shared_memory", 15);
    int shmid_M_R02_BJointAngle_Degree = shmget(key_M_R02_BJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R02_BJointAngle_Degree_ptr = (float *)shmat(shmid_M_R02_BJointAngle_Degree, NULL, 0);
    UA_Double M_R02_BJointAngle_Degree = *M_R02_BJointAngle_Degree_ptr;

    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R02_BJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18188), value);
    shmdt(M_R02_BJointAngle_Degree_ptr);
}
static void beforeRead_M_R02_TJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R02_TJointAngle_Degree = ftok("shared_memory", 16);
    int shmid_M_R02_TJointAngle_Degree = shmget(key_M_R02_TJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R02_TJointAngle_Degree_ptr = (float *)shmat(shmid_M_R02_TJointAngle_Degree, NULL, 0);
    UA_Double M_R02_TJointAngle_Degree = *M_R02_TJointAngle_Degree_ptr;

    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R02_TJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18194), value);
    shmdt(M_R02_TJointAngle_Degree_ptr); 
}
static void beforeRead_M_R03_SJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R03_SJointAngle_Degree = ftok("shared_memory", 17);
    int shmid_M_R03_SJointAngle_Degree = shmget(key_M_R03_SJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R03_SJointAngle_Degree_ptr = (float *)shmat(shmid_M_R03_SJointAngle_Degree, NULL, 0);
    UA_Double M_R03_SJointAngle_Degree = *M_R03_SJointAngle_Degree_ptr;

    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R03_SJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18201), value);
    shmdt(M_R03_SJointAngle_Degree_ptr);
}
static void beforeRead_M_R03_LJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R03_LJointAngle_Degree = ftok("shared_memory", 18);
    int shmid_M_R03_LJointAngle_Degree = shmget(key_M_R03_LJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R03_LJointAngle_Degree_ptr = (float *)shmat(shmid_M_R03_LJointAngle_Degree, NULL, 0);
    UA_Double M_R03_LJointAngle_Degree = *M_R03_LJointAngle_Degree_ptr;

    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R03_LJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18207), value);
    shmdt(M_R03_LJointAngle_Degree_ptr);
}
static void beforeRead_M_R03_RJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R03_RJointAngle_Degree = ftok("shared_memory", 19);
    int shmid_M_R03_RJointAngle_Degree = shmget(key_M_R03_RJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R03_RJointAngle_Degree_ptr = (float *)shmat(shmid_M_R03_RJointAngle_Degree, NULL, 0);
    UA_Double M_R03_RJointAngle_Degree = *M_R03_RJointAngle_Degree_ptr;

    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R03_RJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18213), value);
    shmdt(M_R03_RJointAngle_Degree_ptr);
}
static void beforeRead_M_R03_UJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R03_UJointAngle_Degree = ftok("shared_memory", 20);
    int shmid_M_R03_UJointAngle_Degree = shmget(key_M_R03_UJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R03_UJointAngle_Degree_ptr = (float *)shmat(shmid_M_R03_UJointAngle_Degree, NULL, 0);
    UA_Double M_R03_UJointAngle_Degree = *M_R03_UJointAngle_Degree_ptr;
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R03_UJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18219), value);
    shmdt(M_R03_UJointAngle_Degree_ptr);
}
static void beforeRead_M_R03_BJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R03_BJointAngle_Degree = ftok("shared_memory", 21);
    int shmid_M_R03_BJointAngle_Degree = shmget(key_M_R03_BJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R03_BJointAngle_Degree_ptr = (float *)shmat(shmid_M_R03_BJointAngle_Degree, NULL, 0);
    UA_Double M_R03_BJointAngle_Degree = *M_R03_BJointAngle_Degree_ptr;

    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R03_BJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18225), value);
    shmdt(M_R03_BJointAngle_Degree_ptr);
}
static void beforeRead_M_R03_TJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R03_TJointAngle_Degree = ftok("shared_memory", 22);
    int shmid_M_R03_TJointAngle_Degree = shmget(key_M_R03_TJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R03_TJointAngle_Degree_ptr = (float *)shmat(shmid_M_R03_TJointAngle_Degree, NULL, 0);
    UA_Double M_R03_TJointAngle_Degree = *M_R03_TJointAngle_Degree_ptr;
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R03_TJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18231), value);
    shmdt(M_R03_TJointAngle_Degree_ptr);
}
static void beforeRead_M_R04_SJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R04_SJointAngle_Degree = ftok("shared_memory", 23);
    int shmid_M_R04_SJointAngle_Degree = shmget(key_M_R04_SJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R04_SJointAngle_Degree_ptr = (float *)shmat(shmid_M_R04_SJointAngle_Degree, NULL, 0);
    UA_Double M_R04_SJointAngle_Degree = *M_R04_SJointAngle_Degree_ptr;
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R04_SJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18238), value);
    shmdt(M_R04_SJointAngle_Degree_ptr);
}
static void beforeRead_M_R04_LJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R04_LJointAngle_Degree = ftok("shared_memory", 24);
    int shmid_M_R04_LJointAngle_Degree = shmget(key_M_R04_LJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R04_LJointAngle_Degree_ptr = (float *)shmat(shmid_M_R04_LJointAngle_Degree, NULL, 0);
    UA_Double M_R04_LJointAngle_Degree = *M_R04_LJointAngle_Degree_ptr;
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R04_LJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18244), value);
    shmdt(M_R04_LJointAngle_Degree_ptr);
}
static void beforeRead_M_R04_RJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R04_RJointAngle_Degree = ftok("shared_memory", 25);
    int shmid_M_R04_RJointAngle_Degree = shmget(key_M_R04_RJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R04_RJointAngle_Degree_ptr = (float *)shmat(shmid_M_R04_RJointAngle_Degree, NULL, 0);
    UA_Double M_R04_RJointAngle_Degree = *M_R04_RJointAngle_Degree_ptr;
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R04_RJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18250), value);
    shmdt(M_R04_RJointAngle_Degree_ptr);
}
static void beforeRead_M_R04_UJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R04_UJointAngle_Degree = ftok("shared_memory", 26);
    int shmid_M_R04_UJointAngle_Degree = shmget(key_M_R04_UJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R04_UJointAngle_Degree_ptr = (float *)shmat(shmid_M_R04_UJointAngle_Degree, NULL, 0);
    UA_Double M_R04_UJointAngle_Degree = *M_R04_UJointAngle_Degree_ptr;

    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R04_UJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18256), value);
    shmdt(M_R04_UJointAngle_Degree_ptr);
}
static void beforeRead_M_R04_BJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R04_BJointAngle_Degree = ftok("shared_memory", 27);
    int shmid_M_R04_BJointAngle_Degree = shmget(key_M_R04_BJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R04_BJointAngle_Degree_ptr = (float *)shmat(shmid_M_R04_BJointAngle_Degree, NULL, 0);
    UA_Double M_R04_BJointAngle_Degree = *M_R04_BJointAngle_Degree_ptr;   
    
    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R04_BJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18262), value);
    shmdt(M_R04_BJointAngle_Degree_ptr);
}
static void beforeRead_M_R04_TJointAngle_Degree(UA_Server *server, const UA_NodeId *sessionId, void *sessionContext, const UA_NodeId *nodeid, void *nodeContext, const UA_NumericRange *range, const UA_DataValue *data) {
    key_t key_M_R04_TJointAngle_Degree = ftok("shared_memory", 28);
    int shmid_M_R04_TJointAngle_Degree = shmget(key_M_R04_TJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
    float *M_R04_TJointAngle_Degree_ptr = (float *)shmat(shmid_M_R04_TJointAngle_Degree, NULL, 0);
    UA_Double M_R04_TJointAngle_Degree = *M_R04_TJointAngle_Degree_ptr;    

    UA_Variant value;
    UA_Variant_setScalarCopy(&value, &M_R04_TJointAngle_Degree, &UA_TYPES[UA_TYPES_DOUBLE]);
    UA_Server_writeValue(server, UA_NODEID_NUMERIC(4,18268), value);
    shmdt(M_R04_TJointAngle_Degree_ptr);
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
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18053), callback_M_R01_SJointAngle_Degree);
        
        UA_ValueCallback callback_M_R01_LJointAngle_Degree;
        callback_M_R01_LJointAngle_Degree.onRead = beforeRead_M_R01_LJointAngle_Degree;
        callback_M_R01_LJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18059), callback_M_R01_LJointAngle_Degree);
        
        UA_ValueCallback callback_M_R01_RJointAngle_Degree;
        callback_M_R01_RJointAngle_Degree.onRead = beforeRead_M_R01_RJointAngle_Degree;
        callback_M_R01_RJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18065), callback_M_R01_RJointAngle_Degree);
        
        UA_ValueCallback callback_M_R01_UJointAngle_Degree;
        callback_M_R01_UJointAngle_Degree.onRead = beforeRead_M_R01_UJointAngle_Degree;
        callback_M_R01_UJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18071), callback_M_R01_UJointAngle_Degree);
        
        UA_ValueCallback callback_M_R01_BJointAngle_Degree;
        callback_M_R01_BJointAngle_Degree.onRead = beforeRead_M_R01_BJointAngle_Degree;
        callback_M_R01_BJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18077), callback_M_R01_BJointAngle_Degree);
        
        UA_ValueCallback callback_M_R01_TJointAngle_Degree;
        callback_M_R01_TJointAngle_Degree.onRead = beforeRead_M_R01_TJointAngle_Degree;
        callback_M_R01_TJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18083), callback_M_R01_TJointAngle_Degree);
        
        UA_ValueCallback callback_M_R02_SJointAngle_Degree;
        callback_M_R02_SJointAngle_Degree.onRead = beforeRead_M_R02_SJointAngle_Degree;
        callback_M_R02_SJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18164), callback_M_R02_SJointAngle_Degree);
        
        UA_ValueCallback callback_M_R02_LJointAngle_Degree;
        callback_M_R02_LJointAngle_Degree.onRead = beforeRead_M_R02_LJointAngle_Degree;
        callback_M_R02_LJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18170), callback_M_R02_LJointAngle_Degree);
        
        UA_ValueCallback callback_M_R02_RJointAngle_Degree;
        callback_M_R02_RJointAngle_Degree.onRead = beforeRead_M_R02_RJointAngle_Degree;
        callback_M_R02_RJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18176), callback_M_R02_RJointAngle_Degree);
        
        UA_ValueCallback callback_M_R02_UJointAngle_Degree;
        callback_M_R02_UJointAngle_Degree.onRead = beforeRead_M_R02_UJointAngle_Degree;
        callback_M_R02_UJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18182), callback_M_R02_UJointAngle_Degree);
        
        UA_ValueCallback callback_M_R02_BJointAngle_Degree;
        callback_M_R02_BJointAngle_Degree.onRead = beforeRead_M_R02_BJointAngle_Degree;
        callback_M_R02_BJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18188), callback_M_R02_BJointAngle_Degree);
        
        UA_ValueCallback callback_M_R02_TJointAngle_Degree;
        callback_M_R02_TJointAngle_Degree.onRead = beforeRead_M_R02_TJointAngle_Degree;
        callback_M_R02_TJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18194), callback_M_R02_TJointAngle_Degree);
        
        UA_ValueCallback callback_M_R03_SJointAngle_Degree;
        callback_M_R03_SJointAngle_Degree.onRead = beforeRead_M_R03_SJointAngle_Degree;
        callback_M_R03_SJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18201), callback_M_R03_SJointAngle_Degree);
        
        UA_ValueCallback callback_M_R03_LJointAngle_Degree;
        callback_M_R03_LJointAngle_Degree.onRead = beforeRead_M_R03_LJointAngle_Degree;
        callback_M_R03_LJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18207), callback_M_R03_LJointAngle_Degree);
        
        UA_ValueCallback callback_M_R03_RJointAngle_Degree;
        callback_M_R03_RJointAngle_Degree.onRead = beforeRead_M_R03_RJointAngle_Degree;
        callback_M_R03_RJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18213), callback_M_R03_RJointAngle_Degree);
        
        UA_ValueCallback callback_M_R03_UJointAngle_Degree;
        callback_M_R03_UJointAngle_Degree.onRead = beforeRead_M_R03_UJointAngle_Degree;
        callback_M_R03_UJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18219), callback_M_R03_UJointAngle_Degree);
        
        UA_ValueCallback callback_M_R03_BJointAngle_Degree;
        callback_M_R03_BJointAngle_Degree.onRead = beforeRead_M_R03_BJointAngle_Degree;
        callback_M_R03_BJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18225), callback_M_R03_BJointAngle_Degree);
        
        UA_ValueCallback callback_M_R03_TJointAngle_Degree;
        callback_M_R03_TJointAngle_Degree.onRead = beforeRead_M_R03_TJointAngle_Degree;
        callback_M_R03_TJointAngle_Degree.onWrite = NULL;
        UA_Server_setVariableNode_valueCallback(server, UA_NODEID_NUMERIC(4,18231), callback_M_R03_TJointAngle_Degree);
        
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
        
        retval = UA_Server_run(server, &running);        
    }
    
    UA_Server_delete(server);
    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}
