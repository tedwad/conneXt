/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "myServer.h"


/* With - ns=3;i=15012 */

static UA_StatusCode function_myServer_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "Executes");
attr.displayName = UA_LOCALIZEDTEXT("", "With");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[3], 15012LU),
UA_NODEID_NUMERIC(ns[0], 32LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "With"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15012LU)
);
}

/* HasExternalVars - ns=3;i=15011 */

static UA_StatusCode function_myServer_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "ExternalVarsOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasExternalVars");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[3], 15011LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "HasExternalVars"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15011LU)
);
}

/* HasLocalVars - ns=3;i=15010 */

static UA_StatusCode function_myServer_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "LocalVarsOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasLocalVars");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[3], 15010LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "HasLocalVars"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15010LU)
);
}

/* HasInOutVars - ns=3;i=15009 */

static UA_StatusCode function_myServer_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "InOutVarsOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasInOutVars");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[3], 15009LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "HasInOutVars"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15009LU)
);
}

/* HasOutputVars - ns=3;i=15008 */

static UA_StatusCode function_myServer_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "OutputVarsOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasOutputVars");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[3], 15008LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "HasOutputVars"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15008LU)
);
}

/* HasInputVars - ns=3;i=15007 */

static UA_StatusCode function_myServer_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "InputVarsOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasInputVars");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,
UA_NODEID_NUMERIC(ns[3], 15007LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "HasInputVars"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15007LU)
);
}

/* Conveyors - ns=3;i=28161 */

static UA_StatusCode function_myServer_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.eventNotifier = UA_EVENTNOTIFIER_SUBSCRIBE_TO_EVENT;
attr.displayName = UA_LOCALIZEDTEXT("", "Conveyors");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 28161LU),
UA_NODEID_NUMERIC(ns[1], 5001LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[3], "Conveyors"),
UA_NODEID_NUMERIC(ns[2], 1002LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28161LU)
);
}

/* SafetyStates - ns=3;i=28600 */

static UA_StatusCode function_myServer_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SafetyStates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains safety-related data from motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 28600LU),
UA_NODEID_NUMERIC(ns[3], 28161LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SafetyStates"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28600LU)
);
}

/* Controllers - ns=3;i=28417 */

static UA_StatusCode function_myServer_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Controllers");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains the set of controllers in the motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 28417LU),
UA_NODEID_NUMERIC(ns[3], 28161LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Controllers"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28417LU)
);
}

/* MotionDevices - ns=3;i=28198 */

static UA_StatusCode function_myServer_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDevices");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains any kinematic or motion device which is part of the motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 28198LU),
UA_NODEID_NUMERIC(ns[3], 28161LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "MotionDevices"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28198LU)
);
}

/* Conveyor_4 - ns=3;i=29302 */

static UA_StatusCode function_myServer_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Conveyor_4");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 29302LU),
UA_NODEID_NUMERIC(ns[3], 28198LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Conveyor_4"),
UA_NODEID_NUMERIC(ns[2], 1004LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29302LU)
);
}

/* PowerTrains - ns=3;i=29422 */

static UA_StatusCode function_myServer_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 29422LU),
UA_NODEID_NUMERIC(ns[3], 29302LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PowerTrains"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29422LU)
);
}

/* Axes - ns=3;i=29341 */

static UA_StatusCode function_myServer_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 29341LU),
UA_NODEID_NUMERIC(ns[3], 29302LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Axes"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29341LU)
);
}

/* MotionDeviceCategory - ns=3;i=29337 */

static UA_StatusCode function_myServer_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 18193LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceCategory");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The variable MotionDeviceCategory provides the kind of motion device defined by MotionDeviceCategoryEnumeration based on ISO 8373.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29337LU),
UA_NODEID_NUMERIC(ns[3], 29302LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29337LU)
);
}

/* SerialNumber - ns=3;i=29332 */

static UA_StatusCode function_myServer_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29332LU),
UA_NODEID_NUMERIC(ns[3], 29302LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29332LU)
);
}

/* ProductCode - ns=3;i=29329 */

static UA_StatusCode function_myServer_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29329LU),
UA_NODEID_NUMERIC(ns[3], 29302LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29329LU)
);
}

/* Model - ns=3;i=29325 */

static UA_StatusCode function_myServer_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29325LU),
UA_NODEID_NUMERIC(ns[3], 29302LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29325LU)
);
}

/* Manufacturer - ns=3;i=29323 */

static UA_StatusCode function_myServer_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29323LU),
UA_NODEID_NUMERIC(ns[3], 29302LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29323LU)
);
}

/* ParameterSet - ns=3;i=29303 */

static UA_StatusCode function_myServer_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 29303LU),
UA_NODEID_NUMERIC(ns[3], 29302LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29303LU)
);
}

/* SpeedOverride - ns=3;i=29340 */

static UA_StatusCode function_myServer_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SpeedOverride");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SpeedOverride provides the current speed setting in percent of programmed speed (0 - 100%).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29340LU),
UA_NODEID_NUMERIC(ns[3], 29303LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29340LU)
);
}

/* Conveyor_3 - ns=3;i=29084 */

static UA_StatusCode function_myServer_20_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Conveyor_3");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 29084LU),
UA_NODEID_NUMERIC(ns[3], 28198LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Conveyor_3"),
UA_NODEID_NUMERIC(ns[2], 1004LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29084LU)
);
}

/* PowerTrains - ns=3;i=29204 */

static UA_StatusCode function_myServer_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 29204LU),
UA_NODEID_NUMERIC(ns[3], 29084LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PowerTrains"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29204LU)
);
}

/* Axes - ns=3;i=29123 */

static UA_StatusCode function_myServer_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 29123LU),
UA_NODEID_NUMERIC(ns[3], 29084LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Axes"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29123LU)
);
}

/* MotionDeviceCategory - ns=3;i=29119 */

static UA_StatusCode function_myServer_23_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 18193LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceCategory");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The variable MotionDeviceCategory provides the kind of motion device defined by MotionDeviceCategoryEnumeration based on ISO 8373.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29119LU),
UA_NODEID_NUMERIC(ns[3], 29084LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29119LU)
);
}

/* SerialNumber - ns=3;i=29114 */

static UA_StatusCode function_myServer_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29114LU),
UA_NODEID_NUMERIC(ns[3], 29084LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29114LU)
);
}

/* ProductCode - ns=3;i=29111 */

static UA_StatusCode function_myServer_25_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29111LU),
UA_NODEID_NUMERIC(ns[3], 29084LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29111LU)
);
}

/* Model - ns=3;i=29107 */

static UA_StatusCode function_myServer_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29107LU),
UA_NODEID_NUMERIC(ns[3], 29084LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29107LU)
);
}

/* Manufacturer - ns=3;i=29105 */

static UA_StatusCode function_myServer_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29105LU),
UA_NODEID_NUMERIC(ns[3], 29084LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29105LU)
);
}

/* ParameterSet - ns=3;i=29085 */

static UA_StatusCode function_myServer_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 29085LU),
UA_NODEID_NUMERIC(ns[3], 29084LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29085LU)
);
}

/* SpeedOverride - ns=3;i=29122 */

static UA_StatusCode function_myServer_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SpeedOverride");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SpeedOverride provides the current speed setting in percent of programmed speed (0 - 100%).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29122LU),
UA_NODEID_NUMERIC(ns[3], 29085LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29122LU)
);
}

/* Conveyor_2 - ns=3;i=28866 */

static UA_StatusCode function_myServer_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Conveyor_2");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 28866LU),
UA_NODEID_NUMERIC(ns[3], 28198LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Conveyor_2"),
UA_NODEID_NUMERIC(ns[2], 1004LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28866LU)
);
}

/* PowerTrains - ns=3;i=28986 */

static UA_StatusCode function_myServer_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 28986LU),
UA_NODEID_NUMERIC(ns[3], 28866LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PowerTrains"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28986LU)
);
}

/* Axes - ns=3;i=28905 */

static UA_StatusCode function_myServer_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 28905LU),
UA_NODEID_NUMERIC(ns[3], 28866LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Axes"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28905LU)
);
}

/* MotionDeviceCategory - ns=3;i=28901 */

static UA_StatusCode function_myServer_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 18193LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceCategory");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The variable MotionDeviceCategory provides the kind of motion device defined by MotionDeviceCategoryEnumeration based on ISO 8373.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 28901LU),
UA_NODEID_NUMERIC(ns[3], 28866LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28901LU)
);
}

/* SerialNumber - ns=3;i=28896 */

static UA_StatusCode function_myServer_34_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 28896LU),
UA_NODEID_NUMERIC(ns[3], 28866LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28896LU)
);
}

/* ProductCode - ns=3;i=28893 */

static UA_StatusCode function_myServer_35_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 28893LU),
UA_NODEID_NUMERIC(ns[3], 28866LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_35_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28893LU)
);
}

/* Model - ns=3;i=28889 */

static UA_StatusCode function_myServer_36_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 28889LU),
UA_NODEID_NUMERIC(ns[3], 28866LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28889LU)
);
}

/* Manufacturer - ns=3;i=28887 */

static UA_StatusCode function_myServer_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 28887LU),
UA_NODEID_NUMERIC(ns[3], 28866LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28887LU)
);
}

/* ParameterSet - ns=3;i=28867 */

static UA_StatusCode function_myServer_38_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 28867LU),
UA_NODEID_NUMERIC(ns[3], 28866LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28867LU)
);
}

/* SpeedOverride - ns=3;i=28904 */

static UA_StatusCode function_myServer_39_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SpeedOverride");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SpeedOverride provides the current speed setting in percent of programmed speed (0 - 100%).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 28904LU),
UA_NODEID_NUMERIC(ns[3], 28867LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28904LU)
);
}

/* Conveyor_1 - ns=3;i=28648 */

static UA_StatusCode function_myServer_40_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Conveyor_1");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 28648LU),
UA_NODEID_NUMERIC(ns[3], 28198LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Conveyor_1"),
UA_NODEID_NUMERIC(ns[2], 1004LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28648LU)
);
}

/* PowerTrains - ns=3;i=28768 */

static UA_StatusCode function_myServer_41_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 28768LU),
UA_NODEID_NUMERIC(ns[3], 28648LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PowerTrains"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28768LU)
);
}

/* Axes - ns=3;i=28687 */

static UA_StatusCode function_myServer_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 28687LU),
UA_NODEID_NUMERIC(ns[3], 28648LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Axes"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28687LU)
);
}

/* MotionDeviceCategory - ns=3;i=28683 */

static UA_StatusCode function_myServer_43_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 18193LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceCategory");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The variable MotionDeviceCategory provides the kind of motion device defined by MotionDeviceCategoryEnumeration based on ISO 8373.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 28683LU),
UA_NODEID_NUMERIC(ns[3], 28648LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28683LU)
);
}

/* SerialNumber - ns=3;i=28678 */

static UA_StatusCode function_myServer_44_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 28678LU),
UA_NODEID_NUMERIC(ns[3], 28648LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28678LU)
);
}

/* ProductCode - ns=3;i=28675 */

static UA_StatusCode function_myServer_45_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 28675LU),
UA_NODEID_NUMERIC(ns[3], 28648LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28675LU)
);
}

/* Model - ns=3;i=28671 */

static UA_StatusCode function_myServer_46_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 28671LU),
UA_NODEID_NUMERIC(ns[3], 28648LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28671LU)
);
}

/* Manufacturer - ns=3;i=28669 */

static UA_StatusCode function_myServer_47_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 28669LU),
UA_NODEID_NUMERIC(ns[3], 28648LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28669LU)
);
}

/* ParameterSet - ns=3;i=28649 */

static UA_StatusCode function_myServer_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 28649LU),
UA_NODEID_NUMERIC(ns[3], 28648LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28649LU)
);
}

/* SpeedOverride - ns=3;i=28686 */

static UA_StatusCode function_myServer_49_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SpeedOverride");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SpeedOverride provides the current speed setting in percent of programmed speed (0 - 100%).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 28686LU),
UA_NODEID_NUMERIC(ns[3], 28649LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_49_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28686LU)
);
}

/* R05 - ns=3;i=27214 */

static UA_StatusCode function_myServer_50_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.eventNotifier = UA_EVENTNOTIFIER_SUBSCRIBE_TO_EVENT;
attr.displayName = UA_LOCALIZEDTEXT("", "R05");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 27214LU),
UA_NODEID_NUMERIC(ns[1], 5001LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[3], "R05"),
UA_NODEID_NUMERIC(ns[2], 1002LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27214LU)
);
}

/* SafetyStates - ns=3;i=27713 */

static UA_StatusCode function_myServer_51_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SafetyStates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains safety-related data from motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 27713LU),
UA_NODEID_NUMERIC(ns[3], 27214LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SafetyStates"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_51_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27713LU)
);
}

/* Controllers - ns=3;i=27470 */

static UA_StatusCode function_myServer_52_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Controllers");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains the set of controllers in the motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 27470LU),
UA_NODEID_NUMERIC(ns[3], 27214LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Controllers"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_52_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27470LU)
);
}

/* MotionDevices - ns=3;i=27251 */

static UA_StatusCode function_myServer_53_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDevices");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains any kinematic or motion device which is part of the motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 27251LU),
UA_NODEID_NUMERIC(ns[3], 27214LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "MotionDevices"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27251LU)
);
}

/* R04 - ns=3;i=25903 */

static UA_StatusCode function_myServer_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.eventNotifier = UA_EVENTNOTIFIER_SUBSCRIBE_TO_EVENT;
attr.displayName = UA_LOCALIZEDTEXT("", "R04");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 25903LU),
UA_NODEID_NUMERIC(ns[1], 5001LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[3], "R04"),
UA_NODEID_NUMERIC(ns[2], 1002LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25903LU)
);
}

/* SafetyStates - ns=3;i=26342 */

static UA_StatusCode function_myServer_55_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SafetyStates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains safety-related data from motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 26342LU),
UA_NODEID_NUMERIC(ns[3], 25903LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SafetyStates"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 26342LU)
);
}

/* Controllers - ns=3;i=26159 */

static UA_StatusCode function_myServer_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Controllers");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains the set of controllers in the motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 26159LU),
UA_NODEID_NUMERIC(ns[3], 25903LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Controllers"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 26159LU)
);
}

/* MotionDevices - ns=3;i=25940 */

static UA_StatusCode function_myServer_57_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDevices");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains any kinematic or motion device which is part of the motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 25940LU),
UA_NODEID_NUMERIC(ns[3], 25903LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "MotionDevices"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25940LU)
);
}

/* R03 - ns=3;i=24539 */

static UA_StatusCode function_myServer_58_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.eventNotifier = UA_EVENTNOTIFIER_SUBSCRIBE_TO_EVENT;
attr.displayName = UA_LOCALIZEDTEXT("", "R03");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 24539LU),
UA_NODEID_NUMERIC(ns[1], 5001LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[3], "R03"),
UA_NODEID_NUMERIC(ns[2], 1002LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 24539LU)
);
}

/* SafetyStates - ns=3;i=25455 */

static UA_StatusCode function_myServer_59_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SafetyStates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains safety-related data from motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 25455LU),
UA_NODEID_NUMERIC(ns[3], 24539LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SafetyStates"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25455LU)
);
}

/* Controllers - ns=3;i=25272 */

static UA_StatusCode function_myServer_60_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Controllers");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains the set of controllers in the motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 25272LU),
UA_NODEID_NUMERIC(ns[3], 24539LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Controllers"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25272LU)
);
}

/* MotionDevices - ns=3;i=24576 */

static UA_StatusCode function_myServer_61_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDevices");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains any kinematic or motion device which is part of the motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 24576LU),
UA_NODEID_NUMERIC(ns[3], 24539LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "MotionDevices"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 24576LU)
);
}

/* R02 - ns=3;i=22698 */

static UA_StatusCode function_myServer_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.eventNotifier = UA_EVENTNOTIFIER_SUBSCRIBE_TO_EVENT;
attr.displayName = UA_LOCALIZEDTEXT("", "R02");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 22698LU),
UA_NODEID_NUMERIC(ns[1], 5001LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[3], "R02"),
UA_NODEID_NUMERIC(ns[2], 1002LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 22698LU)
);
}

/* SafetyStates - ns=3;i=23614 */

static UA_StatusCode function_myServer_63_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SafetyStates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains safety-related data from motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 23614LU),
UA_NODEID_NUMERIC(ns[3], 22698LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SafetyStates"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_63_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 23614LU)
);
}

/* Controllers - ns=3;i=23431 */

static UA_StatusCode function_myServer_64_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Controllers");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains the set of controllers in the motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 23431LU),
UA_NODEID_NUMERIC(ns[3], 22698LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Controllers"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_64_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 23431LU)
);
}

/* MotionDevices - ns=3;i=22735 */

static UA_StatusCode function_myServer_65_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDevices");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains any kinematic or motion device which is part of the motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 22735LU),
UA_NODEID_NUMERIC(ns[3], 22698LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "MotionDevices"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_65_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 22735LU)
);
}

/* R01 - ns=3;i=20857 */

static UA_StatusCode function_myServer_66_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.eventNotifier = UA_EVENTNOTIFIER_SUBSCRIBE_TO_EVENT;
attr.displayName = UA_LOCALIZEDTEXT("", "R01");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 20857LU),
UA_NODEID_NUMERIC(ns[1], 5001LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[3], "R01"),
UA_NODEID_NUMERIC(ns[2], 1002LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 20857LU)
);
}

/* SafetyStates - ns=3;i=21773 */

static UA_StatusCode function_myServer_67_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SafetyStates");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains safety-related data from motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 21773LU),
UA_NODEID_NUMERIC(ns[3], 20857LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SafetyStates"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_67_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 21773LU)
);
}

/* Controllers - ns=3;i=21113 */

static UA_StatusCode function_myServer_68_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Controllers");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains the set of controllers in the motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 21113LU),
UA_NODEID_NUMERIC(ns[3], 20857LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Controllers"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_68_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 21113LU)
);
}

/* MotionDevices - ns=3;i=20894 */

static UA_StatusCode function_myServer_69_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDevices");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Contains any kinematic or motion device which is part of the motion device system.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 20894LU),
UA_NODEID_NUMERIC(ns[3], 20857LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "MotionDevices"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_69_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 20894LU)
);
}

/* <SINAMICS_G120C> - ns=3;i=19907 */

static UA_StatusCode function_myServer_70_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<SINAMICS_G120C>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 19907LU),
UA_NODEID_NUMERIC(ns[2], 17793LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "<SINAMICS_G120C>"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_70_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 19907LU)
);
}

/* VFD_4 - ns=3;i=29673 */

static UA_StatusCode function_myServer_71_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VFD_4");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 29673LU),
UA_NODEID_NUMERIC(ns[3], 28417LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "VFD_4"),
UA_NODEID_NUMERIC(ns[3], 19907LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_71_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29673LU)
);
}

/* Temperature - ns=3;i=29718 */

static UA_StatusCode function_myServer_72_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Temperature");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The Drive temperature given by a temperature sensor inside of the Drive.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29718LU),
UA_NODEID_NUMERIC(ns[3], 29673LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Temperature"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_72_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29718LU)
);
}

/* EngineeringUnits - ns=3;i=29723 */

static UA_StatusCode function_myServer_73_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29723LU),
UA_NODEID_NUMERIC(ns[3], 29718LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_73_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29723LU)
);
}

/* RevisionCounter - ns=3;i=29705 */

static UA_StatusCode function_myServer_74_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RevisionCounter");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "An incremental counter indicating the number of times the static data within the Device has been modified");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29705LU),
UA_NODEID_NUMERIC(ns[3], 29673LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "RevisionCounter"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_74_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29705LU)
);
}

/* SerialNumber - ns=3;i=29703 */

static UA_StatusCode function_myServer_75_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identifier that uniquely identifies, within a manufacturer, a device instance");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29703LU),
UA_NODEID_NUMERIC(ns[3], 29673LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_75_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29703LU)
);
}

/* DeviceManual - ns=3;i=29701 */

static UA_StatusCode function_myServer_76_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceManual");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Address (pathname in the file system or a URL | Web address) of user manual for the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29701LU),
UA_NODEID_NUMERIC(ns[3], 29673LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "DeviceManual"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_76_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29701LU)
);
}

/* ProductCode - ns=3;i=29700 */

static UA_StatusCode function_myServer_77_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The ProductCode property provides a unique combination of numbers and letters used to identify the product. It may be the order information displayed on type shields or in ERP systems.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29700LU),
UA_NODEID_NUMERIC(ns[3], 29673LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_77_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29700LU)
);
}

/* DeviceRevision - ns=3;i=29699 */

static UA_StatusCode function_myServer_78_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Overall revision level of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29699LU),
UA_NODEID_NUMERIC(ns[3], 29673LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "DeviceRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_78_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29699LU)
);
}

/* SoftwareRevision - ns=3;i=29698 */

static UA_StatusCode function_myServer_79_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision level of the software/firmware of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29698LU),
UA_NODEID_NUMERIC(ns[3], 29673LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SoftwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29698LU)
);
}

/* HardwareRevision - ns=3;i=29697 */

static UA_StatusCode function_myServer_80_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "HardwareRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision level of the hardware of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29697LU),
UA_NODEID_NUMERIC(ns[3], 29673LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "HardwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_80_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29697LU)
);
}

/* Model - ns=3;i=29696 */

static UA_StatusCode function_myServer_81_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Model name of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29696LU),
UA_NODEID_NUMERIC(ns[3], 29673LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29696LU)
);
}

/* Manufacturer - ns=3;i=29694 */

static UA_StatusCode function_myServer_82_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Name of the company that manufactured the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29694LU),
UA_NODEID_NUMERIC(ns[3], 29673LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29694LU)
);
}

/* VFD_3 - ns=3;i=29622 */

static UA_StatusCode function_myServer_83_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VFD_3");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 29622LU),
UA_NODEID_NUMERIC(ns[3], 28417LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "VFD_3"),
UA_NODEID_NUMERIC(ns[3], 19907LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_83_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29622LU)
);
}

/* Temperature - ns=3;i=29667 */

static UA_StatusCode function_myServer_84_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Temperature");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The Drive temperature given by a temperature sensor inside of the Drive.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29667LU),
UA_NODEID_NUMERIC(ns[3], 29622LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Temperature"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_84_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29667LU)
);
}

/* EngineeringUnits - ns=3;i=29672 */

static UA_StatusCode function_myServer_85_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29672LU),
UA_NODEID_NUMERIC(ns[3], 29667LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_85_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29672LU)
);
}

/* RevisionCounter - ns=3;i=29654 */

static UA_StatusCode function_myServer_86_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RevisionCounter");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "An incremental counter indicating the number of times the static data within the Device has been modified");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29654LU),
UA_NODEID_NUMERIC(ns[3], 29622LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "RevisionCounter"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_86_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29654LU)
);
}

/* SerialNumber - ns=3;i=29652 */

static UA_StatusCode function_myServer_87_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identifier that uniquely identifies, within a manufacturer, a device instance");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29652LU),
UA_NODEID_NUMERIC(ns[3], 29622LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_87_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29652LU)
);
}

/* DeviceManual - ns=3;i=29650 */

static UA_StatusCode function_myServer_88_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceManual");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Address (pathname in the file system or a URL | Web address) of user manual for the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29650LU),
UA_NODEID_NUMERIC(ns[3], 29622LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "DeviceManual"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_88_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29650LU)
);
}

/* ProductCode - ns=3;i=29649 */

static UA_StatusCode function_myServer_89_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The ProductCode property provides a unique combination of numbers and letters used to identify the product. It may be the order information displayed on type shields or in ERP systems.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29649LU),
UA_NODEID_NUMERIC(ns[3], 29622LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_89_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29649LU)
);
}

/* DeviceRevision - ns=3;i=29648 */

static UA_StatusCode function_myServer_90_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Overall revision level of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29648LU),
UA_NODEID_NUMERIC(ns[3], 29622LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "DeviceRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_90_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29648LU)
);
}

/* SoftwareRevision - ns=3;i=29647 */

static UA_StatusCode function_myServer_91_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision level of the software/firmware of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29647LU),
UA_NODEID_NUMERIC(ns[3], 29622LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SoftwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_91_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29647LU)
);
}

/* HardwareRevision - ns=3;i=29646 */

static UA_StatusCode function_myServer_92_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "HardwareRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision level of the hardware of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29646LU),
UA_NODEID_NUMERIC(ns[3], 29622LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "HardwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_92_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29646LU)
);
}

/* Model - ns=3;i=29645 */

static UA_StatusCode function_myServer_93_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Model name of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29645LU),
UA_NODEID_NUMERIC(ns[3], 29622LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_93_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29645LU)
);
}

/* Manufacturer - ns=3;i=29643 */

static UA_StatusCode function_myServer_94_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Name of the company that manufactured the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29643LU),
UA_NODEID_NUMERIC(ns[3], 29622LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_94_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29643LU)
);
}

/* VFD_2 - ns=3;i=29571 */

static UA_StatusCode function_myServer_95_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VFD_2");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 29571LU),
UA_NODEID_NUMERIC(ns[3], 28417LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "VFD_2"),
UA_NODEID_NUMERIC(ns[3], 19907LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_95_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29571LU)
);
}

/* Temperature - ns=3;i=29616 */

static UA_StatusCode function_myServer_96_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Temperature");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The Drive temperature given by a temperature sensor inside of the Drive.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29616LU),
UA_NODEID_NUMERIC(ns[3], 29571LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Temperature"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_96_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29616LU)
);
}

/* EngineeringUnits - ns=3;i=29621 */

static UA_StatusCode function_myServer_97_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29621LU),
UA_NODEID_NUMERIC(ns[3], 29616LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_97_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29621LU)
);
}

/* RevisionCounter - ns=3;i=29603 */

static UA_StatusCode function_myServer_98_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RevisionCounter");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "An incremental counter indicating the number of times the static data within the Device has been modified");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29603LU),
UA_NODEID_NUMERIC(ns[3], 29571LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "RevisionCounter"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_98_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29603LU)
);
}

/* SerialNumber - ns=3;i=29601 */

static UA_StatusCode function_myServer_99_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identifier that uniquely identifies, within a manufacturer, a device instance");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29601LU),
UA_NODEID_NUMERIC(ns[3], 29571LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_99_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29601LU)
);
}

/* DeviceManual - ns=3;i=29599 */

static UA_StatusCode function_myServer_100_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceManual");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Address (pathname in the file system or a URL | Web address) of user manual for the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29599LU),
UA_NODEID_NUMERIC(ns[3], 29571LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "DeviceManual"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_100_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29599LU)
);
}

/* ProductCode - ns=3;i=29598 */

static UA_StatusCode function_myServer_101_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The ProductCode property provides a unique combination of numbers and letters used to identify the product. It may be the order information displayed on type shields or in ERP systems.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29598LU),
UA_NODEID_NUMERIC(ns[3], 29571LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_101_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29598LU)
);
}

/* DeviceRevision - ns=3;i=29597 */

static UA_StatusCode function_myServer_102_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Overall revision level of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29597LU),
UA_NODEID_NUMERIC(ns[3], 29571LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "DeviceRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_102_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29597LU)
);
}

/* SoftwareRevision - ns=3;i=29596 */

static UA_StatusCode function_myServer_103_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision level of the software/firmware of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29596LU),
UA_NODEID_NUMERIC(ns[3], 29571LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SoftwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_103_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29596LU)
);
}

/* HardwareRevision - ns=3;i=29595 */

static UA_StatusCode function_myServer_104_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "HardwareRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision level of the hardware of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29595LU),
UA_NODEID_NUMERIC(ns[3], 29571LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "HardwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_104_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29595LU)
);
}

/* Model - ns=3;i=29594 */

static UA_StatusCode function_myServer_105_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Model name of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29594LU),
UA_NODEID_NUMERIC(ns[3], 29571LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_105_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29594LU)
);
}

/* Manufacturer - ns=3;i=29592 */

static UA_StatusCode function_myServer_106_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Name of the company that manufactured the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29592LU),
UA_NODEID_NUMERIC(ns[3], 29571LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_106_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29592LU)
);
}

/* VFD_1 - ns=3;i=29520 */

static UA_StatusCode function_myServer_107_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VFD_1");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 29520LU),
UA_NODEID_NUMERIC(ns[3], 28417LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "VFD_1"),
UA_NODEID_NUMERIC(ns[3], 19907LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_107_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29520LU)
);
}

/* Temperature - ns=3;i=29565 */

static UA_StatusCode function_myServer_108_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Temperature");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The Drive temperature given by a temperature sensor inside of the Drive.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29565LU),
UA_NODEID_NUMERIC(ns[3], 29520LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Temperature"),
UA_NODEID_NUMERIC(ns[0], 17497LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_108_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29565LU)
);
}

/* EngineeringUnits - ns=3;i=29570 */

static UA_StatusCode function_myServer_109_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29570LU),
UA_NODEID_NUMERIC(ns[3], 29565LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_109_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29570LU)
);
}

/* RevisionCounter - ns=3;i=29552 */

static UA_StatusCode function_myServer_110_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RevisionCounter");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "An incremental counter indicating the number of times the static data within the Device has been modified");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29552LU),
UA_NODEID_NUMERIC(ns[3], 29520LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "RevisionCounter"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_110_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29552LU)
);
}

/* SerialNumber - ns=3;i=29550 */

static UA_StatusCode function_myServer_111_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identifier that uniquely identifies, within a manufacturer, a device instance");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29550LU),
UA_NODEID_NUMERIC(ns[3], 29520LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_111_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29550LU)
);
}

/* DeviceManual - ns=3;i=29548 */

static UA_StatusCode function_myServer_112_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceManual");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Address (pathname in the file system or a URL | Web address) of user manual for the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29548LU),
UA_NODEID_NUMERIC(ns[3], 29520LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "DeviceManual"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_112_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29548LU)
);
}

/* ProductCode - ns=3;i=29547 */

static UA_StatusCode function_myServer_113_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The ProductCode property provides a unique combination of numbers and letters used to identify the product. It may be the order information displayed on type shields or in ERP systems.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29547LU),
UA_NODEID_NUMERIC(ns[3], 29520LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_113_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29547LU)
);
}

/* DeviceRevision - ns=3;i=29546 */

static UA_StatusCode function_myServer_114_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Overall revision level of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29546LU),
UA_NODEID_NUMERIC(ns[3], 29520LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "DeviceRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_114_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29546LU)
);
}

/* SoftwareRevision - ns=3;i=29545 */

static UA_StatusCode function_myServer_115_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision level of the software/firmware of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29545LU),
UA_NODEID_NUMERIC(ns[3], 29520LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SoftwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_115_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29545LU)
);
}

/* HardwareRevision - ns=3;i=29544 */

static UA_StatusCode function_myServer_116_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "HardwareRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision level of the hardware of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29544LU),
UA_NODEID_NUMERIC(ns[3], 29520LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "HardwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_116_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29544LU)
);
}

/* Model - ns=3;i=29543 */

static UA_StatusCode function_myServer_117_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Model name of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29543LU),
UA_NODEID_NUMERIC(ns[3], 29520LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_117_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29543LU)
);
}

/* Manufacturer - ns=3;i=29541 */

static UA_StatusCode function_myServer_118_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Name of the company that manufactured the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 29541LU),
UA_NODEID_NUMERIC(ns[3], 29520LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_118_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 29541LU)
);
}

/* <YRC1000mini> - ns=3;i=19467 */

static UA_StatusCode function_myServer_119_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<YRC1000mini>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 19467LU),
UA_NODEID_NUMERIC(ns[2], 1003LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "<YRC1000mini>"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_119_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 19467LU)
);
}

/* Controller_R05 - ns=3;i=27979 */

static UA_StatusCode function_myServer_120_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Controller_R05");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 27979LU),
UA_NODEID_NUMERIC(ns[3], 27470LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Controller_R05"),
UA_NODEID_NUMERIC(ns[3], 19467LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_120_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27979LU)
);
}

/* TaskControls - ns=3;i=28089 */

static UA_StatusCode function_myServer_121_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TaskControls");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "TaskControls is a container for one or more instances of TaskControlType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 28089LU),
UA_NODEID_NUMERIC(ns[3], 27979LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "TaskControls"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_121_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28089LU)
);
}

/* Software - ns=3;i=28053 */

static UA_StatusCode function_myServer_122_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Software");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Software is a container for one or more instances of SoftwareType defined in OPC UA DI.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 28053LU),
UA_NODEID_NUMERIC(ns[3], 27979LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Software"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_122_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28053LU)
);
}

/* CurrentUser - ns=3;i=28014 */

static UA_StatusCode function_myServer_123_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentUser");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The given name of the device.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 28014LU),
UA_NODEID_NUMERIC(ns[3], 27979LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "CurrentUser"),
UA_NODEID_NUMERIC(ns[2], 18175LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_123_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28014LU)
);
}

/* Level - ns=3;i=28015 */

static UA_StatusCode function_myServer_124_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Level");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The weight of the load mounted on one mounting point.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 28015LU),
UA_NODEID_NUMERIC(ns[3], 28014LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Level"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_124_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28015LU)
);
}

/* SerialNumber - ns=3;i=28009 */

static UA_StatusCode function_myServer_125_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 28009LU),
UA_NODEID_NUMERIC(ns[3], 27979LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_125_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28009LU)
);
}

/* ProductCode - ns=3;i=28006 */

static UA_StatusCode function_myServer_126_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 28006LU),
UA_NODEID_NUMERIC(ns[3], 27979LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_126_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28006LU)
);
}

/* Model - ns=3;i=28002 */

static UA_StatusCode function_myServer_127_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 28002LU),
UA_NODEID_NUMERIC(ns[3], 27979LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_127_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28002LU)
);
}

/* Manufacturer - ns=3;i=28000 */

static UA_StatusCode function_myServer_128_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 28000LU),
UA_NODEID_NUMERIC(ns[3], 27979LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_128_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 28000LU)
);
}

/* Controller_R04 - ns=3;i=26608 */

static UA_StatusCode function_myServer_129_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Controller_R04");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 26608LU),
UA_NODEID_NUMERIC(ns[3], 26159LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Controller_R04"),
UA_NODEID_NUMERIC(ns[3], 19467LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_129_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 26608LU)
);
}

/* TaskControls - ns=3;i=26718 */

static UA_StatusCode function_myServer_130_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TaskControls");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "TaskControls is a container for one or more instances of TaskControlType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 26718LU),
UA_NODEID_NUMERIC(ns[3], 26608LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "TaskControls"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_130_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 26718LU)
);
}

/* Software - ns=3;i=26682 */

static UA_StatusCode function_myServer_131_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Software");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Software is a container for one or more instances of SoftwareType defined in OPC UA DI.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 26682LU),
UA_NODEID_NUMERIC(ns[3], 26608LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Software"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_131_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 26682LU)
);
}

/* CurrentUser - ns=3;i=26643 */

static UA_StatusCode function_myServer_132_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentUser");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The given name of the device.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 26643LU),
UA_NODEID_NUMERIC(ns[3], 26608LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "CurrentUser"),
UA_NODEID_NUMERIC(ns[2], 18175LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_132_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 26643LU)
);
}

/* Level - ns=3;i=26644 */

static UA_StatusCode function_myServer_133_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Level");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The weight of the load mounted on one mounting point.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 26644LU),
UA_NODEID_NUMERIC(ns[3], 26643LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Level"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_133_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 26644LU)
);
}

/* SerialNumber - ns=3;i=26638 */

static UA_StatusCode function_myServer_134_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 26638LU),
UA_NODEID_NUMERIC(ns[3], 26608LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_134_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 26638LU)
);
}

/* ProductCode - ns=3;i=26635 */

static UA_StatusCode function_myServer_135_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 26635LU),
UA_NODEID_NUMERIC(ns[3], 26608LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_135_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 26635LU)
);
}

/* Model - ns=3;i=26631 */

static UA_StatusCode function_myServer_136_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 26631LU),
UA_NODEID_NUMERIC(ns[3], 26608LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_136_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 26631LU)
);
}

/* Manufacturer - ns=3;i=26629 */

static UA_StatusCode function_myServer_137_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 26629LU),
UA_NODEID_NUMERIC(ns[3], 26608LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_137_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 26629LU)
);
}

/* Controller_R03 - ns=3;i=25721 */

static UA_StatusCode function_myServer_138_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Controller_R03");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 25721LU),
UA_NODEID_NUMERIC(ns[3], 25272LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Controller_R03"),
UA_NODEID_NUMERIC(ns[3], 19467LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_138_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25721LU)
);
}

/* TaskControls - ns=3;i=25831 */

static UA_StatusCode function_myServer_139_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TaskControls");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "TaskControls is a container for one or more instances of TaskControlType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 25831LU),
UA_NODEID_NUMERIC(ns[3], 25721LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "TaskControls"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_139_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25831LU)
);
}

/* Software - ns=3;i=25795 */

static UA_StatusCode function_myServer_140_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Software");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Software is a container for one or more instances of SoftwareType defined in OPC UA DI.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 25795LU),
UA_NODEID_NUMERIC(ns[3], 25721LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Software"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_140_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25795LU)
);
}

/* CurrentUser - ns=3;i=25756 */

static UA_StatusCode function_myServer_141_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentUser");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The given name of the device.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 25756LU),
UA_NODEID_NUMERIC(ns[3], 25721LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "CurrentUser"),
UA_NODEID_NUMERIC(ns[2], 18175LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_141_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25756LU)
);
}

/* Level - ns=3;i=25757 */

static UA_StatusCode function_myServer_142_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Level");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The weight of the load mounted on one mounting point.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 25757LU),
UA_NODEID_NUMERIC(ns[3], 25756LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Level"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_142_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25757LU)
);
}

/* SerialNumber - ns=3;i=25751 */

static UA_StatusCode function_myServer_143_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 25751LU),
UA_NODEID_NUMERIC(ns[3], 25721LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_143_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25751LU)
);
}

/* ProductCode - ns=3;i=25748 */

static UA_StatusCode function_myServer_144_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 25748LU),
UA_NODEID_NUMERIC(ns[3], 25721LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_144_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25748LU)
);
}

/* Model - ns=3;i=25744 */

static UA_StatusCode function_myServer_145_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 25744LU),
UA_NODEID_NUMERIC(ns[3], 25721LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_145_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25744LU)
);
}

/* Manufacturer - ns=3;i=25742 */

static UA_StatusCode function_myServer_146_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 25742LU),
UA_NODEID_NUMERIC(ns[3], 25721LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_146_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25742LU)
);
}

/* Controller_R02 - ns=3;i=24357 */

static UA_StatusCode function_myServer_147_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Controller_R02");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 24357LU),
UA_NODEID_NUMERIC(ns[3], 23431LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Controller_R02"),
UA_NODEID_NUMERIC(ns[3], 19467LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_147_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 24357LU)
);
}

/* TaskControls - ns=3;i=24467 */

static UA_StatusCode function_myServer_148_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TaskControls");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "TaskControls is a container for one or more instances of TaskControlType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 24467LU),
UA_NODEID_NUMERIC(ns[3], 24357LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "TaskControls"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_148_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 24467LU)
);
}

/* Software - ns=3;i=24431 */

static UA_StatusCode function_myServer_149_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Software");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Software is a container for one or more instances of SoftwareType defined in OPC UA DI.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 24431LU),
UA_NODEID_NUMERIC(ns[3], 24357LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Software"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_149_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 24431LU)
);
}

/* CurrentUser - ns=3;i=24392 */

static UA_StatusCode function_myServer_150_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentUser");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The given name of the device.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 24392LU),
UA_NODEID_NUMERIC(ns[3], 24357LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "CurrentUser"),
UA_NODEID_NUMERIC(ns[2], 18175LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_150_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 24392LU)
);
}

/* Level - ns=3;i=24393 */

static UA_StatusCode function_myServer_151_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Level");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The weight of the load mounted on one mounting point.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 24393LU),
UA_NODEID_NUMERIC(ns[3], 24392LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Level"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_151_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 24393LU)
);
}

/* SerialNumber - ns=3;i=24387 */

static UA_StatusCode function_myServer_152_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 24387LU),
UA_NODEID_NUMERIC(ns[3], 24357LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_152_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 24387LU)
);
}

/* ProductCode - ns=3;i=24384 */

static UA_StatusCode function_myServer_153_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 24384LU),
UA_NODEID_NUMERIC(ns[3], 24357LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_153_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 24384LU)
);
}

/* Model - ns=3;i=24380 */

static UA_StatusCode function_myServer_154_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 24380LU),
UA_NODEID_NUMERIC(ns[3], 24357LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_154_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 24380LU)
);
}

/* Manufacturer - ns=3;i=24378 */

static UA_StatusCode function_myServer_155_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 24378LU),
UA_NODEID_NUMERIC(ns[3], 24357LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_155_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 24378LU)
);
}

/* <YRC1000> - ns=3;i=19027 */

static UA_StatusCode function_myServer_156_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<YRC1000>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 19027LU),
UA_NODEID_NUMERIC(ns[2], 1003LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "<YRC1000>"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_156_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 19027LU)
);
}

/* Controller_R01 - ns=3;i=22039 */

static UA_StatusCode function_myServer_157_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Controller_R01");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 22039LU),
UA_NODEID_NUMERIC(ns[3], 21113LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Controller_R01"),
UA_NODEID_NUMERIC(ns[3], 19027LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_157_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 22039LU)
);
}

/* TaskControls - ns=3;i=22626 */

static UA_StatusCode function_myServer_158_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TaskControls");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "TaskControls is a container for one or more instances of TaskControlType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 22626LU),
UA_NODEID_NUMERIC(ns[3], 22039LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "TaskControls"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_158_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 22626LU)
);
}

/* Software - ns=3;i=22590 */

static UA_StatusCode function_myServer_159_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Software");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Software is a container for one or more instances of SoftwareType defined in OPC UA DI.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 22590LU),
UA_NODEID_NUMERIC(ns[3], 22039LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Software"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_159_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 22590LU)
);
}

/* CurrentUser - ns=3;i=22074 */

static UA_StatusCode function_myServer_160_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentUser");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The given name of the device.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 22074LU),
UA_NODEID_NUMERIC(ns[3], 22039LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "CurrentUser"),
UA_NODEID_NUMERIC(ns[2], 18175LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_160_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 22074LU)
);
}

/* Level - ns=3;i=22075 */

static UA_StatusCode function_myServer_161_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Level");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The weight of the load mounted on one mounting point.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 22075LU),
UA_NODEID_NUMERIC(ns[3], 22074LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "Level"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_161_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 22075LU)
);
}

/* SerialNumber - ns=3;i=22069 */

static UA_StatusCode function_myServer_162_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 22069LU),
UA_NODEID_NUMERIC(ns[3], 22039LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_162_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 22069LU)
);
}

/* ProductCode - ns=3;i=22066 */

static UA_StatusCode function_myServer_163_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 22066LU),
UA_NODEID_NUMERIC(ns[3], 22039LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_163_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 22066LU)
);
}

/* Model - ns=3;i=22062 */

static UA_StatusCode function_myServer_164_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 22062LU),
UA_NODEID_NUMERIC(ns[3], 22039LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_164_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 22062LU)
);
}

/* Manufacturer - ns=3;i=22060 */

static UA_StatusCode function_myServer_165_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 22060LU),
UA_NODEID_NUMERIC(ns[3], 22039LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_165_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 22060LU)
);
}

/* <GP8> - ns=3;i=18811 */

static UA_StatusCode function_myServer_166_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<GP8>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 18811LU),
UA_NODEID_NUMERIC(ns[2], 1004LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "<GP8>"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_166_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 18811LU)
);
}

/* MotionDevice_R04 - ns=3;i=26390 */

static UA_StatusCode function_myServer_167_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDevice_R04");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 26390LU),
UA_NODEID_NUMERIC(ns[3], 25940LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "MotionDevice_R04"),
UA_NODEID_NUMERIC(ns[3], 18811LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_167_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 26390LU)
);
}

/* PowerTrains - ns=3;i=26510 */

static UA_StatusCode function_myServer_168_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 26510LU),
UA_NODEID_NUMERIC(ns[3], 26390LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PowerTrains"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_168_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 26510LU)
);
}

/* Axes - ns=3;i=26429 */

static UA_StatusCode function_myServer_169_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 26429LU),
UA_NODEID_NUMERIC(ns[3], 26390LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Axes"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_169_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 26429LU)
);
}

/* MotionDeviceCategory - ns=3;i=26425 */

static UA_StatusCode function_myServer_170_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 18193LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceCategory");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The variable MotionDeviceCategory provides the kind of motion device defined by MotionDeviceCategoryEnumeration based on ISO 8373.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 26425LU),
UA_NODEID_NUMERIC(ns[3], 26390LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_170_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 26425LU)
);
}

/* SerialNumber - ns=3;i=26420 */

static UA_StatusCode function_myServer_171_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 26420LU),
UA_NODEID_NUMERIC(ns[3], 26390LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_171_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 26420LU)
);
}

/* ProductCode - ns=3;i=26417 */

static UA_StatusCode function_myServer_172_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 26417LU),
UA_NODEID_NUMERIC(ns[3], 26390LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_172_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 26417LU)
);
}

/* Model - ns=3;i=26413 */

static UA_StatusCode function_myServer_173_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 26413LU),
UA_NODEID_NUMERIC(ns[3], 26390LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_173_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 26413LU)
);
}

/* Manufacturer - ns=3;i=26411 */

static UA_StatusCode function_myServer_174_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 26411LU),
UA_NODEID_NUMERIC(ns[3], 26390LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_174_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 26411LU)
);
}

/* ParameterSet - ns=3;i=26391 */

static UA_StatusCode function_myServer_175_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 26391LU),
UA_NODEID_NUMERIC(ns[3], 26390LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_175_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 26391LU)
);
}

/* SpeedOverride - ns=3;i=26428 */

static UA_StatusCode function_myServer_176_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SpeedOverride");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SpeedOverride provides the current speed setting in percent of programmed speed (0 - 100%).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 26428LU),
UA_NODEID_NUMERIC(ns[3], 26391LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_176_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 26428LU)
);
}

/* MotionDevice_R03 - ns=3;i=25503 */

static UA_StatusCode function_myServer_177_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDevice_R03");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 25503LU),
UA_NODEID_NUMERIC(ns[3], 24576LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "MotionDevice_R03"),
UA_NODEID_NUMERIC(ns[3], 18811LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_177_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25503LU)
);
}

/* PowerTrains - ns=3;i=25623 */

static UA_StatusCode function_myServer_178_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 25623LU),
UA_NODEID_NUMERIC(ns[3], 25503LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PowerTrains"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_178_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25623LU)
);
}

/* Axes - ns=3;i=25542 */

static UA_StatusCode function_myServer_179_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 25542LU),
UA_NODEID_NUMERIC(ns[3], 25503LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Axes"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_179_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25542LU)
);
}

/* MotionDeviceCategory - ns=3;i=25538 */

static UA_StatusCode function_myServer_180_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 18193LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceCategory");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The variable MotionDeviceCategory provides the kind of motion device defined by MotionDeviceCategoryEnumeration based on ISO 8373.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 25538LU),
UA_NODEID_NUMERIC(ns[3], 25503LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_180_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25538LU)
);
}

/* SerialNumber - ns=3;i=25533 */

static UA_StatusCode function_myServer_181_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 25533LU),
UA_NODEID_NUMERIC(ns[3], 25503LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_181_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25533LU)
);
}

/* ProductCode - ns=3;i=25530 */

static UA_StatusCode function_myServer_182_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 25530LU),
UA_NODEID_NUMERIC(ns[3], 25503LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_182_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25530LU)
);
}

/* Model - ns=3;i=25526 */

static UA_StatusCode function_myServer_183_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 25526LU),
UA_NODEID_NUMERIC(ns[3], 25503LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_183_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25526LU)
);
}

/* Manufacturer - ns=3;i=25524 */

static UA_StatusCode function_myServer_184_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 25524LU),
UA_NODEID_NUMERIC(ns[3], 25503LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_184_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25524LU)
);
}

/* ParameterSet - ns=3;i=25504 */

static UA_StatusCode function_myServer_185_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 25504LU),
UA_NODEID_NUMERIC(ns[3], 25503LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_185_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25504LU)
);
}

/* SpeedOverride - ns=3;i=25541 */

static UA_StatusCode function_myServer_186_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SpeedOverride");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SpeedOverride provides the current speed setting in percent of programmed speed (0 - 100%).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 25541LU),
UA_NODEID_NUMERIC(ns[3], 25504LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_186_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 25541LU)
);
}

/* MotionDevice_R02 - ns=3;i=23662 */

static UA_StatusCode function_myServer_187_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDevice_R02");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 23662LU),
UA_NODEID_NUMERIC(ns[3], 22735LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "MotionDevice_R02"),
UA_NODEID_NUMERIC(ns[3], 18811LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_187_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 23662LU)
);
}

/* PowerTrains - ns=3;i=23782 */

static UA_StatusCode function_myServer_188_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 23782LU),
UA_NODEID_NUMERIC(ns[3], 23662LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PowerTrains"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_188_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 23782LU)
);
}

/* Axes - ns=3;i=23701 */

static UA_StatusCode function_myServer_189_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 23701LU),
UA_NODEID_NUMERIC(ns[3], 23662LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Axes"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_189_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 23701LU)
);
}

/* MotionDeviceCategory - ns=3;i=23697 */

static UA_StatusCode function_myServer_190_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 18193LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceCategory");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The variable MotionDeviceCategory provides the kind of motion device defined by MotionDeviceCategoryEnumeration based on ISO 8373.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 23697LU),
UA_NODEID_NUMERIC(ns[3], 23662LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_190_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 23697LU)
);
}

/* SerialNumber - ns=3;i=23692 */

static UA_StatusCode function_myServer_191_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 23692LU),
UA_NODEID_NUMERIC(ns[3], 23662LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_191_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 23692LU)
);
}

/* ProductCode - ns=3;i=23689 */

static UA_StatusCode function_myServer_192_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 23689LU),
UA_NODEID_NUMERIC(ns[3], 23662LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_192_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 23689LU)
);
}

/* Model - ns=3;i=23685 */

static UA_StatusCode function_myServer_193_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 23685LU),
UA_NODEID_NUMERIC(ns[3], 23662LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_193_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 23685LU)
);
}

/* Manufacturer - ns=3;i=23683 */

static UA_StatusCode function_myServer_194_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 23683LU),
UA_NODEID_NUMERIC(ns[3], 23662LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_194_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 23683LU)
);
}

/* ParameterSet - ns=3;i=23663 */

static UA_StatusCode function_myServer_195_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 23663LU),
UA_NODEID_NUMERIC(ns[3], 23662LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_195_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 23663LU)
);
}

/* SpeedOverride - ns=3;i=23700 */

static UA_StatusCode function_myServer_196_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SpeedOverride");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SpeedOverride provides the current speed setting in percent of programmed speed (0 - 100%).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 23700LU),
UA_NODEID_NUMERIC(ns[3], 23663LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_196_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 23700LU)
);
}

/* <HC10> - ns=3;i=18595 */

static UA_StatusCode function_myServer_197_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<HC10>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 18595LU),
UA_NODEID_NUMERIC(ns[2], 1004LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "<HC10>"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_197_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 18595LU)
);
}

/* MotionDevice_R05 - ns=3;i=27761 */

static UA_StatusCode function_myServer_198_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDevice_R05");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 27761LU),
UA_NODEID_NUMERIC(ns[3], 27251LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "MotionDevice_R05"),
UA_NODEID_NUMERIC(ns[3], 18595LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_198_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27761LU)
);
}

/* PowerTrains - ns=3;i=27881 */

static UA_StatusCode function_myServer_199_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 27881LU),
UA_NODEID_NUMERIC(ns[3], 27761LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PowerTrains"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_199_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27881LU)
);
}

/* Axes - ns=3;i=27800 */

static UA_StatusCode function_myServer_200_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 27800LU),
UA_NODEID_NUMERIC(ns[3], 27761LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Axes"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_200_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27800LU)
);
}

/* MotionDeviceCategory - ns=3;i=27796 */

static UA_StatusCode function_myServer_201_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 18193LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceCategory");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The variable MotionDeviceCategory provides the kind of motion device defined by MotionDeviceCategoryEnumeration based on ISO 8373.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 27796LU),
UA_NODEID_NUMERIC(ns[3], 27761LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_201_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27796LU)
);
}

/* SerialNumber - ns=3;i=27791 */

static UA_StatusCode function_myServer_202_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 27791LU),
UA_NODEID_NUMERIC(ns[3], 27761LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_202_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27791LU)
);
}

/* ProductCode - ns=3;i=27788 */

static UA_StatusCode function_myServer_203_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 27788LU),
UA_NODEID_NUMERIC(ns[3], 27761LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_203_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27788LU)
);
}

/* Model - ns=3;i=27784 */

static UA_StatusCode function_myServer_204_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 27784LU),
UA_NODEID_NUMERIC(ns[3], 27761LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_204_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27784LU)
);
}

/* Manufacturer - ns=3;i=27782 */

static UA_StatusCode function_myServer_205_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 27782LU),
UA_NODEID_NUMERIC(ns[3], 27761LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_205_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27782LU)
);
}

/* ParameterSet - ns=3;i=27762 */

static UA_StatusCode function_myServer_206_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 27762LU),
UA_NODEID_NUMERIC(ns[3], 27761LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_206_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27762LU)
);
}

/* SpeedOverride - ns=3;i=27799 */

static UA_StatusCode function_myServer_207_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SpeedOverride");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SpeedOverride provides the current speed setting in percent of programmed speed (0 - 100%).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 27799LU),
UA_NODEID_NUMERIC(ns[3], 27762LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_207_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27799LU)
);
}

/* MotionDevice_R01 - ns=3;i=21821 */

static UA_StatusCode function_myServer_208_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDevice_R01");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 21821LU),
UA_NODEID_NUMERIC(ns[3], 20894LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "MotionDevice_R01"),
UA_NODEID_NUMERIC(ns[3], 18595LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_208_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 21821LU)
);
}

/* PowerTrains - ns=3;i=21941 */

static UA_StatusCode function_myServer_209_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 21941LU),
UA_NODEID_NUMERIC(ns[3], 21821LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "PowerTrains"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_209_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 21941LU)
);
}

/* Axes - ns=3;i=21860 */

static UA_StatusCode function_myServer_210_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 21860LU),
UA_NODEID_NUMERIC(ns[3], 21821LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "Axes"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_210_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 21860LU)
);
}

/* MotionDeviceCategory - ns=3;i=21856 */

static UA_StatusCode function_myServer_211_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[2], 18193LU);
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceCategory");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "The variable MotionDeviceCategory provides the kind of motion device defined by MotionDeviceCategoryEnumeration based on ISO 8373.");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 21856LU),
UA_NODEID_NUMERIC(ns[3], 21821LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_211_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 21856LU)
);
}

/* SerialNumber - ns=3;i=21851 */

static UA_StatusCode function_myServer_212_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 21851LU),
UA_NODEID_NUMERIC(ns[3], 21821LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_212_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 21851LU)
);
}

/* ProductCode - ns=3;i=21848 */

static UA_StatusCode function_myServer_213_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 21848LU),
UA_NODEID_NUMERIC(ns[3], 21821LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "ProductCode"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_213_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 21848LU)
);
}

/* Model - ns=3;i=21844 */

static UA_StatusCode function_myServer_214_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 21844LU),
UA_NODEID_NUMERIC(ns[3], 21821LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_214_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 21844LU)
);
}

/* Manufacturer - ns=3;i=21842 */

static UA_StatusCode function_myServer_215_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 21842LU),
UA_NODEID_NUMERIC(ns[3], 21821LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_215_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 21842LU)
);
}

/* ParameterSet - ns=3;i=21822 */

static UA_StatusCode function_myServer_216_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 21822LU),
UA_NODEID_NUMERIC(ns[3], 21821LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ParameterSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_216_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 21822LU)
);
}

/* SpeedOverride - ns=3;i=21859 */

static UA_StatusCode function_myServer_217_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SpeedOverride");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SpeedOverride provides the current speed setting in percent of programmed speed (0 - 100%).");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 21859LU),
UA_NODEID_NUMERIC(ns[3], 21822LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_217_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 21859LU)
);
}

/* SFCType - ns=3;i=15299 */

static UA_StatusCode function_myServer_218_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SFCType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 15299LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "SFCType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_218_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15299LU)
);
}

/* CtrlTaskType - ns=3;i=15295 */

static UA_StatusCode function_myServer_219_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CtrlTaskType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 15295LU),
UA_NODEID_NUMERIC(ns[0], 58LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "CtrlTaskType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_219_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15295LU)
);
}

/* Single - ns=3;i=15298 */

static UA_StatusCode function_myServer_220_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Single");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15298LU),
UA_NODEID_NUMERIC(ns[3], 15295LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[3], "Single"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15298LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_myServer_220_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15298LU)
);
}

/* Interval - ns=3;i=15297 */

static UA_StatusCode function_myServer_221_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Interval");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15297LU),
UA_NODEID_NUMERIC(ns[3], 15295LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[3], "Interval"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15297LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_myServer_221_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15297LU)
);
}

/* Priority - ns=3;i=15296 */

static UA_StatusCode function_myServer_222_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 7LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Priority");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15296LU),
UA_NODEID_NUMERIC(ns[3], 15295LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[3], "Priority"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15296LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_myServer_222_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15296LU)
);
}

/* CtrlProgramOrganizationUnitType - ns=3;i=15206 */

static UA_StatusCode function_myServer_223_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "CtrlProgramOrganizationUnitType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 15206LU),
UA_NODEID_NUMERIC(ns[1], 1003LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "CtrlProgramOrganizationUnitType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_223_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15206LU)
);
}

/* CtrlFunctionBlockType - ns=3;i=15265 */

static UA_StatusCode function_myServer_224_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "CtrlFunctionBlockType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 15265LU),
UA_NODEID_NUMERIC(ns[3], 15206LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "CtrlFunctionBlockType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_224_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15265LU)
);
}

/* FunctionBlock - ns=3;i=15294 */

static UA_StatusCode function_myServer_225_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
/* DataType inherited */
attr.dataType = UA_NODEID_NUMERIC(ns[0], 24LU);
attr.displayName = UA_LOCALIZEDTEXT("", "FunctionBlock");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15294LU),
UA_NODEID_NUMERIC(ns[3], 15265LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "FunctionBlock"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15294LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_myServer_225_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15294LU)
);
}

/* CtrlProgramType - ns=3;i=15235 */

static UA_StatusCode function_myServer_226_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.isAbstract = true;
attr.displayName = UA_LOCALIZEDTEXT("", "CtrlProgramType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 15235LU),
UA_NODEID_NUMERIC(ns[3], 15206LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "CtrlProgramType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_226_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15235LU)
);
}

/* Program - ns=3;i=15264 */

static UA_StatusCode function_myServer_227_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 22LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Program");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15264LU),
UA_NODEID_NUMERIC(ns[3], 15235LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Program"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15264LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_myServer_227_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15264LU)
);
}

/* Body - ns=3;i=15234 */

static UA_StatusCode function_myServer_228_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 16LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Body");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 15234LU),
UA_NODEID_NUMERIC(ns[3], 15206LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Body"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15234LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_myServer_228_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15234LU)
);
}

/* CtrlResourceType - ns=3;i=15124 */

static UA_StatusCode function_myServer_229_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CtrlResourceType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 15124LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "CtrlResourceType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_229_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15124LU)
);
}

/* Diagnostic - ns=3;i=15204 */

static UA_StatusCode function_myServer_230_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Diagnostic");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15204LU),
UA_NODEID_NUMERIC(ns[3], 15124LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Diagnostic"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15204LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_myServer_230_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15204LU)
);
}

/* Configuration - ns=3;i=15202 */

static UA_StatusCode function_myServer_231_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Configuration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15202LU),
UA_NODEID_NUMERIC(ns[3], 15124LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Configuration"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15202LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_myServer_231_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15202LU)
);
}

/* GlobalVars - ns=3;i=15200 */

static UA_StatusCode function_myServer_232_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "GlobalVars");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15200LU),
UA_NODEID_NUMERIC(ns[3], 15124LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "GlobalVars"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15200LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_myServer_232_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15200LU)
);
}

/* Programs - ns=3;i=15198 */

static UA_StatusCode function_myServer_233_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Programs");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15198LU),
UA_NODEID_NUMERIC(ns[3], 15124LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Programs"),
UA_NODEID_NUMERIC(ns[1], 1004LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15198LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_myServer_233_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15198LU)
);
}

/* SupportedTypes - ns=3;i=15199 */

static UA_StatusCode function_myServer_234_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SupportedTypes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Folder maintaining the set of (sub-types of) BaseObjectTypes that can be instantiated in the ConfigurableComponent");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15199LU),
UA_NODEID_NUMERIC(ns[3], 15198LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "SupportedTypes"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15199LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_myServer_234_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15199LU)
);
}

/* Tasks - ns=3;i=15196 */

static UA_StatusCode function_myServer_235_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Tasks");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15196LU),
UA_NODEID_NUMERIC(ns[3], 15124LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Tasks"),
UA_NODEID_NUMERIC(ns[1], 1004LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15196LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_myServer_235_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15196LU)
);
}

/* SupportedTypes - ns=3;i=15197 */

static UA_StatusCode function_myServer_236_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SupportedTypes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Folder maintaining the set of (sub-types of) BaseObjectTypes that can be instantiated in the ConfigurableComponent");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15197LU),
UA_NODEID_NUMERIC(ns[3], 15196LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "SupportedTypes"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15197LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_myServer_236_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15197LU)
);
}

/* MethodSet - ns=3;i=15127 */

static UA_StatusCode function_myServer_237_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MethodSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Methods");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15127LU),
UA_NODEID_NUMERIC(ns[3], 15124LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "MethodSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15127LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_myServer_237_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15127LU)
);
}

/* Stop - ns=3;i=15195 */

static UA_StatusCode function_myServer_238_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Stop");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15195LU),
UA_NODEID_NUMERIC(ns[3], 15127LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Stop"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15195LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_myServer_238_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15195LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Start - ns=3;i=15194 */

static UA_StatusCode function_myServer_239_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Start");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15194LU),
UA_NODEID_NUMERIC(ns[3], 15127LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Start"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15194LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_myServer_239_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15194LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* CtrlConfigurationType - ns=3;i=15013 */

static UA_StatusCode function_myServer_240_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CtrlConfigurationType");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,
UA_NODEID_NUMERIC(ns[3], 15013LU),
UA_NODEID_NUMERIC(ns[1], 1002LU),
UA_NODEID_NUMERIC(ns[0], 45LU),
UA_QUALIFIEDNAME(ns[3], "CtrlConfigurationType"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_240_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15013LU)
);
}

/* <USC_PLC> - ns=3;i=27106 */

static UA_StatusCode function_myServer_241_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<USC_PLC>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 27106LU),
UA_NODEID_NUMERIC(ns[1], 5001LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[3], "<USC_PLC>"),
UA_NODEID_NUMERIC(ns[3], 15013LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_241_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27106LU)
);
}

/* RevisionCounter - ns=3;i=27139 */

static UA_StatusCode function_myServer_242_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RevisionCounter");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "An incremental counter indicating the number of times the static data within the Device has been modified");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 27139LU),
UA_NODEID_NUMERIC(ns[3], 27106LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "RevisionCounter"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_242_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27139LU)
);
}

/* SerialNumber - ns=3;i=27137 */

static UA_StatusCode function_myServer_243_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Identifier that uniquely identifies, within a manufacturer, a device instance");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 27137LU),
UA_NODEID_NUMERIC(ns[3], 27106LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SerialNumber"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_243_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27137LU)
);
}

/* DeviceManual - ns=3;i=27135 */

static UA_StatusCode function_myServer_244_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceManual");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Address (pathname in the file system or a URL | Web address) of user manual for the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 27135LU),
UA_NODEID_NUMERIC(ns[3], 27106LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "DeviceManual"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_244_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27135LU)
);
}

/* DeviceRevision - ns=3;i=27133 */

static UA_StatusCode function_myServer_245_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Overall revision level of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 27133LU),
UA_NODEID_NUMERIC(ns[3], 27106LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "DeviceRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_245_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27133LU)
);
}

/* SoftwareRevision - ns=3;i=27132 */

static UA_StatusCode function_myServer_246_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision level of the software/firmware of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 27132LU),
UA_NODEID_NUMERIC(ns[3], 27106LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "SoftwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_246_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27132LU)
);
}

/* HardwareRevision - ns=3;i=27131 */

static UA_StatusCode function_myServer_247_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "HardwareRevision");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Revision level of the hardware of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 27131LU),
UA_NODEID_NUMERIC(ns[3], 27106LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "HardwareRevision"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_247_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27131LU)
);
}

/* Model - ns=3;i=27130 */

static UA_StatusCode function_myServer_248_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Model name of the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 27130LU),
UA_NODEID_NUMERIC(ns[3], 27106LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Model"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_248_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27130LU)
);
}

/* Manufacturer - ns=3;i=27128 */

static UA_StatusCode function_myServer_249_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Name of the company that manufactured the device");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 27128LU),
UA_NODEID_NUMERIC(ns[3], 27106LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[1], "Manufacturer"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_249_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 27128LU)
);
}

/* Diagnostic - ns=3;i=15312 */

static UA_StatusCode function_myServer_250_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Diagnostic");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15312LU),
UA_NODEID_NUMERIC(ns[3], 27106LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Diagnostic"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_250_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15312LU)
);
}

/* Configuration - ns=3;i=15310 */

static UA_StatusCode function_myServer_251_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Configuration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15310LU),
UA_NODEID_NUMERIC(ns[3], 27106LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Configuration"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_251_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15310LU)
);
}

/* ConfigVars - ns=3;i=15308 */

static UA_StatusCode function_myServer_252_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ConfigVars");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15308LU),
UA_NODEID_NUMERIC(ns[3], 27106LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "ConfigVars"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_252_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15308LU)
);
}

/* AccessVars - ns=3;i=15306 */

static UA_StatusCode function_myServer_253_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AccessVars");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15306LU),
UA_NODEID_NUMERIC(ns[3], 27106LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "AccessVars"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_253_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15306LU)
);
}

/* GlobalVars - ns=3;i=15304 */

static UA_StatusCode function_myServer_254_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "GlobalVars");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15304LU),
UA_NODEID_NUMERIC(ns[3], 27106LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "GlobalVars"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_254_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15304LU)
);
}

/* Resources - ns=3;i=15302 */

static UA_StatusCode function_myServer_255_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Resources");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15302LU),
UA_NODEID_NUMERIC(ns[3], 27106LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Resources"),
UA_NODEID_NUMERIC(ns[1], 1004LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_255_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15302LU)
);
}

/* SupportedTypes - ns=3;i=15303 */

static UA_StatusCode function_myServer_256_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SupportedTypes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Folder maintaining the set of (sub-types of) BaseObjectTypes that can be instantiated in the ConfigurableComponent");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15303LU),
UA_NODEID_NUMERIC(ns[3], 15302LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "SupportedTypes"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_256_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15303LU)
);
}

/* Diagnostic - ns=3;i=15122 */

static UA_StatusCode function_myServer_257_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Diagnostic");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15122LU),
UA_NODEID_NUMERIC(ns[3], 15013LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Diagnostic"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15122LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_myServer_257_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15122LU)
);
}

/* Configuration - ns=3;i=15120 */

static UA_StatusCode function_myServer_258_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Configuration");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15120LU),
UA_NODEID_NUMERIC(ns[3], 15013LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Configuration"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15120LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_myServer_258_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15120LU)
);
}

/* ConfigVars - ns=3;i=15118 */

static UA_StatusCode function_myServer_259_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ConfigVars");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15118LU),
UA_NODEID_NUMERIC(ns[3], 15013LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "ConfigVars"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15118LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_myServer_259_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15118LU)
);
}

/* AccessVars - ns=3;i=15116 */

static UA_StatusCode function_myServer_260_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "AccessVars");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15116LU),
UA_NODEID_NUMERIC(ns[3], 15013LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "AccessVars"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15116LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_myServer_260_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15116LU)
);
}

/* GlobalVars - ns=3;i=15114 */

static UA_StatusCode function_myServer_261_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "GlobalVars");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15114LU),
UA_NODEID_NUMERIC(ns[3], 15013LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "GlobalVars"),
UA_NODEID_NUMERIC(ns[1], 1005LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15114LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_myServer_261_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15114LU)
);
}

/* Resources - ns=3;i=15112 */

static UA_StatusCode function_myServer_262_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Resources");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15112LU),
UA_NODEID_NUMERIC(ns[3], 15013LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Resources"),
UA_NODEID_NUMERIC(ns[1], 1004LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15112LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_myServer_262_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15112LU)
);
}

/* SupportedTypes - ns=3;i=15113 */

static UA_StatusCode function_myServer_263_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SupportedTypes");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Folder maintaining the set of (sub-types of) BaseObjectTypes that can be instantiated in the ConfigurableComponent");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15113LU),
UA_NODEID_NUMERIC(ns[3], 15112LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "SupportedTypes"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15113LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_myServer_263_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15113LU)
);
}

/* MethodSet - ns=3;i=15016 */

static UA_StatusCode function_myServer_264_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MethodSet");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Flat list of Methods");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 15016LU),
UA_NODEID_NUMERIC(ns[3], 15013LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "MethodSet"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15016LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
}

static UA_StatusCode function_myServer_264_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15016LU)
);
}

/* Stop - ns=3;i=15111 */

static UA_StatusCode function_myServer_265_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Stop");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15111LU),
UA_NODEID_NUMERIC(ns[3], 15016LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Stop"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15111LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_myServer_265_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15111LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* Start - ns=3;i=15110 */

static UA_StatusCode function_myServer_266_begin(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_MethodAttributes attr = UA_MethodAttributes_default;
attr.executable = true;
attr.userExecutable = true;
attr.displayName = UA_LOCALIZEDTEXT("", "Start");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_METHOD,
UA_NODEID_NUMERIC(ns[3], 15110LU),
UA_NODEID_NUMERIC(ns[3], 15016LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "Start"),
 UA_NODEID_NULL,
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_METHODATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15110LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 80LU), true);
return retVal;
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

static UA_StatusCode function_myServer_266_finish(UA_Server *server, UA_UInt16* ns) {
#ifdef UA_ENABLE_METHODCALLS
return UA_Server_addMethodNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 15110LU)
, NULL, 0, NULL, 0, NULL);
#else
return UA_STATUSCODE_GOOD;
#endif /* UA_ENABLE_METHODCALLS */
}

/* https://nextusc.com/UA/FF/ - ns=3;i=18562 */

static UA_StatusCode function_myServer_267_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "https://nextusc.com/UA/FF/");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_NUMERIC(ns[3], 18562LU),
UA_NODEID_NUMERIC(ns[0], 11715LU),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[3], "https://nextusc.com/UA/FF/"),
UA_NODEID_NUMERIC(ns[0], 11616LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_267_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 18562LU)
);
}

/* DefaultAccessRestrictions - ns=3;i=18594 */

static UA_StatusCode function_myServer_268_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 95LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultAccessRestrictions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 18594LU),
UA_NODEID_NUMERIC(ns[3], 18562LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DefaultAccessRestrictions"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_268_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 18594LU)
);
}

/* DefaultUserRolePermissions - ns=3;i=18593 */

static UA_StatusCode function_myServer_269_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 96LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultUserRolePermissions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 18593LU),
UA_NODEID_NUMERIC(ns[3], 18562LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DefaultUserRolePermissions"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_269_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 18593LU)
);
}

/* DefaultRolePermissions - ns=3;i=18592 */

static UA_StatusCode function_myServer_270_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 96LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultRolePermissions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 18592LU),
UA_NODEID_NUMERIC(ns[3], 18562LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "DefaultRolePermissions"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_270_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 18592LU)
);
}

/* StaticStringNodeIdPattern - ns=3;i=18569 */

static UA_StatusCode function_myServer_271_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_3_i_18569_variant_DataContents =  UA_String_new();
if (!variablenode_ns_3_i_18569_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_3_i_18569_variant_DataContents);
*variablenode_ns_3_i_18569_variant_DataContents = UA_STRING_ALLOC("");
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_18569_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticStringNodeIdPattern");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 18569LU),
UA_NODEID_NUMERIC(ns[3], 18562LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticStringNodeIdPattern"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_3_i_18569_variant_DataContents);
return retVal;
}

static UA_StatusCode function_myServer_271_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 18569LU)
);
}

/* StaticNumericNodeIdRange - ns=3;i=18568 */

static UA_StatusCode function_myServer_272_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 291LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNumericNodeIdRange");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 18568LU),
UA_NODEID_NUMERIC(ns[3], 18562LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticNumericNodeIdRange"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_272_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 18568LU)
);
}

/* StaticNodeIdTypes - ns=3;i=18567 */

static UA_StatusCode function_myServer_273_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
attr.valueRank = 1;
attr.arrayDimensionsSize = 1;
UA_UInt32 arrayDimensions[1];
arrayDimensions[0] = 0;
attr.arrayDimensions = &arrayDimensions[0];
attr.dataType = UA_NODEID_NUMERIC(ns[0], 256LU);
UA_Int32 variablenode_ns_3_i_18567_variant_DataContents[1];
variablenode_ns_3_i_18567_variant_DataContents[0] = (UA_Int32) 0;
UA_Variant_setArray(&attr.value, &variablenode_ns_3_i_18567_variant_DataContents, (UA_Int32) 1, &UA_TYPES[UA_TYPES_IDTYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNodeIdTypes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 18567LU),
UA_NODEID_NUMERIC(ns[3], 18562LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "StaticNodeIdTypes"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_myServer_273_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 18567LU)
);
}

/* IsNamespaceSubset - ns=3;i=18566 */

static UA_StatusCode function_myServer_274_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_3_i_18566_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_3_i_18566_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_3_i_18566_variant_DataContents);
*variablenode_ns_3_i_18566_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_18566_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsNamespaceSubset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 18566LU),
UA_NODEID_NUMERIC(ns[3], 18562LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "IsNamespaceSubset"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_3_i_18566_variant_DataContents);
return retVal;
}

static UA_StatusCode function_myServer_274_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 18566LU)
);
}

/* NamespacePublicationDate - ns=3;i=18565 */

static UA_StatusCode function_myServer_275_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13LU);
UA_DateTime *variablenode_ns_3_i_18565_variant_DataContents =  UA_DateTime_new();
if (!variablenode_ns_3_i_18565_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_DateTime_init(variablenode_ns_3_i_18565_variant_DataContents);
*variablenode_ns_3_i_18565_variant_DataContents = ( (UA_DateTime)(1615248000000 * UA_DATETIME_MSEC) + UA_DATETIME_UNIX_EPOCH);
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_18565_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespacePublicationDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 18565LU),
UA_NODEID_NUMERIC(ns[3], 18562LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespacePublicationDate"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_DateTime_delete(variablenode_ns_3_i_18565_variant_DataContents);
return retVal;
}

static UA_StatusCode function_myServer_275_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 18565LU)
);
}

/* NamespaceVersion - ns=3;i=18564 */

static UA_StatusCode function_myServer_276_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_3_i_18564_variant_DataContents =  UA_String_new();
if (!variablenode_ns_3_i_18564_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_3_i_18564_variant_DataContents);
*variablenode_ns_3_i_18564_variant_DataContents = UA_STRING_ALLOC("1.03.0");
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_18564_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 18564LU),
UA_NODEID_NUMERIC(ns[3], 18562LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceVersion"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_3_i_18564_variant_DataContents);
return retVal;
}

static UA_StatusCode function_myServer_276_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 18564LU)
);
}

/* NamespaceUri - ns=3;i=18563 */

static UA_StatusCode function_myServer_277_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_3_i_18563_variant_DataContents =  UA_String_new();
if (!variablenode_ns_3_i_18563_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_3_i_18563_variant_DataContents);
*variablenode_ns_3_i_18563_variant_DataContents = UA_STRING_ALLOC("https://nextusc.com/UA/FF/");
UA_Variant_setScalar(&attr.value, variablenode_ns_3_i_18563_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[3], 18563LU),
UA_NODEID_NUMERIC(ns[3], 18562LU),
UA_NODEID_NUMERIC(ns[0], 46LU),
UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),
UA_NODEID_NUMERIC(ns[0], 68LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_3_i_18563_variant_DataContents);
return retVal;
}

static UA_StatusCode function_myServer_277_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[3], 18563LU)
);
}

UA_StatusCode myServer(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[4];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/DI/");
ns[2] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/Robotics/");
ns[3] = UA_Server_addNamespace(server, "https://nextusc.com/UA/FF/");

/* Load custom datatype definitions into the server */
if((retVal = function_myServer_0_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_0_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_1_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_1_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_2_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_2_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_3_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_3_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_4_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_4_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_5_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_5_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_6_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_7_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_8_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_9_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_10_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_11_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_12_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_13_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_14_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_15_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_16_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_17_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_18_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_19_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_20_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_21_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_22_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_23_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_24_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_25_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_26_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_27_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_28_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_29_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_30_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_31_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_32_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_33_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_34_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_35_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_36_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_37_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_38_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_39_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_40_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_41_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_42_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_43_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_44_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_45_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_46_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_47_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_48_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_49_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_50_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_51_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_52_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_53_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_54_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_55_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_56_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_57_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_58_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_59_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_60_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_61_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_62_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_63_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_64_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_65_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_66_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_67_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_68_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_69_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_70_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_71_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_72_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_73_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_74_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_75_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_76_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_77_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_78_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_79_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_80_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_81_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_82_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_83_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_84_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_85_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_86_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_87_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_88_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_89_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_90_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_91_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_92_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_93_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_94_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_95_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_96_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_97_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_98_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_99_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_100_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_101_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_102_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_103_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_104_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_105_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_106_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_107_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_108_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_109_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_110_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_111_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_112_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_113_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_114_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_115_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_116_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_117_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_118_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_119_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_120_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_121_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_122_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_123_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_124_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_125_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_126_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_127_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_128_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_129_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_130_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_131_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_132_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_133_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_134_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_135_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_136_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_137_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_138_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_139_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_140_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_141_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_142_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_143_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_144_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_145_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_146_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_147_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_148_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_149_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_150_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_151_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_152_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_153_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_154_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_155_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_156_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_157_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_158_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_159_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_160_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_161_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_162_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_163_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_164_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_165_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_166_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_167_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_168_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_169_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_170_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_171_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_172_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_173_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_174_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_175_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_176_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_177_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_178_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_179_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_180_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_181_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_182_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_183_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_184_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_185_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_186_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_187_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_188_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_189_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_190_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_191_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_192_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_193_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_194_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_195_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_196_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_197_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_198_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_199_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_200_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_201_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_202_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_203_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_204_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_205_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_206_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_207_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_208_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_209_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_210_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_211_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_212_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_213_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_214_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_215_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_216_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_217_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_218_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_219_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_220_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_221_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_222_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_223_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_224_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_225_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_226_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_227_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_228_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_229_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_230_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_231_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_232_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_233_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_234_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_235_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_236_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_237_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_238_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_239_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_240_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_241_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_242_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_243_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_244_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_245_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_246_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_247_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_248_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_249_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_250_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_251_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_252_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_253_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_254_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_255_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_256_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_257_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_258_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_259_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_260_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_261_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_262_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_263_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_264_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_265_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_266_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_267_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_268_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_269_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_270_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_271_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_272_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_273_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_274_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_275_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_276_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_277_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_277_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_276_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_275_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_274_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_273_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_272_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_271_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_270_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_269_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_268_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_267_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_266_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_265_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_264_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_263_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_262_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_261_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_260_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_259_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_258_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_257_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_256_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_255_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_254_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_253_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_252_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_251_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_250_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_249_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_248_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_247_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_246_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_245_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_244_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_243_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_242_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_241_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_240_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_239_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_238_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_237_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_236_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_235_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_234_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_233_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_232_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_231_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_230_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_229_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_228_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_227_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_226_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_225_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_224_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_223_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_222_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_221_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_220_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_219_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_218_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_217_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_216_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_215_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_214_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_213_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_212_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_211_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_210_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_209_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_208_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_207_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_206_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_205_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_204_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_203_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_202_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_201_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_200_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_199_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_198_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_197_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_196_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_195_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_194_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_193_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_192_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_191_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_190_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_189_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_188_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_187_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_186_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_185_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_184_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_183_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_182_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_181_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_180_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_179_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_178_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_177_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_176_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_175_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_174_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_173_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_172_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_171_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_170_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_169_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_168_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_167_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_166_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_165_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_164_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_163_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_162_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_161_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_160_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_159_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_158_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_157_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_156_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_155_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_154_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_153_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_152_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_151_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_150_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_149_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_148_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_147_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_146_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_145_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_144_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_143_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_142_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_141_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_140_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_139_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_138_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_137_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_136_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_135_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_134_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_133_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_132_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_131_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_130_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_129_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_128_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_127_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_126_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_125_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_124_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_123_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_122_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_121_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_120_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_119_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_118_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_117_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_116_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_115_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_114_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_113_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_112_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_111_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_110_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_109_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_108_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_107_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_106_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_105_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_104_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_103_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_102_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_101_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_100_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_99_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_98_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_97_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_96_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_95_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_94_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_93_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_92_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_91_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_90_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_89_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_88_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_87_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_86_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_85_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_84_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_83_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_82_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_81_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_80_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_79_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_78_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_77_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_76_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_75_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_74_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_73_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_72_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_71_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_70_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_69_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_68_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_67_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_66_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_65_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_64_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_63_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_62_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_61_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_60_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_59_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_58_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_57_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_56_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_55_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_54_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_53_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_52_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_51_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_50_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_49_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_48_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_47_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_46_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_45_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_44_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_43_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_42_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_41_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_40_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_39_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_38_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_37_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_36_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_35_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_34_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_33_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_32_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_31_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_30_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_29_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_28_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_27_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_26_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_25_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_24_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_23_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_22_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_21_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_20_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_19_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_18_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_17_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_16_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_15_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_14_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_13_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_12_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_11_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_10_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_9_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_8_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_7_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_myServer_6_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}
