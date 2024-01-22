/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "namespace_ff_generated.h"


/* With - ns=3;i=15012 */

static UA_StatusCode function_namespace_ff_generated_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "Executes");
attr.displayName = UA_LOCALIZEDTEXT("", "With");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,UA_NODEID_NUMERIC(ns[3], 15012LU),UA_NODEID_NUMERIC(ns[0], 32LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[3], "With"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15012LU));
}

/* HasExternalVars - ns=3;i=15011 */

static UA_StatusCode function_namespace_ff_generated_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "ExternalVarsOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasExternalVars");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,UA_NODEID_NUMERIC(ns[3], 15011LU),UA_NODEID_NUMERIC(ns[0], 35LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[3], "HasExternalVars"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15011LU));
}

/* HasLocalVars - ns=3;i=15010 */

static UA_StatusCode function_namespace_ff_generated_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "LocalVarsOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasLocalVars");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,UA_NODEID_NUMERIC(ns[3], 15010LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[3], "HasLocalVars"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15010LU));
}

/* HasInOutVars - ns=3;i=15009 */

static UA_StatusCode function_namespace_ff_generated_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "InOutVarsOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasInOutVars");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,UA_NODEID_NUMERIC(ns[3], 15009LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[3], "HasInOutVars"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15009LU));
}

/* HasOutputVars - ns=3;i=15008 */

static UA_StatusCode function_namespace_ff_generated_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "OutputVarsOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasOutputVars");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,UA_NODEID_NUMERIC(ns[3], 15008LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[3], "HasOutputVars"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15008LU));
}

/* HasInputVars - ns=3;i=15007 */

static UA_StatusCode function_namespace_ff_generated_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ReferenceTypeAttributes attr = UA_ReferenceTypeAttributes_default;
attr.inverseName  = UA_LOCALIZEDTEXT("", "InputVarsOf");
attr.displayName = UA_LOCALIZEDTEXT("", "HasInputVars");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_REFERENCETYPE,UA_NODEID_NUMERIC(ns[3], 15007LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[3], "HasInputVars"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_REFERENCETYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15007LU));
}

/* ConveyorBelt - ns=3;i=15002 */

static UA_StatusCode function_namespace_ff_generated_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.eventNotifier = UA_EVENTNOTIFIER_SUBSCRIBE_TO_EVENT;
attr.displayName = UA_LOCALIZEDTEXT("", "ConveyorBelt");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 15002LU),UA_NODEID_NUMERIC(ns[1], 5001LU),UA_NODEID_NUMERIC(ns[0], 35LU),UA_QUALIFIEDNAME(ns[3], "ConveyorBelt"),UA_NODEID_NUMERIC(ns[2], 1002LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15002LU));
}

/* SafetyStates - ns=3;i=20289 */

static UA_StatusCode function_namespace_ff_generated_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SafetyStates");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Contains safety-related data from motion device system.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 20289LU),UA_NODEID_NUMERIC(ns[3], 15002LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "SafetyStates"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20289LU));
}

/* Controllers - ns=3;i=20106 */

static UA_StatusCode function_namespace_ff_generated_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Controllers");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Contains the set of controllers in the motion device system.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 20106LU),UA_NODEID_NUMERIC(ns[3], 15002LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Controllers"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20106LU));
}

/* Drives - ns=3;i=17506 */

static UA_StatusCode function_namespace_ff_generated_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Drives");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Contains the set of controllers in the motion device system.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 17506LU),UA_NODEID_NUMERIC(ns[3], 15002LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Drives"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17506LU));
}

/* MotionDevices - ns=3;i=15305 */

static UA_StatusCode function_namespace_ff_generated_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDevices");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Contains any kinematic or motion device which is part of the motion device system.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 15305LU),UA_NODEID_NUMERIC(ns[3], 15002LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "MotionDevices"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15305LU));
}

/* Conveyor4 - ns=3;i=21350 */

static UA_StatusCode function_namespace_ff_generated_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Conveyor4");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 21350LU),UA_NODEID_NUMERIC(ns[3], 15305LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "Conveyor4"),UA_NODEID_NUMERIC(ns[2], 1004LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 21350LU));
}

/* PowerTrains - ns=3;i=21470 */

static UA_StatusCode function_namespace_ff_generated_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 21470LU),UA_NODEID_NUMERIC(ns[3], 21350LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "PowerTrains"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 21470LU));
}

/* Axes - ns=3;i=21389 */

static UA_StatusCode function_namespace_ff_generated_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 21389LU),UA_NODEID_NUMERIC(ns[3], 21350LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Axes"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 21389LU));
}

/* MotionDeviceCategory - ns=3;i=21385 */

static UA_StatusCode function_namespace_ff_generated_14_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 21385LU),UA_NODEID_NUMERIC(ns[3], 21350LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 21385LU));
}

/* SerialNumber - ns=3;i=21380 */

static UA_StatusCode function_namespace_ff_generated_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 21380LU),UA_NODEID_NUMERIC(ns[3], 21350LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SerialNumber"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 21380LU));
}

/* ProductCode - ns=3;i=21377 */

static UA_StatusCode function_namespace_ff_generated_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 21377LU),UA_NODEID_NUMERIC(ns[3], 21350LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ProductCode"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 21377LU));
}

/* Model - ns=3;i=21373 */

static UA_StatusCode function_namespace_ff_generated_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 21373LU),UA_NODEID_NUMERIC(ns[3], 21350LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Model"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 21373LU));
}

/* Manufacturer - ns=3;i=21371 */

static UA_StatusCode function_namespace_ff_generated_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 21371LU),UA_NODEID_NUMERIC(ns[3], 21350LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Manufacturer"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 21371LU));
}

/* ParameterSet - ns=3;i=21351 */

static UA_StatusCode function_namespace_ff_generated_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 21351LU),UA_NODEID_NUMERIC(ns[3], 21350LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "ParameterSet"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 21351LU));
}

/* SpeedOverride - ns=3;i=21388 */

static UA_StatusCode function_namespace_ff_generated_20_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 21388LU),UA_NODEID_NUMERIC(ns[3], 21351LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 21388LU));
}

/* Conveyor3 - ns=3;i=20773 */

static UA_StatusCode function_namespace_ff_generated_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Conveyor3");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 20773LU),UA_NODEID_NUMERIC(ns[3], 15305LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "Conveyor3"),UA_NODEID_NUMERIC(ns[2], 1004LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20773LU));
}

/* PowerTrains - ns=3;i=21252 */

static UA_StatusCode function_namespace_ff_generated_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 21252LU),UA_NODEID_NUMERIC(ns[3], 20773LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "PowerTrains"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 21252LU));
}

/* Axes - ns=3;i=20812 */

static UA_StatusCode function_namespace_ff_generated_23_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 20812LU),UA_NODEID_NUMERIC(ns[3], 20773LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Axes"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20812LU));
}

/* MotionDeviceCategory - ns=3;i=20808 */

static UA_StatusCode function_namespace_ff_generated_24_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 20808LU),UA_NODEID_NUMERIC(ns[3], 20773LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20808LU));
}

/* SerialNumber - ns=3;i=20803 */

static UA_StatusCode function_namespace_ff_generated_25_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 20803LU),UA_NODEID_NUMERIC(ns[3], 20773LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SerialNumber"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20803LU));
}

/* ProductCode - ns=3;i=20800 */

static UA_StatusCode function_namespace_ff_generated_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 20800LU),UA_NODEID_NUMERIC(ns[3], 20773LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ProductCode"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20800LU));
}

/* Model - ns=3;i=20796 */

static UA_StatusCode function_namespace_ff_generated_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 20796LU),UA_NODEID_NUMERIC(ns[3], 20773LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Model"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20796LU));
}

/* Manufacturer - ns=3;i=20794 */

static UA_StatusCode function_namespace_ff_generated_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 20794LU),UA_NODEID_NUMERIC(ns[3], 20773LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Manufacturer"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20794LU));
}

/* ParameterSet - ns=3;i=20774 */

static UA_StatusCode function_namespace_ff_generated_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 20774LU),UA_NODEID_NUMERIC(ns[3], 20773LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "ParameterSet"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20774LU));
}

/* SpeedOverride - ns=3;i=20811 */

static UA_StatusCode function_namespace_ff_generated_30_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 20811LU),UA_NODEID_NUMERIC(ns[3], 20774LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20811LU));
}

/* Conveyor2 - ns=3;i=20555 */

static UA_StatusCode function_namespace_ff_generated_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Conveyor2");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 20555LU),UA_NODEID_NUMERIC(ns[3], 15305LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "Conveyor2"),UA_NODEID_NUMERIC(ns[2], 1004LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20555LU));
}

/* PowerTrains - ns=3;i=20675 */

static UA_StatusCode function_namespace_ff_generated_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 20675LU),UA_NODEID_NUMERIC(ns[3], 20555LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "PowerTrains"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20675LU));
}

/* Axes - ns=3;i=20594 */

static UA_StatusCode function_namespace_ff_generated_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 20594LU),UA_NODEID_NUMERIC(ns[3], 20555LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Axes"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20594LU));
}

/* MotionDeviceCategory - ns=3;i=20590 */

static UA_StatusCode function_namespace_ff_generated_34_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 20590LU),UA_NODEID_NUMERIC(ns[3], 20555LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20590LU));
}

/* SerialNumber - ns=3;i=20585 */

static UA_StatusCode function_namespace_ff_generated_35_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 20585LU),UA_NODEID_NUMERIC(ns[3], 20555LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SerialNumber"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_35_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20585LU));
}

/* ProductCode - ns=3;i=20582 */

static UA_StatusCode function_namespace_ff_generated_36_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 20582LU),UA_NODEID_NUMERIC(ns[3], 20555LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ProductCode"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20582LU));
}

/* Model - ns=3;i=20578 */

static UA_StatusCode function_namespace_ff_generated_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 20578LU),UA_NODEID_NUMERIC(ns[3], 20555LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Model"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20578LU));
}

/* Manufacturer - ns=3;i=20576 */

static UA_StatusCode function_namespace_ff_generated_38_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 20576LU),UA_NODEID_NUMERIC(ns[3], 20555LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Manufacturer"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20576LU));
}

/* ParameterSet - ns=3;i=20556 */

static UA_StatusCode function_namespace_ff_generated_39_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 20556LU),UA_NODEID_NUMERIC(ns[3], 20555LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "ParameterSet"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20556LU));
}

/* SpeedOverride - ns=3;i=20593 */

static UA_StatusCode function_namespace_ff_generated_40_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 20593LU),UA_NODEID_NUMERIC(ns[3], 20556LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20593LU));
}

/* Conveyor1 - ns=3;i=20337 */

static UA_StatusCode function_namespace_ff_generated_41_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Conveyor1");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 20337LU),UA_NODEID_NUMERIC(ns[3], 15305LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "Conveyor1"),UA_NODEID_NUMERIC(ns[2], 1004LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20337LU));
}

/* PowerTrains - ns=3;i=20457 */

static UA_StatusCode function_namespace_ff_generated_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 20457LU),UA_NODEID_NUMERIC(ns[3], 20337LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "PowerTrains"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20457LU));
}

/* Axes - ns=3;i=20376 */

static UA_StatusCode function_namespace_ff_generated_43_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 20376LU),UA_NODEID_NUMERIC(ns[3], 20337LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Axes"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20376LU));
}

/* MotionDeviceCategory - ns=3;i=20372 */

static UA_StatusCode function_namespace_ff_generated_44_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 20372LU),UA_NODEID_NUMERIC(ns[3], 20337LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20372LU));
}

/* SerialNumber - ns=3;i=20367 */

static UA_StatusCode function_namespace_ff_generated_45_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 20367LU),UA_NODEID_NUMERIC(ns[3], 20337LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SerialNumber"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20367LU));
}

/* ProductCode - ns=3;i=20364 */

static UA_StatusCode function_namespace_ff_generated_46_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 20364LU),UA_NODEID_NUMERIC(ns[3], 20337LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ProductCode"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20364LU));
}

/* Model - ns=3;i=20360 */

static UA_StatusCode function_namespace_ff_generated_47_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 20360LU),UA_NODEID_NUMERIC(ns[3], 20337LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Model"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20360LU));
}

/* Manufacturer - ns=3;i=20358 */

static UA_StatusCode function_namespace_ff_generated_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 20358LU),UA_NODEID_NUMERIC(ns[3], 20337LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Manufacturer"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20358LU));
}

/* ParameterSet - ns=3;i=20338 */

static UA_StatusCode function_namespace_ff_generated_49_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 20338LU),UA_NODEID_NUMERIC(ns[3], 20337LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "ParameterSet"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_49_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20338LU));
}

/* SpeedOverride - ns=3;i=20375 */

static UA_StatusCode function_namespace_ff_generated_50_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 20375LU),UA_NODEID_NUMERIC(ns[3], 20338LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20375LU));
}

/* R05 - ns=3;i=27214 */

static UA_StatusCode function_namespace_ff_generated_51_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.eventNotifier = UA_EVENTNOTIFIER_SUBSCRIBE_TO_EVENT;
attr.displayName = UA_LOCALIZEDTEXT("", "R05");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 27214LU),UA_NODEID_NUMERIC(ns[1], 5001LU),UA_NODEID_NUMERIC(ns[0], 35LU),UA_QUALIFIEDNAME(ns[3], "R05"),UA_NODEID_NUMERIC(ns[2], 1002LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_51_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 27214LU));
}

/* SafetyStates - ns=3;i=27713 */

static UA_StatusCode function_namespace_ff_generated_52_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SafetyStates");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Contains safety-related data from motion device system.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 27713LU),UA_NODEID_NUMERIC(ns[3], 27214LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "SafetyStates"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_52_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 27713LU));
}

/* Controllers - ns=3;i=27470 */

static UA_StatusCode function_namespace_ff_generated_53_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Controllers");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Contains the set of controllers in the motion device system.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 27470LU),UA_NODEID_NUMERIC(ns[3], 27214LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Controllers"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 27470LU));
}

/* MotionDevices - ns=3;i=27251 */

static UA_StatusCode function_namespace_ff_generated_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDevices");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Contains any kinematic or motion device which is part of the motion device system.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 27251LU),UA_NODEID_NUMERIC(ns[3], 27214LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "MotionDevices"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 27251LU));
}

/* R04 - ns=3;i=25903 */

static UA_StatusCode function_namespace_ff_generated_55_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.eventNotifier = UA_EVENTNOTIFIER_SUBSCRIBE_TO_EVENT;
attr.displayName = UA_LOCALIZEDTEXT("", "R04");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 25903LU),UA_NODEID_NUMERIC(ns[1], 5001LU),UA_NODEID_NUMERIC(ns[0], 35LU),UA_QUALIFIEDNAME(ns[3], "R04"),UA_NODEID_NUMERIC(ns[2], 1002LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 25903LU));
}

/* SafetyStates - ns=3;i=26342 */

static UA_StatusCode function_namespace_ff_generated_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SafetyStates");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Contains safety-related data from motion device system.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 26342LU),UA_NODEID_NUMERIC(ns[3], 25903LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "SafetyStates"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 26342LU));
}

/* Controllers - ns=3;i=26159 */

static UA_StatusCode function_namespace_ff_generated_57_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Controllers");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Contains the set of controllers in the motion device system.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 26159LU),UA_NODEID_NUMERIC(ns[3], 25903LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Controllers"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 26159LU));
}

/* MotionDevices - ns=3;i=25940 */

static UA_StatusCode function_namespace_ff_generated_58_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDevices");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Contains any kinematic or motion device which is part of the motion device system.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 25940LU),UA_NODEID_NUMERIC(ns[3], 25903LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "MotionDevices"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 25940LU));
}

/* R03 - ns=3;i=24539 */

static UA_StatusCode function_namespace_ff_generated_59_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.eventNotifier = UA_EVENTNOTIFIER_SUBSCRIBE_TO_EVENT;
attr.displayName = UA_LOCALIZEDTEXT("", "R03");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 24539LU),UA_NODEID_NUMERIC(ns[1], 5001LU),UA_NODEID_NUMERIC(ns[0], 35LU),UA_QUALIFIEDNAME(ns[3], "R03"),UA_NODEID_NUMERIC(ns[2], 1002LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 24539LU));
}

/* SafetyStates - ns=3;i=25455 */

static UA_StatusCode function_namespace_ff_generated_60_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SafetyStates");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Contains safety-related data from motion device system.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 25455LU),UA_NODEID_NUMERIC(ns[3], 24539LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "SafetyStates"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 25455LU));
}

/* Controllers - ns=3;i=25272 */

static UA_StatusCode function_namespace_ff_generated_61_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Controllers");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Contains the set of controllers in the motion device system.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 25272LU),UA_NODEID_NUMERIC(ns[3], 24539LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Controllers"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 25272LU));
}

/* MotionDevices - ns=3;i=24576 */

static UA_StatusCode function_namespace_ff_generated_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDevices");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Contains any kinematic or motion device which is part of the motion device system.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 24576LU),UA_NODEID_NUMERIC(ns[3], 24539LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "MotionDevices"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 24576LU));
}

/* R02 - ns=3;i=22698 */

static UA_StatusCode function_namespace_ff_generated_63_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.eventNotifier = UA_EVENTNOTIFIER_SUBSCRIBE_TO_EVENT;
attr.displayName = UA_LOCALIZEDTEXT("", "R02");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 22698LU),UA_NODEID_NUMERIC(ns[1], 5001LU),UA_NODEID_NUMERIC(ns[0], 35LU),UA_QUALIFIEDNAME(ns[3], "R02"),UA_NODEID_NUMERIC(ns[2], 1002LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_63_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 22698LU));
}

/* SafetyStates - ns=3;i=23614 */

static UA_StatusCode function_namespace_ff_generated_64_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SafetyStates");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Contains safety-related data from motion device system.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 23614LU),UA_NODEID_NUMERIC(ns[3], 22698LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "SafetyStates"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_64_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 23614LU));
}

/* Controllers - ns=3;i=23431 */

static UA_StatusCode function_namespace_ff_generated_65_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Controllers");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Contains the set of controllers in the motion device system.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 23431LU),UA_NODEID_NUMERIC(ns[3], 22698LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Controllers"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_65_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 23431LU));
}

/* MotionDevices - ns=3;i=22735 */

static UA_StatusCode function_namespace_ff_generated_66_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDevices");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Contains any kinematic or motion device which is part of the motion device system.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 22735LU),UA_NODEID_NUMERIC(ns[3], 22698LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "MotionDevices"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 22735LU));
}

/* R01 - ns=3;i=20857 */

static UA_StatusCode function_namespace_ff_generated_67_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.eventNotifier = UA_EVENTNOTIFIER_SUBSCRIBE_TO_EVENT;
attr.displayName = UA_LOCALIZEDTEXT("", "R01");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 20857LU),UA_NODEID_NUMERIC(ns[1], 5001LU),UA_NODEID_NUMERIC(ns[0], 35LU),UA_QUALIFIEDNAME(ns[3], "R01"),UA_NODEID_NUMERIC(ns[2], 1002LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_67_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20857LU));
}

/* SafetyStates - ns=3;i=21773 */

static UA_StatusCode function_namespace_ff_generated_68_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "SafetyStates");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Contains safety-related data from motion device system.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 21773LU),UA_NODEID_NUMERIC(ns[3], 20857LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "SafetyStates"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_68_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 21773LU));
}

/* Controllers - ns=3;i=21113 */

static UA_StatusCode function_namespace_ff_generated_69_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Controllers");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Contains the set of controllers in the motion device system.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 21113LU),UA_NODEID_NUMERIC(ns[3], 20857LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Controllers"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_69_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 21113LU));
}

/* MotionDevices - ns=3;i=20894 */

static UA_StatusCode function_namespace_ff_generated_70_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDevices");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Contains any kinematic or motion device which is part of the motion device system.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 20894LU),UA_NODEID_NUMERIC(ns[3], 20857LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "MotionDevices"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_70_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 20894LU));
}

/* <SINAMICSG120C> - ns=3;i=15345 */

static UA_StatusCode function_namespace_ff_generated_71_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<SINAMICSG120C>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[3], 15345LU),UA_NODEID_NUMERIC(ns[2], 17793LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[3], "<SINAMICSG120C>"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_71_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15345LU));
}

/* VFD4 - ns=3;i=17660 */

static UA_StatusCode function_namespace_ff_generated_72_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VFD4");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 17660LU),UA_NODEID_NUMERIC(ns[3], 17506LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "VFD4"),UA_NODEID_NUMERIC(ns[3], 15345LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_72_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17660LU));
}

/* RevisionCounter - ns=3;i=17692 */

static UA_StatusCode function_namespace_ff_generated_73_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RevisionCounter");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "An incremental counter indicating the number of times the static data within the Device has been modified");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17692LU),UA_NODEID_NUMERIC(ns[3], 17660LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "RevisionCounter"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_73_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17692LU));
}

/* SerialNumber - ns=3;i=17690 */

static UA_StatusCode function_namespace_ff_generated_74_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Identifier that uniquely identifies, within a manufacturer, a device instance");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17690LU),UA_NODEID_NUMERIC(ns[3], 17660LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SerialNumber"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_74_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17690LU));
}

/* DeviceManual - ns=3;i=17688 */

static UA_StatusCode function_namespace_ff_generated_75_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceManual");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Address (pathname in the file system or a URL | Web address) of user manual for the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17688LU),UA_NODEID_NUMERIC(ns[3], 17660LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "DeviceManual"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_75_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17688LU));
}

/* ProductCode - ns=3;i=17687 */

static UA_StatusCode function_namespace_ff_generated_76_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "The ProductCode property provides a unique combination of numbers and letters used to identify the product. It may be the order information displayed on type shields or in ERP systems.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17687LU),UA_NODEID_NUMERIC(ns[3], 17660LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ProductCode"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_76_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17687LU));
}

/* DeviceRevision - ns=3;i=17686 */

static UA_StatusCode function_namespace_ff_generated_77_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceRevision");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Overall revision level of the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17686LU),UA_NODEID_NUMERIC(ns[3], 17660LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "DeviceRevision"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_77_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17686LU));
}

/* SoftwareRevision - ns=3;i=17685 */

static UA_StatusCode function_namespace_ff_generated_78_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareRevision");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Revision level of the software/firmware of the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17685LU),UA_NODEID_NUMERIC(ns[3], 17660LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SoftwareRevision"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_78_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17685LU));
}

/* HardwareRevision - ns=3;i=17684 */

static UA_StatusCode function_namespace_ff_generated_79_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "HardwareRevision");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Revision level of the hardware of the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17684LU),UA_NODEID_NUMERIC(ns[3], 17660LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "HardwareRevision"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17684LU));
}

/* Model - ns=3;i=17683 */

static UA_StatusCode function_namespace_ff_generated_80_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Model name of the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17683LU),UA_NODEID_NUMERIC(ns[3], 17660LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Model"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_80_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17683LU));
}

/* Manufacturer - ns=3;i=17681 */

static UA_StatusCode function_namespace_ff_generated_81_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Name of the company that manufactured the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17681LU),UA_NODEID_NUMERIC(ns[3], 17660LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Manufacturer"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17681LU));
}

/* ParameterSet - ns=3;i=17661 */

static UA_StatusCode function_namespace_ff_generated_82_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 17661LU),UA_NODEID_NUMERIC(ns[3], 17660LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "ParameterSet"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17661LU));
}

/* Temperature - ns=3;i=17705 */

static UA_StatusCode function_namespace_ff_generated_83_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17705LU),UA_NODEID_NUMERIC(ns[3], 17661LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Temperature"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_83_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17705LU));
}

/* EngineeringUnits - ns=3;i=17710 */

static UA_StatusCode function_namespace_ff_generated_84_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17710LU),UA_NODEID_NUMERIC(ns[3], 17705LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_84_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17710LU));
}

/* VFD3 - ns=3;i=17609 */

static UA_StatusCode function_namespace_ff_generated_85_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VFD3");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 17609LU),UA_NODEID_NUMERIC(ns[3], 17506LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "VFD3"),UA_NODEID_NUMERIC(ns[3], 15345LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_85_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17609LU));
}

/* RevisionCounter - ns=3;i=17641 */

static UA_StatusCode function_namespace_ff_generated_86_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RevisionCounter");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "An incremental counter indicating the number of times the static data within the Device has been modified");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17641LU),UA_NODEID_NUMERIC(ns[3], 17609LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "RevisionCounter"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_86_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17641LU));
}

/* SerialNumber - ns=3;i=17639 */

static UA_StatusCode function_namespace_ff_generated_87_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Identifier that uniquely identifies, within a manufacturer, a device instance");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17639LU),UA_NODEID_NUMERIC(ns[3], 17609LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SerialNumber"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_87_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17639LU));
}

/* DeviceManual - ns=3;i=17637 */

static UA_StatusCode function_namespace_ff_generated_88_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceManual");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Address (pathname in the file system or a URL | Web address) of user manual for the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17637LU),UA_NODEID_NUMERIC(ns[3], 17609LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "DeviceManual"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_88_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17637LU));
}

/* ProductCode - ns=3;i=17636 */

static UA_StatusCode function_namespace_ff_generated_89_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "The ProductCode property provides a unique combination of numbers and letters used to identify the product. It may be the order information displayed on type shields or in ERP systems.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17636LU),UA_NODEID_NUMERIC(ns[3], 17609LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ProductCode"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_89_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17636LU));
}

/* DeviceRevision - ns=3;i=17635 */

static UA_StatusCode function_namespace_ff_generated_90_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceRevision");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Overall revision level of the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17635LU),UA_NODEID_NUMERIC(ns[3], 17609LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "DeviceRevision"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_90_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17635LU));
}

/* SoftwareRevision - ns=3;i=17634 */

static UA_StatusCode function_namespace_ff_generated_91_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareRevision");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Revision level of the software/firmware of the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17634LU),UA_NODEID_NUMERIC(ns[3], 17609LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SoftwareRevision"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_91_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17634LU));
}

/* HardwareRevision - ns=3;i=17633 */

static UA_StatusCode function_namespace_ff_generated_92_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "HardwareRevision");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Revision level of the hardware of the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17633LU),UA_NODEID_NUMERIC(ns[3], 17609LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "HardwareRevision"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_92_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17633LU));
}

/* Model - ns=3;i=17632 */

static UA_StatusCode function_namespace_ff_generated_93_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Model name of the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17632LU),UA_NODEID_NUMERIC(ns[3], 17609LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Model"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_93_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17632LU));
}

/* Manufacturer - ns=3;i=17630 */

static UA_StatusCode function_namespace_ff_generated_94_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Name of the company that manufactured the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17630LU),UA_NODEID_NUMERIC(ns[3], 17609LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Manufacturer"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_94_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17630LU));
}

/* ParameterSet - ns=3;i=17610 */

static UA_StatusCode function_namespace_ff_generated_95_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 17610LU),UA_NODEID_NUMERIC(ns[3], 17609LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "ParameterSet"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_95_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17610LU));
}

/* Temperature - ns=3;i=17654 */

static UA_StatusCode function_namespace_ff_generated_96_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17654LU),UA_NODEID_NUMERIC(ns[3], 17610LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Temperature"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_96_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17654LU));
}

/* EngineeringUnits - ns=3;i=17659 */

static UA_StatusCode function_namespace_ff_generated_97_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17659LU),UA_NODEID_NUMERIC(ns[3], 17654LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_97_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17659LU));
}

/* VFD2 - ns=3;i=17558 */

static UA_StatusCode function_namespace_ff_generated_98_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VFD2");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 17558LU),UA_NODEID_NUMERIC(ns[3], 17506LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "VFD2"),UA_NODEID_NUMERIC(ns[3], 15345LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_98_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17558LU));
}

/* RevisionCounter - ns=3;i=17590 */

static UA_StatusCode function_namespace_ff_generated_99_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RevisionCounter");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "An incremental counter indicating the number of times the static data within the Device has been modified");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17590LU),UA_NODEID_NUMERIC(ns[3], 17558LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "RevisionCounter"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_99_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17590LU));
}

/* SerialNumber - ns=3;i=17588 */

static UA_StatusCode function_namespace_ff_generated_100_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Identifier that uniquely identifies, within a manufacturer, a device instance");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17588LU),UA_NODEID_NUMERIC(ns[3], 17558LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SerialNumber"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_100_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17588LU));
}

/* DeviceManual - ns=3;i=17586 */

static UA_StatusCode function_namespace_ff_generated_101_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceManual");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Address (pathname in the file system or a URL | Web address) of user manual for the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17586LU),UA_NODEID_NUMERIC(ns[3], 17558LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "DeviceManual"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_101_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17586LU));
}

/* ProductCode - ns=3;i=17585 */

static UA_StatusCode function_namespace_ff_generated_102_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "The ProductCode property provides a unique combination of numbers and letters used to identify the product. It may be the order information displayed on type shields or in ERP systems.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17585LU),UA_NODEID_NUMERIC(ns[3], 17558LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ProductCode"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_102_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17585LU));
}

/* DeviceRevision - ns=3;i=17584 */

static UA_StatusCode function_namespace_ff_generated_103_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceRevision");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Overall revision level of the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17584LU),UA_NODEID_NUMERIC(ns[3], 17558LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "DeviceRevision"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_103_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17584LU));
}

/* SoftwareRevision - ns=3;i=17583 */

static UA_StatusCode function_namespace_ff_generated_104_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareRevision");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Revision level of the software/firmware of the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17583LU),UA_NODEID_NUMERIC(ns[3], 17558LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SoftwareRevision"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_104_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17583LU));
}

/* HardwareRevision - ns=3;i=17582 */

static UA_StatusCode function_namespace_ff_generated_105_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "HardwareRevision");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Revision level of the hardware of the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17582LU),UA_NODEID_NUMERIC(ns[3], 17558LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "HardwareRevision"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_105_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17582LU));
}

/* Model - ns=3;i=17581 */

static UA_StatusCode function_namespace_ff_generated_106_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Model name of the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17581LU),UA_NODEID_NUMERIC(ns[3], 17558LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Model"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_106_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17581LU));
}

/* Manufacturer - ns=3;i=17579 */

static UA_StatusCode function_namespace_ff_generated_107_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Name of the company that manufactured the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17579LU),UA_NODEID_NUMERIC(ns[3], 17558LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Manufacturer"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_107_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17579LU));
}

/* ParameterSet - ns=3;i=17559 */

static UA_StatusCode function_namespace_ff_generated_108_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 17559LU),UA_NODEID_NUMERIC(ns[3], 17558LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "ParameterSet"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_108_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17559LU));
}

/* Temperature - ns=3;i=17603 */

static UA_StatusCode function_namespace_ff_generated_109_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17603LU),UA_NODEID_NUMERIC(ns[3], 17559LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Temperature"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_109_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17603LU));
}

/* EngineeringUnits - ns=3;i=17608 */

static UA_StatusCode function_namespace_ff_generated_110_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17608LU),UA_NODEID_NUMERIC(ns[3], 17603LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_110_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17608LU));
}

/* VFD1 - ns=3;i=17507 */

static UA_StatusCode function_namespace_ff_generated_111_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "VFD1");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 17507LU),UA_NODEID_NUMERIC(ns[3], 17506LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "VFD1"),UA_NODEID_NUMERIC(ns[3], 15345LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_111_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17507LU));
}

/* RevisionCounter - ns=3;i=17539 */

static UA_StatusCode function_namespace_ff_generated_112_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 6LU);
attr.displayName = UA_LOCALIZEDTEXT("", "RevisionCounter");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "An incremental counter indicating the number of times the static data within the Device has been modified");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17539LU),UA_NODEID_NUMERIC(ns[3], 17507LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "RevisionCounter"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_112_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17539LU));
}

/* SerialNumber - ns=3;i=17537 */

static UA_StatusCode function_namespace_ff_generated_113_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Identifier that uniquely identifies, within a manufacturer, a device instance");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17537LU),UA_NODEID_NUMERIC(ns[3], 17507LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SerialNumber"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_113_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17537LU));
}

/* DeviceManual - ns=3;i=17535 */

static UA_StatusCode function_namespace_ff_generated_114_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceManual");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Address (pathname in the file system or a URL | Web address) of user manual for the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17535LU),UA_NODEID_NUMERIC(ns[3], 17507LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "DeviceManual"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_114_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17535LU));
}

/* ProductCode - ns=3;i=17534 */

static UA_StatusCode function_namespace_ff_generated_115_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "The ProductCode property provides a unique combination of numbers and letters used to identify the product. It may be the order information displayed on type shields or in ERP systems.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17534LU),UA_NODEID_NUMERIC(ns[3], 17507LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ProductCode"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_115_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17534LU));
}

/* DeviceRevision - ns=3;i=17533 */

static UA_StatusCode function_namespace_ff_generated_116_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DeviceRevision");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Overall revision level of the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17533LU),UA_NODEID_NUMERIC(ns[3], 17507LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "DeviceRevision"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_116_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17533LU));
}

/* SoftwareRevision - ns=3;i=17532 */

static UA_StatusCode function_namespace_ff_generated_117_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SoftwareRevision");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Revision level of the software/firmware of the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17532LU),UA_NODEID_NUMERIC(ns[3], 17507LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SoftwareRevision"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_117_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17532LU));
}

/* HardwareRevision - ns=3;i=17531 */

static UA_StatusCode function_namespace_ff_generated_118_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "HardwareRevision");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Revision level of the hardware of the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17531LU),UA_NODEID_NUMERIC(ns[3], 17507LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "HardwareRevision"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_118_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17531LU));
}

/* Model - ns=3;i=17530 */

static UA_StatusCode function_namespace_ff_generated_119_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Model name of the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17530LU),UA_NODEID_NUMERIC(ns[3], 17507LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Model"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_119_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17530LU));
}

/* Manufacturer - ns=3;i=17528 */

static UA_StatusCode function_namespace_ff_generated_120_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Name of the company that manufactured the device");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17528LU),UA_NODEID_NUMERIC(ns[3], 17507LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Manufacturer"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_120_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17528LU));
}

/* ParameterSet - ns=3;i=17508 */

static UA_StatusCode function_namespace_ff_generated_121_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 17508LU),UA_NODEID_NUMERIC(ns[3], 17507LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "ParameterSet"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_121_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17508LU));
}

/* Temperature - ns=3;i=17552 */

static UA_StatusCode function_namespace_ff_generated_122_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17552LU),UA_NODEID_NUMERIC(ns[3], 17508LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Temperature"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_122_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17552LU));
}

/* EngineeringUnits - ns=3;i=17557 */

static UA_StatusCode function_namespace_ff_generated_123_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17557LU),UA_NODEID_NUMERIC(ns[3], 17552LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_123_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17557LU));
}

/* ParameterSet - ns=3;i=15346 */

static UA_StatusCode function_namespace_ff_generated_124_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 15346LU),UA_NODEID_NUMERIC(ns[3], 15345LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "ParameterSet"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15346LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_124_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15346LU));
}

/* Temperature - ns=3;i=15415 */

static UA_StatusCode function_namespace_ff_generated_125_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15415LU),UA_NODEID_NUMERIC(ns[3], 15346LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Temperature"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15415LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_125_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15415LU));
}

/* EngineeringUnits - ns=3;i=15420 */

static UA_StatusCode function_namespace_ff_generated_126_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15420LU),UA_NODEID_NUMERIC(ns[3], 15415LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15420LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_126_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15420LU));
}

/* <ConveyorIBM> - ns=3;i=17795 */

static UA_StatusCode function_namespace_ff_generated_127_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<ConveyorIBM>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[3], 17795LU),UA_NODEID_NUMERIC(ns[2], 1004LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[3], "<ConveyorIBM>"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_127_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17795LU));
}

/* <YRC1000mini> - ns=3;i=19467 */

static UA_StatusCode function_namespace_ff_generated_128_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<YRC1000mini>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[3], 19467LU),UA_NODEID_NUMERIC(ns[2], 1003LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[3], "<YRC1000mini>"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_128_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 19467LU));
}

/* ControllerR05 - ns=3;i=17323 */

static UA_StatusCode function_namespace_ff_generated_129_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ControllerR05");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 17323LU),UA_NODEID_NUMERIC(ns[3], 27470LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "ControllerR05"),UA_NODEID_NUMERIC(ns[3], 19467LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_129_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17323LU));
}

/* TaskControls - ns=3;i=17433 */

static UA_StatusCode function_namespace_ff_generated_130_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TaskControls");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "TaskControls is a container for one or more instances of TaskControlType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 17433LU),UA_NODEID_NUMERIC(ns[3], 17323LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "TaskControls"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_130_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17433LU));
}

/* Software - ns=3;i=17397 */

static UA_StatusCode function_namespace_ff_generated_131_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Software");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Software is a container for one or more instances of SoftwareType defined in OPC UA DI.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 17397LU),UA_NODEID_NUMERIC(ns[3], 17323LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Software"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_131_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17397LU));
}

/* CurrentUser - ns=3;i=17358 */

static UA_StatusCode function_namespace_ff_generated_132_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentUser");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "The given name of the device.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 17358LU),UA_NODEID_NUMERIC(ns[3], 17323LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "CurrentUser"),UA_NODEID_NUMERIC(ns[2], 18175LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_132_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17358LU));
}

/* Level - ns=3;i=17359 */

static UA_StatusCode function_namespace_ff_generated_133_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17359LU),UA_NODEID_NUMERIC(ns[3], 17358LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[2], "Level"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_133_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17359LU));
}

/* SerialNumber - ns=3;i=17353 */

static UA_StatusCode function_namespace_ff_generated_134_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17353LU),UA_NODEID_NUMERIC(ns[3], 17323LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SerialNumber"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_134_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17353LU));
}

/* ProductCode - ns=3;i=17350 */

static UA_StatusCode function_namespace_ff_generated_135_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17350LU),UA_NODEID_NUMERIC(ns[3], 17323LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ProductCode"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_135_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17350LU));
}

/* Model - ns=3;i=17346 */

static UA_StatusCode function_namespace_ff_generated_136_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17346LU),UA_NODEID_NUMERIC(ns[3], 17323LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Model"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_136_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17346LU));
}

/* Manufacturer - ns=3;i=17344 */

static UA_StatusCode function_namespace_ff_generated_137_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17344LU),UA_NODEID_NUMERIC(ns[3], 17323LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Manufacturer"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_137_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17344LU));
}

/* ControllerR04 - ns=3;i=16923 */

static UA_StatusCode function_namespace_ff_generated_138_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ControllerR04");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 16923LU),UA_NODEID_NUMERIC(ns[3], 26159LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "ControllerR04"),UA_NODEID_NUMERIC(ns[3], 19467LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_138_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16923LU));
}

/* TaskControls - ns=3;i=17033 */

static UA_StatusCode function_namespace_ff_generated_139_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TaskControls");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "TaskControls is a container for one or more instances of TaskControlType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 17033LU),UA_NODEID_NUMERIC(ns[3], 16923LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "TaskControls"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_139_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17033LU));
}

/* Software - ns=3;i=16997 */

static UA_StatusCode function_namespace_ff_generated_140_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Software");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Software is a container for one or more instances of SoftwareType defined in OPC UA DI.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 16997LU),UA_NODEID_NUMERIC(ns[3], 16923LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Software"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_140_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16997LU));
}

/* CurrentUser - ns=3;i=16958 */

static UA_StatusCode function_namespace_ff_generated_141_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentUser");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "The given name of the device.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 16958LU),UA_NODEID_NUMERIC(ns[3], 16923LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "CurrentUser"),UA_NODEID_NUMERIC(ns[2], 18175LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_141_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16958LU));
}

/* Level - ns=3;i=16959 */

static UA_StatusCode function_namespace_ff_generated_142_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16959LU),UA_NODEID_NUMERIC(ns[3], 16958LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[2], "Level"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_142_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16959LU));
}

/* SerialNumber - ns=3;i=16953 */

static UA_StatusCode function_namespace_ff_generated_143_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16953LU),UA_NODEID_NUMERIC(ns[3], 16923LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SerialNumber"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_143_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16953LU));
}

/* ProductCode - ns=3;i=16950 */

static UA_StatusCode function_namespace_ff_generated_144_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16950LU),UA_NODEID_NUMERIC(ns[3], 16923LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ProductCode"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_144_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16950LU));
}

/* Model - ns=3;i=16946 */

static UA_StatusCode function_namespace_ff_generated_145_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16946LU),UA_NODEID_NUMERIC(ns[3], 16923LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Model"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_145_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16946LU));
}

/* Manufacturer - ns=3;i=16944 */

static UA_StatusCode function_namespace_ff_generated_146_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16944LU),UA_NODEID_NUMERIC(ns[3], 16923LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Manufacturer"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_146_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16944LU));
}

/* ControllerR03 - ns=3;i=16523 */

static UA_StatusCode function_namespace_ff_generated_147_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ControllerR03");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 16523LU),UA_NODEID_NUMERIC(ns[3], 25272LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "ControllerR03"),UA_NODEID_NUMERIC(ns[3], 19467LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_147_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16523LU));
}

/* TaskControls - ns=3;i=16633 */

static UA_StatusCode function_namespace_ff_generated_148_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TaskControls");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "TaskControls is a container for one or more instances of TaskControlType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 16633LU),UA_NODEID_NUMERIC(ns[3], 16523LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "TaskControls"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_148_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16633LU));
}

/* Software - ns=3;i=16597 */

static UA_StatusCode function_namespace_ff_generated_149_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Software");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Software is a container for one or more instances of SoftwareType defined in OPC UA DI.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 16597LU),UA_NODEID_NUMERIC(ns[3], 16523LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Software"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_149_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16597LU));
}

/* CurrentUser - ns=3;i=16558 */

static UA_StatusCode function_namespace_ff_generated_150_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentUser");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "The given name of the device.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 16558LU),UA_NODEID_NUMERIC(ns[3], 16523LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "CurrentUser"),UA_NODEID_NUMERIC(ns[2], 18175LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_150_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16558LU));
}

/* Level - ns=3;i=16559 */

static UA_StatusCode function_namespace_ff_generated_151_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16559LU),UA_NODEID_NUMERIC(ns[3], 16558LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[2], "Level"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_151_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16559LU));
}

/* SerialNumber - ns=3;i=16553 */

static UA_StatusCode function_namespace_ff_generated_152_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16553LU),UA_NODEID_NUMERIC(ns[3], 16523LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SerialNumber"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_152_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16553LU));
}

/* ProductCode - ns=3;i=16550 */

static UA_StatusCode function_namespace_ff_generated_153_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16550LU),UA_NODEID_NUMERIC(ns[3], 16523LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ProductCode"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_153_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16550LU));
}

/* Model - ns=3;i=16546 */

static UA_StatusCode function_namespace_ff_generated_154_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16546LU),UA_NODEID_NUMERIC(ns[3], 16523LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Model"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_154_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16546LU));
}

/* Manufacturer - ns=3;i=16544 */

static UA_StatusCode function_namespace_ff_generated_155_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16544LU),UA_NODEID_NUMERIC(ns[3], 16523LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Manufacturer"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_155_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16544LU));
}

/* ControllerR02 - ns=3;i=16123 */

static UA_StatusCode function_namespace_ff_generated_156_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ControllerR02");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 16123LU),UA_NODEID_NUMERIC(ns[3], 23431LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "ControllerR02"),UA_NODEID_NUMERIC(ns[3], 19467LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_156_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16123LU));
}

/* TaskControls - ns=3;i=16233 */

static UA_StatusCode function_namespace_ff_generated_157_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TaskControls");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "TaskControls is a container for one or more instances of TaskControlType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 16233LU),UA_NODEID_NUMERIC(ns[3], 16123LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "TaskControls"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_157_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16233LU));
}

/* Software - ns=3;i=16197 */

static UA_StatusCode function_namespace_ff_generated_158_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Software");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Software is a container for one or more instances of SoftwareType defined in OPC UA DI.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 16197LU),UA_NODEID_NUMERIC(ns[3], 16123LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Software"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_158_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16197LU));
}

/* CurrentUser - ns=3;i=16158 */

static UA_StatusCode function_namespace_ff_generated_159_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentUser");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "The given name of the device.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 16158LU),UA_NODEID_NUMERIC(ns[3], 16123LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "CurrentUser"),UA_NODEID_NUMERIC(ns[2], 18175LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_159_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16158LU));
}

/* Level - ns=3;i=16159 */

static UA_StatusCode function_namespace_ff_generated_160_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16159LU),UA_NODEID_NUMERIC(ns[3], 16158LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[2], "Level"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_160_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16159LU));
}

/* SerialNumber - ns=3;i=16153 */

static UA_StatusCode function_namespace_ff_generated_161_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16153LU),UA_NODEID_NUMERIC(ns[3], 16123LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SerialNumber"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_161_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16153LU));
}

/* ProductCode - ns=3;i=16150 */

static UA_StatusCode function_namespace_ff_generated_162_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16150LU),UA_NODEID_NUMERIC(ns[3], 16123LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ProductCode"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_162_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16150LU));
}

/* Model - ns=3;i=16146 */

static UA_StatusCode function_namespace_ff_generated_163_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16146LU),UA_NODEID_NUMERIC(ns[3], 16123LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Model"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_163_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16146LU));
}

/* Manufacturer - ns=3;i=16144 */

static UA_StatusCode function_namespace_ff_generated_164_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16144LU),UA_NODEID_NUMERIC(ns[3], 16123LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Manufacturer"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_164_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16144LU));
}

/* <YRC1000> - ns=3;i=19027 */

static UA_StatusCode function_namespace_ff_generated_165_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<YRC1000>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[3], 19027LU),UA_NODEID_NUMERIC(ns[2], 1003LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[3], "<YRC1000>"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_165_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 19027LU));
}

/* ControllerR01 - ns=3;i=15723 */

static UA_StatusCode function_namespace_ff_generated_166_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ControllerR01");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 15723LU),UA_NODEID_NUMERIC(ns[3], 21113LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "ControllerR01"),UA_NODEID_NUMERIC(ns[3], 19027LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_166_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15723LU));
}

/* TaskControls - ns=3;i=15833 */

static UA_StatusCode function_namespace_ff_generated_167_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "TaskControls");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "TaskControls is a container for one or more instances of TaskControlType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 15833LU),UA_NODEID_NUMERIC(ns[3], 15723LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "TaskControls"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_167_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15833LU));
}

/* Software - ns=3;i=15797 */

static UA_StatusCode function_namespace_ff_generated_168_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Software");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Software is a container for one or more instances of SoftwareType defined in OPC UA DI.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 15797LU),UA_NODEID_NUMERIC(ns[3], 15723LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Software"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_168_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15797LU));
}

/* CurrentUser - ns=3;i=15758 */

static UA_StatusCode function_namespace_ff_generated_169_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "CurrentUser");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "The given name of the device.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 15758LU),UA_NODEID_NUMERIC(ns[3], 15723LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "CurrentUser"),UA_NODEID_NUMERIC(ns[2], 18175LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_169_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15758LU));
}

/* Level - ns=3;i=15759 */

static UA_StatusCode function_namespace_ff_generated_170_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15759LU),UA_NODEID_NUMERIC(ns[3], 15758LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[2], "Level"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_170_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15759LU));
}

/* SerialNumber - ns=3;i=15753 */

static UA_StatusCode function_namespace_ff_generated_171_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15753LU),UA_NODEID_NUMERIC(ns[3], 15723LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SerialNumber"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_171_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15753LU));
}

/* ProductCode - ns=3;i=15750 */

static UA_StatusCode function_namespace_ff_generated_172_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15750LU),UA_NODEID_NUMERIC(ns[3], 15723LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ProductCode"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_172_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15750LU));
}

/* Model - ns=3;i=15746 */

static UA_StatusCode function_namespace_ff_generated_173_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15746LU),UA_NODEID_NUMERIC(ns[3], 15723LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Model"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_173_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15746LU));
}

/* Manufacturer - ns=3;i=15744 */

static UA_StatusCode function_namespace_ff_generated_174_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15744LU),UA_NODEID_NUMERIC(ns[3], 15723LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Manufacturer"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_174_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15744LU));
}

/* <GP8> - ns=3;i=18811 */

static UA_StatusCode function_namespace_ff_generated_175_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<GP8>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[3], 18811LU),UA_NODEID_NUMERIC(ns[2], 1004LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[3], "<GP8>"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_175_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 18811LU));
}

/* ParameterSet - ns=3;i=18812 */

static UA_StatusCode function_namespace_ff_generated_176_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 18812LU),UA_NODEID_NUMERIC(ns[3], 18811LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "ParameterSet"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 18812LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_176_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 18812LU));
}

/* JointAngleT - ns=3;i=15105 */

static UA_StatusCode function_namespace_ff_generated_177_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleT");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15105LU),UA_NODEID_NUMERIC(ns[3], 18812LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleT"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15105LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_177_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15105LU));
}

/* EngineeringUnits - ns=3;i=15110 */

static UA_StatusCode function_namespace_ff_generated_178_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15110LU),UA_NODEID_NUMERIC(ns[3], 15105LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15110LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_178_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15110LU));
}

/* JointAngleB - ns=3;i=15099 */

static UA_StatusCode function_namespace_ff_generated_179_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleB");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15099LU),UA_NODEID_NUMERIC(ns[3], 18812LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleB"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15099LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_179_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15099LU));
}

/* EngineeringUnits - ns=3;i=15104 */

static UA_StatusCode function_namespace_ff_generated_180_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15104LU),UA_NODEID_NUMERIC(ns[3], 15099LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15104LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_180_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15104LU));
}

/* JointAngleU - ns=3;i=15093 */

static UA_StatusCode function_namespace_ff_generated_181_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleU");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15093LU),UA_NODEID_NUMERIC(ns[3], 18812LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleU"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15093LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_181_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15093LU));
}

/* EngineeringUnits - ns=3;i=15098 */

static UA_StatusCode function_namespace_ff_generated_182_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15098LU),UA_NODEID_NUMERIC(ns[3], 15093LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15098LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_182_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15098LU));
}

/* JointAngleR - ns=3;i=15087 */

static UA_StatusCode function_namespace_ff_generated_183_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleR");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15087LU),UA_NODEID_NUMERIC(ns[3], 18812LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleR"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15087LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_183_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15087LU));
}

/* EngineeringUnits - ns=3;i=15092 */

static UA_StatusCode function_namespace_ff_generated_184_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15092LU),UA_NODEID_NUMERIC(ns[3], 15087LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15092LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_184_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15092LU));
}

/* JointAngleL - ns=3;i=15081 */

static UA_StatusCode function_namespace_ff_generated_185_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleL");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15081LU),UA_NODEID_NUMERIC(ns[3], 18812LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleL"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15081LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_185_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15081LU));
}

/* EngineeringUnits - ns=3;i=15086 */

static UA_StatusCode function_namespace_ff_generated_186_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15086LU),UA_NODEID_NUMERIC(ns[3], 15081LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15086LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_186_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15086LU));
}

/* JointAngleS - ns=3;i=15075 */

static UA_StatusCode function_namespace_ff_generated_187_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleS");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15075LU),UA_NODEID_NUMERIC(ns[3], 18812LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleS"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15075LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_187_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15075LU));
}

/* EngineeringUnits - ns=3;i=15080 */

static UA_StatusCode function_namespace_ff_generated_188_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15080LU),UA_NODEID_NUMERIC(ns[3], 15075LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15080LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_188_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15080LU));
}

/* MotionDeviceR04 - ns=3;i=16705 */

static UA_StatusCode function_namespace_ff_generated_189_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceR04");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 16705LU),UA_NODEID_NUMERIC(ns[3], 25940LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "MotionDeviceR04"),UA_NODEID_NUMERIC(ns[3], 18811LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_189_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16705LU));
}

/* PowerTrains - ns=3;i=16825 */

static UA_StatusCode function_namespace_ff_generated_190_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 16825LU),UA_NODEID_NUMERIC(ns[3], 16705LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "PowerTrains"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_190_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16825LU));
}

/* Axes - ns=3;i=16744 */

static UA_StatusCode function_namespace_ff_generated_191_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 16744LU),UA_NODEID_NUMERIC(ns[3], 16705LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Axes"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_191_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16744LU));
}

/* MotionDeviceCategory - ns=3;i=16740 */

static UA_StatusCode function_namespace_ff_generated_192_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16740LU),UA_NODEID_NUMERIC(ns[3], 16705LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_192_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16740LU));
}

/* SerialNumber - ns=3;i=16735 */

static UA_StatusCode function_namespace_ff_generated_193_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16735LU),UA_NODEID_NUMERIC(ns[3], 16705LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SerialNumber"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_193_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16735LU));
}

/* ProductCode - ns=3;i=16732 */

static UA_StatusCode function_namespace_ff_generated_194_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16732LU),UA_NODEID_NUMERIC(ns[3], 16705LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ProductCode"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_194_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16732LU));
}

/* Model - ns=3;i=16728 */

static UA_StatusCode function_namespace_ff_generated_195_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16728LU),UA_NODEID_NUMERIC(ns[3], 16705LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Model"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_195_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16728LU));
}

/* Manufacturer - ns=3;i=16726 */

static UA_StatusCode function_namespace_ff_generated_196_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16726LU),UA_NODEID_NUMERIC(ns[3], 16705LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Manufacturer"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_196_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16726LU));
}

/* ParameterSet - ns=3;i=16706 */

static UA_StatusCode function_namespace_ff_generated_197_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 16706LU),UA_NODEID_NUMERIC(ns[3], 16705LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "ParameterSet"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_197_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16706LU));
}

/* SpeedOverride - ns=3;i=16743 */

static UA_StatusCode function_namespace_ff_generated_198_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16743LU),UA_NODEID_NUMERIC(ns[3], 16706LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_198_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16743LU));
}

/* JointAngleT - ns=3;i=15249 */

static UA_StatusCode function_namespace_ff_generated_199_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleT");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15249LU),UA_NODEID_NUMERIC(ns[3], 16706LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleT"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_199_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15249LU));
}

/* EngineeringUnits - ns=3;i=15254 */

static UA_StatusCode function_namespace_ff_generated_200_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15254LU),UA_NODEID_NUMERIC(ns[3], 15249LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_200_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15254LU));
}

/* JointAngleB - ns=3;i=15243 */

static UA_StatusCode function_namespace_ff_generated_201_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleB");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15243LU),UA_NODEID_NUMERIC(ns[3], 16706LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleB"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_201_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15243LU));
}

/* EngineeringUnits - ns=3;i=15248 */

static UA_StatusCode function_namespace_ff_generated_202_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15248LU),UA_NODEID_NUMERIC(ns[3], 15243LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_202_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15248LU));
}

/* JointAngleU - ns=3;i=15237 */

static UA_StatusCode function_namespace_ff_generated_203_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleU");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15237LU),UA_NODEID_NUMERIC(ns[3], 16706LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleU"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_203_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15237LU));
}

/* EngineeringUnits - ns=3;i=15242 */

static UA_StatusCode function_namespace_ff_generated_204_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15242LU),UA_NODEID_NUMERIC(ns[3], 15237LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_204_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15242LU));
}

/* JointAngleR - ns=3;i=15231 */

static UA_StatusCode function_namespace_ff_generated_205_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleR");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15231LU),UA_NODEID_NUMERIC(ns[3], 16706LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleR"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_205_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15231LU));
}

/* EngineeringUnits - ns=3;i=15236 */

static UA_StatusCode function_namespace_ff_generated_206_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15236LU),UA_NODEID_NUMERIC(ns[3], 15231LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_206_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15236LU));
}

/* JointAngleL - ns=3;i=15225 */

static UA_StatusCode function_namespace_ff_generated_207_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleL");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15225LU),UA_NODEID_NUMERIC(ns[3], 16706LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleL"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_207_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15225LU));
}

/* EngineeringUnits - ns=3;i=15230 */

static UA_StatusCode function_namespace_ff_generated_208_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15230LU),UA_NODEID_NUMERIC(ns[3], 15225LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_208_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15230LU));
}

/* JointAngleS - ns=3;i=15219 */

static UA_StatusCode function_namespace_ff_generated_209_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleS");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15219LU),UA_NODEID_NUMERIC(ns[3], 16706LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleS"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_209_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15219LU));
}

/* EngineeringUnits - ns=3;i=15224 */

static UA_StatusCode function_namespace_ff_generated_210_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15224LU),UA_NODEID_NUMERIC(ns[3], 15219LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_210_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15224LU));
}

/* MotionDeviceR03 - ns=3;i=16305 */

static UA_StatusCode function_namespace_ff_generated_211_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceR03");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 16305LU),UA_NODEID_NUMERIC(ns[3], 24576LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "MotionDeviceR03"),UA_NODEID_NUMERIC(ns[3], 18811LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_211_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16305LU));
}

/* PowerTrains - ns=3;i=16425 */

static UA_StatusCode function_namespace_ff_generated_212_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 16425LU),UA_NODEID_NUMERIC(ns[3], 16305LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "PowerTrains"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_212_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16425LU));
}

/* Axes - ns=3;i=16344 */

static UA_StatusCode function_namespace_ff_generated_213_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 16344LU),UA_NODEID_NUMERIC(ns[3], 16305LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Axes"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_213_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16344LU));
}

/* MotionDeviceCategory - ns=3;i=16340 */

static UA_StatusCode function_namespace_ff_generated_214_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16340LU),UA_NODEID_NUMERIC(ns[3], 16305LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_214_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16340LU));
}

/* SerialNumber - ns=3;i=16335 */

static UA_StatusCode function_namespace_ff_generated_215_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16335LU),UA_NODEID_NUMERIC(ns[3], 16305LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SerialNumber"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_215_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16335LU));
}

/* ProductCode - ns=3;i=16332 */

static UA_StatusCode function_namespace_ff_generated_216_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16332LU),UA_NODEID_NUMERIC(ns[3], 16305LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ProductCode"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_216_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16332LU));
}

/* Model - ns=3;i=16328 */

static UA_StatusCode function_namespace_ff_generated_217_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16328LU),UA_NODEID_NUMERIC(ns[3], 16305LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Model"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_217_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16328LU));
}

/* Manufacturer - ns=3;i=16326 */

static UA_StatusCode function_namespace_ff_generated_218_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16326LU),UA_NODEID_NUMERIC(ns[3], 16305LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Manufacturer"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_218_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16326LU));
}

/* ParameterSet - ns=3;i=16306 */

static UA_StatusCode function_namespace_ff_generated_219_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 16306LU),UA_NODEID_NUMERIC(ns[3], 16305LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "ParameterSet"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_219_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16306LU));
}

/* SpeedOverride - ns=3;i=16343 */

static UA_StatusCode function_namespace_ff_generated_220_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 16343LU),UA_NODEID_NUMERIC(ns[3], 16306LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_220_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16343LU));
}

/* JointAngleT - ns=3;i=15213 */

static UA_StatusCode function_namespace_ff_generated_221_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleT");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15213LU),UA_NODEID_NUMERIC(ns[3], 16306LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleT"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_221_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15213LU));
}

/* EngineeringUnits - ns=3;i=15218 */

static UA_StatusCode function_namespace_ff_generated_222_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15218LU),UA_NODEID_NUMERIC(ns[3], 15213LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_222_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15218LU));
}

/* JointAngleB - ns=3;i=15207 */

static UA_StatusCode function_namespace_ff_generated_223_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleB");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15207LU),UA_NODEID_NUMERIC(ns[3], 16306LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleB"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_223_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15207LU));
}

/* EngineeringUnits - ns=3;i=15212 */

static UA_StatusCode function_namespace_ff_generated_224_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15212LU),UA_NODEID_NUMERIC(ns[3], 15207LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_224_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15212LU));
}

/* JointAngleU - ns=3;i=15201 */

static UA_StatusCode function_namespace_ff_generated_225_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleU");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15201LU),UA_NODEID_NUMERIC(ns[3], 16306LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleU"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_225_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15201LU));
}

/* EngineeringUnits - ns=3;i=15206 */

static UA_StatusCode function_namespace_ff_generated_226_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15206LU),UA_NODEID_NUMERIC(ns[3], 15201LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_226_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15206LU));
}

/* JointAngleR - ns=3;i=15195 */

static UA_StatusCode function_namespace_ff_generated_227_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleR");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15195LU),UA_NODEID_NUMERIC(ns[3], 16306LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleR"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_227_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15195LU));
}

/* EngineeringUnits - ns=3;i=15200 */

static UA_StatusCode function_namespace_ff_generated_228_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15200LU),UA_NODEID_NUMERIC(ns[3], 15195LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_228_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15200LU));
}

/* JointAngleL - ns=3;i=15189 */

static UA_StatusCode function_namespace_ff_generated_229_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleL");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15189LU),UA_NODEID_NUMERIC(ns[3], 16306LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleL"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_229_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15189LU));
}

/* EngineeringUnits - ns=3;i=15194 */

static UA_StatusCode function_namespace_ff_generated_230_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15194LU),UA_NODEID_NUMERIC(ns[3], 15189LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_230_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15194LU));
}

/* JointAngleS - ns=3;i=15183 */

static UA_StatusCode function_namespace_ff_generated_231_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleS");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15183LU),UA_NODEID_NUMERIC(ns[3], 16306LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleS"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_231_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15183LU));
}

/* EngineeringUnits - ns=3;i=15188 */

static UA_StatusCode function_namespace_ff_generated_232_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15188LU),UA_NODEID_NUMERIC(ns[3], 15183LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_232_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15188LU));
}

/* MotionDeviceR02 - ns=3;i=15905 */

static UA_StatusCode function_namespace_ff_generated_233_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceR02");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 15905LU),UA_NODEID_NUMERIC(ns[3], 22735LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "MotionDeviceR02"),UA_NODEID_NUMERIC(ns[3], 18811LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_233_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15905LU));
}

/* PowerTrains - ns=3;i=16025 */

static UA_StatusCode function_namespace_ff_generated_234_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 16025LU),UA_NODEID_NUMERIC(ns[3], 15905LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "PowerTrains"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_234_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 16025LU));
}

/* Axes - ns=3;i=15944 */

static UA_StatusCode function_namespace_ff_generated_235_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 15944LU),UA_NODEID_NUMERIC(ns[3], 15905LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Axes"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_235_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15944LU));
}

/* MotionDeviceCategory - ns=3;i=15940 */

static UA_StatusCode function_namespace_ff_generated_236_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15940LU),UA_NODEID_NUMERIC(ns[3], 15905LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_236_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15940LU));
}

/* SerialNumber - ns=3;i=15935 */

static UA_StatusCode function_namespace_ff_generated_237_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15935LU),UA_NODEID_NUMERIC(ns[3], 15905LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SerialNumber"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_237_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15935LU));
}

/* ProductCode - ns=3;i=15932 */

static UA_StatusCode function_namespace_ff_generated_238_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15932LU),UA_NODEID_NUMERIC(ns[3], 15905LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ProductCode"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_238_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15932LU));
}

/* Model - ns=3;i=15928 */

static UA_StatusCode function_namespace_ff_generated_239_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15928LU),UA_NODEID_NUMERIC(ns[3], 15905LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Model"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_239_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15928LU));
}

/* Manufacturer - ns=3;i=15926 */

static UA_StatusCode function_namespace_ff_generated_240_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15926LU),UA_NODEID_NUMERIC(ns[3], 15905LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Manufacturer"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_240_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15926LU));
}

/* ParameterSet - ns=3;i=15906 */

static UA_StatusCode function_namespace_ff_generated_241_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 15906LU),UA_NODEID_NUMERIC(ns[3], 15905LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "ParameterSet"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_241_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15906LU));
}

/* SpeedOverride - ns=3;i=15943 */

static UA_StatusCode function_namespace_ff_generated_242_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15943LU),UA_NODEID_NUMERIC(ns[3], 15906LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_242_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15943LU));
}

/* JointAngleT - ns=3;i=15177 */

static UA_StatusCode function_namespace_ff_generated_243_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleT");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15177LU),UA_NODEID_NUMERIC(ns[3], 15906LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleT"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_243_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15177LU));
}

/* EngineeringUnits - ns=3;i=15182 */

static UA_StatusCode function_namespace_ff_generated_244_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15182LU),UA_NODEID_NUMERIC(ns[3], 15177LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_244_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15182LU));
}

/* JointAngleB - ns=3;i=15171 */

static UA_StatusCode function_namespace_ff_generated_245_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleB");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15171LU),UA_NODEID_NUMERIC(ns[3], 15906LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleB"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_245_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15171LU));
}

/* EngineeringUnits - ns=3;i=15176 */

static UA_StatusCode function_namespace_ff_generated_246_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15176LU),UA_NODEID_NUMERIC(ns[3], 15171LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_246_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15176LU));
}

/* JointAngleU - ns=3;i=15165 */

static UA_StatusCode function_namespace_ff_generated_247_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleU");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15165LU),UA_NODEID_NUMERIC(ns[3], 15906LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleU"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_247_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15165LU));
}

/* EngineeringUnits - ns=3;i=15170 */

static UA_StatusCode function_namespace_ff_generated_248_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15170LU),UA_NODEID_NUMERIC(ns[3], 15165LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_248_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15170LU));
}

/* JointAngleR - ns=3;i=15159 */

static UA_StatusCode function_namespace_ff_generated_249_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleR");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15159LU),UA_NODEID_NUMERIC(ns[3], 15906LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleR"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_249_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15159LU));
}

/* EngineeringUnits - ns=3;i=15164 */

static UA_StatusCode function_namespace_ff_generated_250_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15164LU),UA_NODEID_NUMERIC(ns[3], 15159LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_250_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15164LU));
}

/* JointAngleL - ns=3;i=15153 */

static UA_StatusCode function_namespace_ff_generated_251_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleL");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15153LU),UA_NODEID_NUMERIC(ns[3], 15906LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleL"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_251_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15153LU));
}

/* EngineeringUnits - ns=3;i=15158 */

static UA_StatusCode function_namespace_ff_generated_252_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15158LU),UA_NODEID_NUMERIC(ns[3], 15153LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_252_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15158LU));
}

/* JointAngleS - ns=3;i=15147 */

static UA_StatusCode function_namespace_ff_generated_253_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleS");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15147LU),UA_NODEID_NUMERIC(ns[3], 15906LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleS"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_253_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15147LU));
}

/* EngineeringUnits - ns=3;i=15152 */

static UA_StatusCode function_namespace_ff_generated_254_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15152LU),UA_NODEID_NUMERIC(ns[3], 15147LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_254_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15152LU));
}

/* <HC10> - ns=3;i=18595 */

static UA_StatusCode function_namespace_ff_generated_255_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectTypeAttributes attr = UA_ObjectTypeAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "<HC10>");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECTTYPE,UA_NODEID_NUMERIC(ns[3], 18595LU),UA_NODEID_NUMERIC(ns[2], 1004LU),UA_NODEID_NUMERIC(ns[0], 45LU),UA_QUALIFIEDNAME(ns[3], "<HC10>"), UA_NODEID_NULL,(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTTYPEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_255_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 18595LU));
}

/* ParameterSet - ns=3;i=18596 */

static UA_StatusCode function_namespace_ff_generated_256_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 18596LU),UA_NODEID_NUMERIC(ns[3], 18595LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "ParameterSet"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 18596LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_256_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 18596LU));
}

/* JointAngleT - ns=3;i=15069 */

static UA_StatusCode function_namespace_ff_generated_257_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleT");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15069LU),UA_NODEID_NUMERIC(ns[3], 18596LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleT"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15069LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_257_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15069LU));
}

/* EngineeringUnits - ns=3;i=15074 */

static UA_StatusCode function_namespace_ff_generated_258_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15074LU),UA_NODEID_NUMERIC(ns[3], 15069LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15074LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_258_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15074LU));
}

/* JointAngleB - ns=3;i=15036 */

static UA_StatusCode function_namespace_ff_generated_259_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleB");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15036LU),UA_NODEID_NUMERIC(ns[3], 18596LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleB"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15036LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_259_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15036LU));
}

/* EngineeringUnits - ns=3;i=15068 */

static UA_StatusCode function_namespace_ff_generated_260_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15068LU),UA_NODEID_NUMERIC(ns[3], 15036LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15068LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_260_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15068LU));
}

/* JointAngleU - ns=3;i=15030 */

static UA_StatusCode function_namespace_ff_generated_261_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleU");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15030LU),UA_NODEID_NUMERIC(ns[3], 18596LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleU"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15030LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_261_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15030LU));
}

/* EngineeringUnits - ns=3;i=15035 */

static UA_StatusCode function_namespace_ff_generated_262_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15035LU),UA_NODEID_NUMERIC(ns[3], 15030LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15035LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_262_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15035LU));
}

/* JointAngleR - ns=3;i=15024 */

static UA_StatusCode function_namespace_ff_generated_263_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleR");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15024LU),UA_NODEID_NUMERIC(ns[3], 18596LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleR"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15024LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_263_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15024LU));
}

/* EngineeringUnits - ns=3;i=15029 */

static UA_StatusCode function_namespace_ff_generated_264_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15029LU),UA_NODEID_NUMERIC(ns[3], 15024LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15029LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_264_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15029LU));
}

/* JointAngleL - ns=3;i=15018 */

static UA_StatusCode function_namespace_ff_generated_265_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleL");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15018LU),UA_NODEID_NUMERIC(ns[3], 18596LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleL"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15018LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_265_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15018LU));
}

/* EngineeringUnits - ns=3;i=15023 */

static UA_StatusCode function_namespace_ff_generated_266_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15023LU),UA_NODEID_NUMERIC(ns[3], 15018LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15023LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_266_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15023LU));
}

/* JointAngleS - ns=3;i=15001 */

static UA_StatusCode function_namespace_ff_generated_267_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleS");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15001LU),UA_NODEID_NUMERIC(ns[3], 18596LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleS"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15001LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_267_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15001LU));
}

/* EngineeringUnits - ns=3;i=15017 */

static UA_StatusCode function_namespace_ff_generated_268_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15017LU),UA_NODEID_NUMERIC(ns[3], 15001LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
retVal |= UA_Server_addReference(server, UA_NODEID_NUMERIC(ns[3], 15017LU), UA_NODEID_NUMERIC(ns[0], 37LU), UA_EXPANDEDNODEID_NUMERIC(ns[0], 78LU), true);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_268_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15017LU));
}

/* MotionDeviceR05 - ns=3;i=17105 */

static UA_StatusCode function_namespace_ff_generated_269_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceR05");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 17105LU),UA_NODEID_NUMERIC(ns[3], 27251LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "MotionDeviceR05"),UA_NODEID_NUMERIC(ns[3], 18595LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_269_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17105LU));
}

/* PowerTrains - ns=3;i=17225 */

static UA_StatusCode function_namespace_ff_generated_270_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 17225LU),UA_NODEID_NUMERIC(ns[3], 17105LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "PowerTrains"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_270_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17225LU));
}

/* Axes - ns=3;i=17144 */

static UA_StatusCode function_namespace_ff_generated_271_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 17144LU),UA_NODEID_NUMERIC(ns[3], 17105LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Axes"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_271_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17144LU));
}

/* MotionDeviceCategory - ns=3;i=17140 */

static UA_StatusCode function_namespace_ff_generated_272_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17140LU),UA_NODEID_NUMERIC(ns[3], 17105LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_272_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17140LU));
}

/* SerialNumber - ns=3;i=17135 */

static UA_StatusCode function_namespace_ff_generated_273_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17135LU),UA_NODEID_NUMERIC(ns[3], 17105LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SerialNumber"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_273_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17135LU));
}

/* ProductCode - ns=3;i=17132 */

static UA_StatusCode function_namespace_ff_generated_274_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17132LU),UA_NODEID_NUMERIC(ns[3], 17105LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ProductCode"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_274_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17132LU));
}

/* Model - ns=3;i=17128 */

static UA_StatusCode function_namespace_ff_generated_275_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17128LU),UA_NODEID_NUMERIC(ns[3], 17105LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Model"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_275_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17128LU));
}

/* Manufacturer - ns=3;i=17126 */

static UA_StatusCode function_namespace_ff_generated_276_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17126LU),UA_NODEID_NUMERIC(ns[3], 17105LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Manufacturer"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_276_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17126LU));
}

/* ParameterSet - ns=3;i=17106 */

static UA_StatusCode function_namespace_ff_generated_277_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 17106LU),UA_NODEID_NUMERIC(ns[3], 17105LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "ParameterSet"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_277_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17106LU));
}

/* SpeedOverride - ns=3;i=17143 */

static UA_StatusCode function_namespace_ff_generated_278_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 17143LU),UA_NODEID_NUMERIC(ns[3], 17106LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_278_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 17143LU));
}

/* JointAngleT - ns=3;i=15285 */

static UA_StatusCode function_namespace_ff_generated_279_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleT");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15285LU),UA_NODEID_NUMERIC(ns[3], 17106LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleT"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_279_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15285LU));
}

/* EngineeringUnits - ns=3;i=15290 */

static UA_StatusCode function_namespace_ff_generated_280_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15290LU),UA_NODEID_NUMERIC(ns[3], 15285LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_280_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15290LU));
}

/* JointAngleB - ns=3;i=15279 */

static UA_StatusCode function_namespace_ff_generated_281_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleB");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15279LU),UA_NODEID_NUMERIC(ns[3], 17106LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleB"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_281_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15279LU));
}

/* EngineeringUnits - ns=3;i=15284 */

static UA_StatusCode function_namespace_ff_generated_282_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15284LU),UA_NODEID_NUMERIC(ns[3], 15279LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_282_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15284LU));
}

/* JointAngleU - ns=3;i=15273 */

static UA_StatusCode function_namespace_ff_generated_283_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleU");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15273LU),UA_NODEID_NUMERIC(ns[3], 17106LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleU"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_283_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15273LU));
}

/* EngineeringUnits - ns=3;i=15278 */

static UA_StatusCode function_namespace_ff_generated_284_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15278LU),UA_NODEID_NUMERIC(ns[3], 15273LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_284_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15278LU));
}

/* JointAngleR - ns=3;i=15267 */

static UA_StatusCode function_namespace_ff_generated_285_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleR");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15267LU),UA_NODEID_NUMERIC(ns[3], 17106LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleR"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_285_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15267LU));
}

/* EngineeringUnits - ns=3;i=15272 */

static UA_StatusCode function_namespace_ff_generated_286_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15272LU),UA_NODEID_NUMERIC(ns[3], 15267LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_286_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15272LU));
}

/* JointAngleL - ns=3;i=15261 */

static UA_StatusCode function_namespace_ff_generated_287_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleL");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15261LU),UA_NODEID_NUMERIC(ns[3], 17106LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleL"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_287_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15261LU));
}

/* EngineeringUnits - ns=3;i=15266 */

static UA_StatusCode function_namespace_ff_generated_288_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15266LU),UA_NODEID_NUMERIC(ns[3], 15261LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_288_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15266LU));
}

/* JointAngleS - ns=3;i=15255 */

static UA_StatusCode function_namespace_ff_generated_289_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleS");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15255LU),UA_NODEID_NUMERIC(ns[3], 17106LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleS"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_289_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15255LU));
}

/* EngineeringUnits - ns=3;i=15260 */

static UA_StatusCode function_namespace_ff_generated_290_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15260LU),UA_NODEID_NUMERIC(ns[3], 15255LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_290_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15260LU));
}

/* MotionDeviceR01 - ns=3;i=15505 */

static UA_StatusCode function_namespace_ff_generated_291_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "MotionDeviceR01");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 15505LU),UA_NODEID_NUMERIC(ns[3], 20894LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "MotionDeviceR01"),UA_NODEID_NUMERIC(ns[3], 18595LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_291_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15505LU));
}

/* PowerTrains - ns=3;i=15625 */

static UA_StatusCode function_namespace_ff_generated_292_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "PowerTrains");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "PowerTrains is a container for one or more instances of the PowerTrainType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 15625LU),UA_NODEID_NUMERIC(ns[3], 15505LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "PowerTrains"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_292_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15625LU));
}

/* Axes - ns=3;i=15544 */

static UA_StatusCode function_namespace_ff_generated_293_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Axes");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Axes is a container for one or more instances of the AxisType.");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 15544LU),UA_NODEID_NUMERIC(ns[3], 15505LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "Axes"),UA_NODEID_NUMERIC(ns[0], 61LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_293_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15544LU));
}

/* MotionDeviceCategory - ns=3;i=15540 */

static UA_StatusCode function_namespace_ff_generated_294_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15540LU),UA_NODEID_NUMERIC(ns[3], 15505LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[2], "MotionDeviceCategory"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_294_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15540LU));
}

/* SerialNumber - ns=3;i=15535 */

static UA_StatusCode function_namespace_ff_generated_295_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "SerialNumber");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15535LU),UA_NODEID_NUMERIC(ns[3], 15505LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "SerialNumber"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_295_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15535LU));
}

/* ProductCode - ns=3;i=15532 */

static UA_StatusCode function_namespace_ff_generated_296_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "ProductCode");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15532LU),UA_NODEID_NUMERIC(ns[3], 15505LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "ProductCode"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_296_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15532LU));
}

/* Model - ns=3;i=15528 */

static UA_StatusCode function_namespace_ff_generated_297_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Model");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15528LU),UA_NODEID_NUMERIC(ns[3], 15505LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Model"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_297_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15528LU));
}

/* Manufacturer - ns=3;i=15526 */

static UA_StatusCode function_namespace_ff_generated_298_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 21LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Manufacturer");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15526LU),UA_NODEID_NUMERIC(ns[3], 15505LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[1], "Manufacturer"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_298_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15526LU));
}

/* ParameterSet - ns=3;i=15506 */

static UA_StatusCode function_namespace_ff_generated_299_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ParameterSet");

#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS

attr.description = UA_LOCALIZEDTEXT("", "Flat list of Parameters");

#endif

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 15506LU),UA_NODEID_NUMERIC(ns[3], 15505LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "ParameterSet"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_299_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15506LU));
}

/* SpeedOverride - ns=3;i=15543 */

static UA_StatusCode function_namespace_ff_generated_300_begin(UA_Server *server, UA_UInt16* ns) {
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

retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15543LU),UA_NODEID_NUMERIC(ns[3], 15506LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[2], "SpeedOverride"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_300_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15543LU));
}

/* JointAngleT - ns=3;i=15141 */

static UA_StatusCode function_namespace_ff_generated_301_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleT");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15141LU),UA_NODEID_NUMERIC(ns[3], 15506LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleT"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_301_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15141LU));
}

/* EngineeringUnits - ns=3;i=15146 */

static UA_StatusCode function_namespace_ff_generated_302_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15146LU),UA_NODEID_NUMERIC(ns[3], 15141LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_302_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15146LU));
}

/* JointAngleB - ns=3;i=15135 */

static UA_StatusCode function_namespace_ff_generated_303_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleB");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15135LU),UA_NODEID_NUMERIC(ns[3], 15506LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleB"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_303_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15135LU));
}

/* EngineeringUnits - ns=3;i=15140 */

static UA_StatusCode function_namespace_ff_generated_304_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15140LU),UA_NODEID_NUMERIC(ns[3], 15135LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_304_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15140LU));
}

/* JointAngleU - ns=3;i=15129 */

static UA_StatusCode function_namespace_ff_generated_305_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleU");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15129LU),UA_NODEID_NUMERIC(ns[3], 15506LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleU"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_305_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15129LU));
}

/* EngineeringUnits - ns=3;i=15134 */

static UA_StatusCode function_namespace_ff_generated_306_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15134LU),UA_NODEID_NUMERIC(ns[3], 15129LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_306_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15134LU));
}

/* JointAngleR - ns=3;i=15123 */

static UA_StatusCode function_namespace_ff_generated_307_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleR");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15123LU),UA_NODEID_NUMERIC(ns[3], 15506LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleR"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_307_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15123LU));
}

/* EngineeringUnits - ns=3;i=15128 */

static UA_StatusCode function_namespace_ff_generated_308_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15128LU),UA_NODEID_NUMERIC(ns[3], 15123LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_308_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15128LU));
}

/* JointAngleL - ns=3;i=15117 */

static UA_StatusCode function_namespace_ff_generated_309_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleL");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15117LU),UA_NODEID_NUMERIC(ns[3], 15506LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleL"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_309_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15117LU));
}

/* EngineeringUnits - ns=3;i=15122 */

static UA_StatusCode function_namespace_ff_generated_310_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15122LU),UA_NODEID_NUMERIC(ns[3], 15117LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_310_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15122LU));
}

/* JointAngleS - ns=3;i=15111 */

static UA_StatusCode function_namespace_ff_generated_311_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
attr.displayName = UA_LOCALIZEDTEXT("", "JointAngleS");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15111LU),UA_NODEID_NUMERIC(ns[3], 15506LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "JointAngleS"),UA_NODEID_NUMERIC(ns[0], 17497LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_311_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15111LU));
}

/* EngineeringUnits - ns=3;i=15116 */

static UA_StatusCode function_namespace_ff_generated_312_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 887LU);
attr.displayName = UA_LOCALIZEDTEXT("", "EngineeringUnits");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 15116LU),UA_NODEID_NUMERIC(ns[3], 15111LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "EngineeringUnits"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_312_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 15116LU));
}

/* https://nextusc.com/UA/FF/ - ns=3;i=18562 */

static UA_StatusCode function_namespace_ff_generated_313_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "https://nextusc.com/UA/FF/");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[3], 18562LU),UA_NODEID_NUMERIC(ns[0], 11715LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[3], "https://nextusc.com/UA/FF/"),UA_NODEID_NUMERIC(ns[0], 11616LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_313_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 18562LU));
}

/* DefaultAccessRestrictions - ns=3;i=18594 */

static UA_StatusCode function_namespace_ff_generated_314_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 95LU);
attr.displayName = UA_LOCALIZEDTEXT("", "DefaultAccessRestrictions");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 18594LU),UA_NODEID_NUMERIC(ns[3], 18562LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DefaultAccessRestrictions"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_314_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 18594LU));
}

/* DefaultUserRolePermissions - ns=3;i=18593 */

static UA_StatusCode function_namespace_ff_generated_315_begin(UA_Server *server, UA_UInt16* ns) {
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
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 18593LU),UA_NODEID_NUMERIC(ns[3], 18562LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DefaultUserRolePermissions"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_315_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 18593LU));
}

/* DefaultRolePermissions - ns=3;i=18592 */

static UA_StatusCode function_namespace_ff_generated_316_begin(UA_Server *server, UA_UInt16* ns) {
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
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 18592LU),UA_NODEID_NUMERIC(ns[3], 18562LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "DefaultRolePermissions"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_316_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 18592LU));
}

/* StaticStringNodeIdPattern - ns=3;i=18569 */

static UA_StatusCode function_namespace_ff_generated_317_begin(UA_Server *server, UA_UInt16* ns) {
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
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 18569LU),UA_NODEID_NUMERIC(ns[3], 18562LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "StaticStringNodeIdPattern"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_3_i_18569_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_317_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 18569LU));
}

/* StaticNumericNodeIdRange - ns=3;i=18568 */

static UA_StatusCode function_namespace_ff_generated_318_begin(UA_Server *server, UA_UInt16* ns) {
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
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 18568LU),UA_NODEID_NUMERIC(ns[3], 18562LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "StaticNumericNodeIdRange"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_318_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 18568LU));
}

/* StaticNodeIdTypes - ns=3;i=18567 */

static UA_StatusCode function_namespace_ff_generated_319_begin(UA_Server *server, UA_UInt16* ns) {
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
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 18567LU),UA_NODEID_NUMERIC(ns[3], 18562LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "StaticNodeIdTypes"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_319_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 18567LU));
}

/* IsNamespaceSubset - ns=3;i=18566 */

static UA_StatusCode function_namespace_ff_generated_320_begin(UA_Server *server, UA_UInt16* ns) {
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
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 18566LU),UA_NODEID_NUMERIC(ns[3], 18562LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "IsNamespaceSubset"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_3_i_18566_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_320_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 18566LU));
}

/* NamespacePublicationDate - ns=3;i=18565 */

static UA_StatusCode function_namespace_ff_generated_321_begin(UA_Server *server, UA_UInt16* ns) {
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
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 18565LU),UA_NODEID_NUMERIC(ns[3], 18562LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "NamespacePublicationDate"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_DateTime_delete(variablenode_ns_3_i_18565_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_321_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 18565LU));
}

/* NamespaceVersion - ns=3;i=18564 */

static UA_StatusCode function_namespace_ff_generated_322_begin(UA_Server *server, UA_UInt16* ns) {
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
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 18564LU),UA_NODEID_NUMERIC(ns[3], 18562LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "NamespaceVersion"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_3_i_18564_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_322_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 18564LU));
}

/* NamespaceUri - ns=3;i=18563 */

static UA_StatusCode function_namespace_ff_generated_323_begin(UA_Server *server, UA_UInt16* ns) {
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
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[3], 18563LU),UA_NODEID_NUMERIC(ns[3], 18562LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_3_i_18563_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_ff_generated_323_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[3], 18563LU));
}

static UA_DataTypeArray customUA_TYPES_DI = {
    NULL,
    UA_TYPES_DI_COUNT,
    UA_TYPES_DI,
    UA_FALSE
};

static UA_DataTypeArray customUA_TYPES_ROB = {
    NULL,
    UA_TYPES_ROB_COUNT,
    UA_TYPES_ROB,
    UA_FALSE
};

static UA_DataTypeArray customUA_TYPES_FF = {
    NULL,
    UA_TYPES_FF_COUNT,
    UA_TYPES_FF,
    UA_FALSE
};

UA_StatusCode namespace_ff_generated(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[4];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/DI/");
ns[2] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/Robotics/");
ns[3] = UA_Server_addNamespace(server, "https://nextusc.com/UA/FF/");
/* Change namespaceIndex from current namespace */
#if UA_TYPES_FF_COUNT > 0
for(int i = 0; i < UA_TYPES_FF_COUNT; i++) {
UA_TYPES_FF[i].typeId.namespaceIndex = ns[3];
UA_TYPES_FF[i].binaryEncodingId.namespaceIndex = ns[3];
}
#endif

/* Load custom datatype definitions into the server */
if(UA_TYPES_DI_COUNT > 0) {
customUA_TYPES_DI.next = UA_Server_getConfig(server)->customDataTypes;
UA_Server_getConfig(server)->customDataTypes = &customUA_TYPES_DI;

}
if(UA_TYPES_ROB_COUNT > 0) {
customUA_TYPES_ROB.next = UA_Server_getConfig(server)->customDataTypes;
UA_Server_getConfig(server)->customDataTypes = &customUA_TYPES_ROB;

}
if(UA_TYPES_FF_COUNT > 0) {
customUA_TYPES_FF.next = UA_Server_getConfig(server)->customDataTypes;
UA_Server_getConfig(server)->customDataTypes = &customUA_TYPES_FF;

}
retVal |= function_namespace_ff_generated_0_begin(server, ns);
retVal |= function_namespace_ff_generated_0_finish(server, ns);
retVal |= function_namespace_ff_generated_1_begin(server, ns);
retVal |= function_namespace_ff_generated_1_finish(server, ns);
retVal |= function_namespace_ff_generated_2_begin(server, ns);
retVal |= function_namespace_ff_generated_2_finish(server, ns);
retVal |= function_namespace_ff_generated_3_begin(server, ns);
retVal |= function_namespace_ff_generated_3_finish(server, ns);
retVal |= function_namespace_ff_generated_4_begin(server, ns);
retVal |= function_namespace_ff_generated_4_finish(server, ns);
retVal |= function_namespace_ff_generated_5_begin(server, ns);
retVal |= function_namespace_ff_generated_5_finish(server, ns);
retVal |= function_namespace_ff_generated_6_begin(server, ns);
retVal |= function_namespace_ff_generated_7_begin(server, ns);
retVal |= function_namespace_ff_generated_8_begin(server, ns);
retVal |= function_namespace_ff_generated_9_begin(server, ns);
retVal |= function_namespace_ff_generated_10_begin(server, ns);
retVal |= function_namespace_ff_generated_11_begin(server, ns);
retVal |= function_namespace_ff_generated_12_begin(server, ns);
retVal |= function_namespace_ff_generated_13_begin(server, ns);
retVal |= function_namespace_ff_generated_14_begin(server, ns);
retVal |= function_namespace_ff_generated_15_begin(server, ns);
retVal |= function_namespace_ff_generated_16_begin(server, ns);
retVal |= function_namespace_ff_generated_17_begin(server, ns);
retVal |= function_namespace_ff_generated_18_begin(server, ns);
retVal |= function_namespace_ff_generated_19_begin(server, ns);
retVal |= function_namespace_ff_generated_20_begin(server, ns);
retVal |= function_namespace_ff_generated_21_begin(server, ns);
retVal |= function_namespace_ff_generated_22_begin(server, ns);
retVal |= function_namespace_ff_generated_23_begin(server, ns);
retVal |= function_namespace_ff_generated_24_begin(server, ns);
retVal |= function_namespace_ff_generated_25_begin(server, ns);
retVal |= function_namespace_ff_generated_26_begin(server, ns);
retVal |= function_namespace_ff_generated_27_begin(server, ns);
retVal |= function_namespace_ff_generated_28_begin(server, ns);
retVal |= function_namespace_ff_generated_29_begin(server, ns);
retVal |= function_namespace_ff_generated_30_begin(server, ns);
retVal |= function_namespace_ff_generated_31_begin(server, ns);
retVal |= function_namespace_ff_generated_32_begin(server, ns);
retVal |= function_namespace_ff_generated_33_begin(server, ns);
retVal |= function_namespace_ff_generated_34_begin(server, ns);
retVal |= function_namespace_ff_generated_35_begin(server, ns);
retVal |= function_namespace_ff_generated_36_begin(server, ns);
retVal |= function_namespace_ff_generated_37_begin(server, ns);
retVal |= function_namespace_ff_generated_38_begin(server, ns);
retVal |= function_namespace_ff_generated_39_begin(server, ns);
retVal |= function_namespace_ff_generated_40_begin(server, ns);
retVal |= function_namespace_ff_generated_41_begin(server, ns);
retVal |= function_namespace_ff_generated_42_begin(server, ns);
retVal |= function_namespace_ff_generated_43_begin(server, ns);
retVal |= function_namespace_ff_generated_44_begin(server, ns);
retVal |= function_namespace_ff_generated_45_begin(server, ns);
retVal |= function_namespace_ff_generated_46_begin(server, ns);
retVal |= function_namespace_ff_generated_47_begin(server, ns);
retVal |= function_namespace_ff_generated_48_begin(server, ns);
retVal |= function_namespace_ff_generated_49_begin(server, ns);
retVal |= function_namespace_ff_generated_50_begin(server, ns);
retVal |= function_namespace_ff_generated_51_begin(server, ns);
retVal |= function_namespace_ff_generated_52_begin(server, ns);
retVal |= function_namespace_ff_generated_53_begin(server, ns);
retVal |= function_namespace_ff_generated_54_begin(server, ns);
retVal |= function_namespace_ff_generated_55_begin(server, ns);
retVal |= function_namespace_ff_generated_56_begin(server, ns);
retVal |= function_namespace_ff_generated_57_begin(server, ns);
retVal |= function_namespace_ff_generated_58_begin(server, ns);
retVal |= function_namespace_ff_generated_59_begin(server, ns);
retVal |= function_namespace_ff_generated_60_begin(server, ns);
retVal |= function_namespace_ff_generated_61_begin(server, ns);
retVal |= function_namespace_ff_generated_62_begin(server, ns);
retVal |= function_namespace_ff_generated_63_begin(server, ns);
retVal |= function_namespace_ff_generated_64_begin(server, ns);
retVal |= function_namespace_ff_generated_65_begin(server, ns);
retVal |= function_namespace_ff_generated_66_begin(server, ns);
retVal |= function_namespace_ff_generated_67_begin(server, ns);
retVal |= function_namespace_ff_generated_68_begin(server, ns);
retVal |= function_namespace_ff_generated_69_begin(server, ns);
retVal |= function_namespace_ff_generated_70_begin(server, ns);
retVal |= function_namespace_ff_generated_71_begin(server, ns);
retVal |= function_namespace_ff_generated_72_begin(server, ns);
retVal |= function_namespace_ff_generated_73_begin(server, ns);
retVal |= function_namespace_ff_generated_74_begin(server, ns);
retVal |= function_namespace_ff_generated_75_begin(server, ns);
retVal |= function_namespace_ff_generated_76_begin(server, ns);
retVal |= function_namespace_ff_generated_77_begin(server, ns);
retVal |= function_namespace_ff_generated_78_begin(server, ns);
retVal |= function_namespace_ff_generated_79_begin(server, ns);
retVal |= function_namespace_ff_generated_80_begin(server, ns);
retVal |= function_namespace_ff_generated_81_begin(server, ns);
retVal |= function_namespace_ff_generated_82_begin(server, ns);
retVal |= function_namespace_ff_generated_83_begin(server, ns);
retVal |= function_namespace_ff_generated_84_begin(server, ns);
retVal |= function_namespace_ff_generated_85_begin(server, ns);
retVal |= function_namespace_ff_generated_86_begin(server, ns);
retVal |= function_namespace_ff_generated_87_begin(server, ns);
retVal |= function_namespace_ff_generated_88_begin(server, ns);
retVal |= function_namespace_ff_generated_89_begin(server, ns);
retVal |= function_namespace_ff_generated_90_begin(server, ns);
retVal |= function_namespace_ff_generated_91_begin(server, ns);
retVal |= function_namespace_ff_generated_92_begin(server, ns);
retVal |= function_namespace_ff_generated_93_begin(server, ns);
retVal |= function_namespace_ff_generated_94_begin(server, ns);
retVal |= function_namespace_ff_generated_95_begin(server, ns);
retVal |= function_namespace_ff_generated_96_begin(server, ns);
retVal |= function_namespace_ff_generated_97_begin(server, ns);
retVal |= function_namespace_ff_generated_98_begin(server, ns);
retVal |= function_namespace_ff_generated_99_begin(server, ns);
retVal |= function_namespace_ff_generated_100_begin(server, ns);
retVal |= function_namespace_ff_generated_101_begin(server, ns);
retVal |= function_namespace_ff_generated_102_begin(server, ns);
retVal |= function_namespace_ff_generated_103_begin(server, ns);
retVal |= function_namespace_ff_generated_104_begin(server, ns);
retVal |= function_namespace_ff_generated_105_begin(server, ns);
retVal |= function_namespace_ff_generated_106_begin(server, ns);
retVal |= function_namespace_ff_generated_107_begin(server, ns);
retVal |= function_namespace_ff_generated_108_begin(server, ns);
retVal |= function_namespace_ff_generated_109_begin(server, ns);
retVal |= function_namespace_ff_generated_110_begin(server, ns);
retVal |= function_namespace_ff_generated_111_begin(server, ns);
retVal |= function_namespace_ff_generated_112_begin(server, ns);
retVal |= function_namespace_ff_generated_113_begin(server, ns);
retVal |= function_namespace_ff_generated_114_begin(server, ns);
retVal |= function_namespace_ff_generated_115_begin(server, ns);
retVal |= function_namespace_ff_generated_116_begin(server, ns);
retVal |= function_namespace_ff_generated_117_begin(server, ns);
retVal |= function_namespace_ff_generated_118_begin(server, ns);
retVal |= function_namespace_ff_generated_119_begin(server, ns);
retVal |= function_namespace_ff_generated_120_begin(server, ns);
retVal |= function_namespace_ff_generated_121_begin(server, ns);
retVal |= function_namespace_ff_generated_122_begin(server, ns);
retVal |= function_namespace_ff_generated_123_begin(server, ns);
retVal |= function_namespace_ff_generated_124_begin(server, ns);
retVal |= function_namespace_ff_generated_125_begin(server, ns);
retVal |= function_namespace_ff_generated_126_begin(server, ns);
retVal |= function_namespace_ff_generated_127_begin(server, ns);
retVal |= function_namespace_ff_generated_128_begin(server, ns);
retVal |= function_namespace_ff_generated_129_begin(server, ns);
retVal |= function_namespace_ff_generated_130_begin(server, ns);
retVal |= function_namespace_ff_generated_131_begin(server, ns);
retVal |= function_namespace_ff_generated_132_begin(server, ns);
retVal |= function_namespace_ff_generated_133_begin(server, ns);
retVal |= function_namespace_ff_generated_134_begin(server, ns);
retVal |= function_namespace_ff_generated_135_begin(server, ns);
retVal |= function_namespace_ff_generated_136_begin(server, ns);
retVal |= function_namespace_ff_generated_137_begin(server, ns);
retVal |= function_namespace_ff_generated_138_begin(server, ns);
retVal |= function_namespace_ff_generated_139_begin(server, ns);
retVal |= function_namespace_ff_generated_140_begin(server, ns);
retVal |= function_namespace_ff_generated_141_begin(server, ns);
retVal |= function_namespace_ff_generated_142_begin(server, ns);
retVal |= function_namespace_ff_generated_143_begin(server, ns);
retVal |= function_namespace_ff_generated_144_begin(server, ns);
retVal |= function_namespace_ff_generated_145_begin(server, ns);
retVal |= function_namespace_ff_generated_146_begin(server, ns);
retVal |= function_namespace_ff_generated_147_begin(server, ns);
retVal |= function_namespace_ff_generated_148_begin(server, ns);
retVal |= function_namespace_ff_generated_149_begin(server, ns);
retVal |= function_namespace_ff_generated_150_begin(server, ns);
retVal |= function_namespace_ff_generated_151_begin(server, ns);
retVal |= function_namespace_ff_generated_152_begin(server, ns);
retVal |= function_namespace_ff_generated_153_begin(server, ns);
retVal |= function_namespace_ff_generated_154_begin(server, ns);
retVal |= function_namespace_ff_generated_155_begin(server, ns);
retVal |= function_namespace_ff_generated_156_begin(server, ns);
retVal |= function_namespace_ff_generated_157_begin(server, ns);
retVal |= function_namespace_ff_generated_158_begin(server, ns);
retVal |= function_namespace_ff_generated_159_begin(server, ns);
retVal |= function_namespace_ff_generated_160_begin(server, ns);
retVal |= function_namespace_ff_generated_161_begin(server, ns);
retVal |= function_namespace_ff_generated_162_begin(server, ns);
retVal |= function_namespace_ff_generated_163_begin(server, ns);
retVal |= function_namespace_ff_generated_164_begin(server, ns);
retVal |= function_namespace_ff_generated_165_begin(server, ns);
retVal |= function_namespace_ff_generated_166_begin(server, ns);
retVal |= function_namespace_ff_generated_167_begin(server, ns);
retVal |= function_namespace_ff_generated_168_begin(server, ns);
retVal |= function_namespace_ff_generated_169_begin(server, ns);
retVal |= function_namespace_ff_generated_170_begin(server, ns);
retVal |= function_namespace_ff_generated_171_begin(server, ns);
retVal |= function_namespace_ff_generated_172_begin(server, ns);
retVal |= function_namespace_ff_generated_173_begin(server, ns);
retVal |= function_namespace_ff_generated_174_begin(server, ns);
retVal |= function_namespace_ff_generated_175_begin(server, ns);
retVal |= function_namespace_ff_generated_176_begin(server, ns);
retVal |= function_namespace_ff_generated_177_begin(server, ns);
retVal |= function_namespace_ff_generated_178_begin(server, ns);
retVal |= function_namespace_ff_generated_179_begin(server, ns);
retVal |= function_namespace_ff_generated_180_begin(server, ns);
retVal |= function_namespace_ff_generated_181_begin(server, ns);
retVal |= function_namespace_ff_generated_182_begin(server, ns);
retVal |= function_namespace_ff_generated_183_begin(server, ns);
retVal |= function_namespace_ff_generated_184_begin(server, ns);
retVal |= function_namespace_ff_generated_185_begin(server, ns);
retVal |= function_namespace_ff_generated_186_begin(server, ns);
retVal |= function_namespace_ff_generated_187_begin(server, ns);
retVal |= function_namespace_ff_generated_188_begin(server, ns);
retVal |= function_namespace_ff_generated_189_begin(server, ns);
retVal |= function_namespace_ff_generated_190_begin(server, ns);
retVal |= function_namespace_ff_generated_191_begin(server, ns);
retVal |= function_namespace_ff_generated_192_begin(server, ns);
retVal |= function_namespace_ff_generated_193_begin(server, ns);
retVal |= function_namespace_ff_generated_194_begin(server, ns);
retVal |= function_namespace_ff_generated_195_begin(server, ns);
retVal |= function_namespace_ff_generated_196_begin(server, ns);
retVal |= function_namespace_ff_generated_197_begin(server, ns);
retVal |= function_namespace_ff_generated_198_begin(server, ns);
retVal |= function_namespace_ff_generated_199_begin(server, ns);
retVal |= function_namespace_ff_generated_200_begin(server, ns);
retVal |= function_namespace_ff_generated_201_begin(server, ns);
retVal |= function_namespace_ff_generated_202_begin(server, ns);
retVal |= function_namespace_ff_generated_203_begin(server, ns);
retVal |= function_namespace_ff_generated_204_begin(server, ns);
retVal |= function_namespace_ff_generated_205_begin(server, ns);
retVal |= function_namespace_ff_generated_206_begin(server, ns);
retVal |= function_namespace_ff_generated_207_begin(server, ns);
retVal |= function_namespace_ff_generated_208_begin(server, ns);
retVal |= function_namespace_ff_generated_209_begin(server, ns);
retVal |= function_namespace_ff_generated_210_begin(server, ns);
retVal |= function_namespace_ff_generated_211_begin(server, ns);
retVal |= function_namespace_ff_generated_212_begin(server, ns);
retVal |= function_namespace_ff_generated_213_begin(server, ns);
retVal |= function_namespace_ff_generated_214_begin(server, ns);
retVal |= function_namespace_ff_generated_215_begin(server, ns);
retVal |= function_namespace_ff_generated_216_begin(server, ns);
retVal |= function_namespace_ff_generated_217_begin(server, ns);
retVal |= function_namespace_ff_generated_218_begin(server, ns);
retVal |= function_namespace_ff_generated_219_begin(server, ns);
retVal |= function_namespace_ff_generated_220_begin(server, ns);
retVal |= function_namespace_ff_generated_221_begin(server, ns);
retVal |= function_namespace_ff_generated_222_begin(server, ns);
retVal |= function_namespace_ff_generated_223_begin(server, ns);
retVal |= function_namespace_ff_generated_224_begin(server, ns);
retVal |= function_namespace_ff_generated_225_begin(server, ns);
retVal |= function_namespace_ff_generated_226_begin(server, ns);
retVal |= function_namespace_ff_generated_227_begin(server, ns);
retVal |= function_namespace_ff_generated_228_begin(server, ns);
retVal |= function_namespace_ff_generated_229_begin(server, ns);
retVal |= function_namespace_ff_generated_230_begin(server, ns);
retVal |= function_namespace_ff_generated_231_begin(server, ns);
retVal |= function_namespace_ff_generated_232_begin(server, ns);
retVal |= function_namespace_ff_generated_233_begin(server, ns);
retVal |= function_namespace_ff_generated_234_begin(server, ns);
retVal |= function_namespace_ff_generated_235_begin(server, ns);
retVal |= function_namespace_ff_generated_236_begin(server, ns);
retVal |= function_namespace_ff_generated_237_begin(server, ns);
retVal |= function_namespace_ff_generated_238_begin(server, ns);
retVal |= function_namespace_ff_generated_239_begin(server, ns);
retVal |= function_namespace_ff_generated_240_begin(server, ns);
retVal |= function_namespace_ff_generated_241_begin(server, ns);
retVal |= function_namespace_ff_generated_242_begin(server, ns);
retVal |= function_namespace_ff_generated_243_begin(server, ns);
retVal |= function_namespace_ff_generated_244_begin(server, ns);
retVal |= function_namespace_ff_generated_245_begin(server, ns);
retVal |= function_namespace_ff_generated_246_begin(server, ns);
retVal |= function_namespace_ff_generated_247_begin(server, ns);
retVal |= function_namespace_ff_generated_248_begin(server, ns);
retVal |= function_namespace_ff_generated_249_begin(server, ns);
retVal |= function_namespace_ff_generated_250_begin(server, ns);
retVal |= function_namespace_ff_generated_251_begin(server, ns);
retVal |= function_namespace_ff_generated_252_begin(server, ns);
retVal |= function_namespace_ff_generated_253_begin(server, ns);
retVal |= function_namespace_ff_generated_254_begin(server, ns);
retVal |= function_namespace_ff_generated_255_begin(server, ns);
retVal |= function_namespace_ff_generated_256_begin(server, ns);
retVal |= function_namespace_ff_generated_257_begin(server, ns);
retVal |= function_namespace_ff_generated_258_begin(server, ns);
retVal |= function_namespace_ff_generated_259_begin(server, ns);
retVal |= function_namespace_ff_generated_260_begin(server, ns);
retVal |= function_namespace_ff_generated_261_begin(server, ns);
retVal |= function_namespace_ff_generated_262_begin(server, ns);
retVal |= function_namespace_ff_generated_263_begin(server, ns);
retVal |= function_namespace_ff_generated_264_begin(server, ns);
retVal |= function_namespace_ff_generated_265_begin(server, ns);
retVal |= function_namespace_ff_generated_266_begin(server, ns);
retVal |= function_namespace_ff_generated_267_begin(server, ns);
retVal |= function_namespace_ff_generated_268_begin(server, ns);
retVal |= function_namespace_ff_generated_269_begin(server, ns);
retVal |= function_namespace_ff_generated_270_begin(server, ns);
retVal |= function_namespace_ff_generated_271_begin(server, ns);
retVal |= function_namespace_ff_generated_272_begin(server, ns);
retVal |= function_namespace_ff_generated_273_begin(server, ns);
retVal |= function_namespace_ff_generated_274_begin(server, ns);
retVal |= function_namespace_ff_generated_275_begin(server, ns);
retVal |= function_namespace_ff_generated_276_begin(server, ns);
retVal |= function_namespace_ff_generated_277_begin(server, ns);
retVal |= function_namespace_ff_generated_278_begin(server, ns);
retVal |= function_namespace_ff_generated_279_begin(server, ns);
retVal |= function_namespace_ff_generated_280_begin(server, ns);
retVal |= function_namespace_ff_generated_281_begin(server, ns);
retVal |= function_namespace_ff_generated_282_begin(server, ns);
retVal |= function_namespace_ff_generated_283_begin(server, ns);
retVal |= function_namespace_ff_generated_284_begin(server, ns);
retVal |= function_namespace_ff_generated_285_begin(server, ns);
retVal |= function_namespace_ff_generated_286_begin(server, ns);
retVal |= function_namespace_ff_generated_287_begin(server, ns);
retVal |= function_namespace_ff_generated_288_begin(server, ns);
retVal |= function_namespace_ff_generated_289_begin(server, ns);
retVal |= function_namespace_ff_generated_290_begin(server, ns);
retVal |= function_namespace_ff_generated_291_begin(server, ns);
retVal |= function_namespace_ff_generated_292_begin(server, ns);
retVal |= function_namespace_ff_generated_293_begin(server, ns);
retVal |= function_namespace_ff_generated_294_begin(server, ns);
retVal |= function_namespace_ff_generated_295_begin(server, ns);
retVal |= function_namespace_ff_generated_296_begin(server, ns);
retVal |= function_namespace_ff_generated_297_begin(server, ns);
retVal |= function_namespace_ff_generated_298_begin(server, ns);
retVal |= function_namespace_ff_generated_299_begin(server, ns);
retVal |= function_namespace_ff_generated_300_begin(server, ns);
retVal |= function_namespace_ff_generated_301_begin(server, ns);
retVal |= function_namespace_ff_generated_302_begin(server, ns);
retVal |= function_namespace_ff_generated_303_begin(server, ns);
retVal |= function_namespace_ff_generated_304_begin(server, ns);
retVal |= function_namespace_ff_generated_305_begin(server, ns);
retVal |= function_namespace_ff_generated_306_begin(server, ns);
retVal |= function_namespace_ff_generated_307_begin(server, ns);
retVal |= function_namespace_ff_generated_308_begin(server, ns);
retVal |= function_namespace_ff_generated_309_begin(server, ns);
retVal |= function_namespace_ff_generated_310_begin(server, ns);
retVal |= function_namespace_ff_generated_311_begin(server, ns);
retVal |= function_namespace_ff_generated_312_begin(server, ns);
retVal |= function_namespace_ff_generated_313_begin(server, ns);
retVal |= function_namespace_ff_generated_314_begin(server, ns);
retVal |= function_namespace_ff_generated_315_begin(server, ns);
retVal |= function_namespace_ff_generated_316_begin(server, ns);
retVal |= function_namespace_ff_generated_317_begin(server, ns);
retVal |= function_namespace_ff_generated_318_begin(server, ns);
retVal |= function_namespace_ff_generated_319_begin(server, ns);
retVal |= function_namespace_ff_generated_320_begin(server, ns);
retVal |= function_namespace_ff_generated_321_begin(server, ns);
retVal |= function_namespace_ff_generated_322_begin(server, ns);
retVal |= function_namespace_ff_generated_323_begin(server, ns);
retVal |= function_namespace_ff_generated_323_finish(server, ns);
retVal |= function_namespace_ff_generated_322_finish(server, ns);
retVal |= function_namespace_ff_generated_321_finish(server, ns);
retVal |= function_namespace_ff_generated_320_finish(server, ns);
retVal |= function_namespace_ff_generated_319_finish(server, ns);
retVal |= function_namespace_ff_generated_318_finish(server, ns);
retVal |= function_namespace_ff_generated_317_finish(server, ns);
retVal |= function_namespace_ff_generated_316_finish(server, ns);
retVal |= function_namespace_ff_generated_315_finish(server, ns);
retVal |= function_namespace_ff_generated_314_finish(server, ns);
retVal |= function_namespace_ff_generated_313_finish(server, ns);
retVal |= function_namespace_ff_generated_312_finish(server, ns);
retVal |= function_namespace_ff_generated_311_finish(server, ns);
retVal |= function_namespace_ff_generated_310_finish(server, ns);
retVal |= function_namespace_ff_generated_309_finish(server, ns);
retVal |= function_namespace_ff_generated_308_finish(server, ns);
retVal |= function_namespace_ff_generated_307_finish(server, ns);
retVal |= function_namespace_ff_generated_306_finish(server, ns);
retVal |= function_namespace_ff_generated_305_finish(server, ns);
retVal |= function_namespace_ff_generated_304_finish(server, ns);
retVal |= function_namespace_ff_generated_303_finish(server, ns);
retVal |= function_namespace_ff_generated_302_finish(server, ns);
retVal |= function_namespace_ff_generated_301_finish(server, ns);
retVal |= function_namespace_ff_generated_300_finish(server, ns);
retVal |= function_namespace_ff_generated_299_finish(server, ns);
retVal |= function_namespace_ff_generated_298_finish(server, ns);
retVal |= function_namespace_ff_generated_297_finish(server, ns);
retVal |= function_namespace_ff_generated_296_finish(server, ns);
retVal |= function_namespace_ff_generated_295_finish(server, ns);
retVal |= function_namespace_ff_generated_294_finish(server, ns);
retVal |= function_namespace_ff_generated_293_finish(server, ns);
retVal |= function_namespace_ff_generated_292_finish(server, ns);
retVal |= function_namespace_ff_generated_291_finish(server, ns);
retVal |= function_namespace_ff_generated_290_finish(server, ns);
retVal |= function_namespace_ff_generated_289_finish(server, ns);
retVal |= function_namespace_ff_generated_288_finish(server, ns);
retVal |= function_namespace_ff_generated_287_finish(server, ns);
retVal |= function_namespace_ff_generated_286_finish(server, ns);
retVal |= function_namespace_ff_generated_285_finish(server, ns);
retVal |= function_namespace_ff_generated_284_finish(server, ns);
retVal |= function_namespace_ff_generated_283_finish(server, ns);
retVal |= function_namespace_ff_generated_282_finish(server, ns);
retVal |= function_namespace_ff_generated_281_finish(server, ns);
retVal |= function_namespace_ff_generated_280_finish(server, ns);
retVal |= function_namespace_ff_generated_279_finish(server, ns);
retVal |= function_namespace_ff_generated_278_finish(server, ns);
retVal |= function_namespace_ff_generated_277_finish(server, ns);
retVal |= function_namespace_ff_generated_276_finish(server, ns);
retVal |= function_namespace_ff_generated_275_finish(server, ns);
retVal |= function_namespace_ff_generated_274_finish(server, ns);
retVal |= function_namespace_ff_generated_273_finish(server, ns);
retVal |= function_namespace_ff_generated_272_finish(server, ns);
retVal |= function_namespace_ff_generated_271_finish(server, ns);
retVal |= function_namespace_ff_generated_270_finish(server, ns);
retVal |= function_namespace_ff_generated_269_finish(server, ns);
retVal |= function_namespace_ff_generated_268_finish(server, ns);
retVal |= function_namespace_ff_generated_267_finish(server, ns);
retVal |= function_namespace_ff_generated_266_finish(server, ns);
retVal |= function_namespace_ff_generated_265_finish(server, ns);
retVal |= function_namespace_ff_generated_264_finish(server, ns);
retVal |= function_namespace_ff_generated_263_finish(server, ns);
retVal |= function_namespace_ff_generated_262_finish(server, ns);
retVal |= function_namespace_ff_generated_261_finish(server, ns);
retVal |= function_namespace_ff_generated_260_finish(server, ns);
retVal |= function_namespace_ff_generated_259_finish(server, ns);
retVal |= function_namespace_ff_generated_258_finish(server, ns);
retVal |= function_namespace_ff_generated_257_finish(server, ns);
retVal |= function_namespace_ff_generated_256_finish(server, ns);
retVal |= function_namespace_ff_generated_255_finish(server, ns);
retVal |= function_namespace_ff_generated_254_finish(server, ns);
retVal |= function_namespace_ff_generated_253_finish(server, ns);
retVal |= function_namespace_ff_generated_252_finish(server, ns);
retVal |= function_namespace_ff_generated_251_finish(server, ns);
retVal |= function_namespace_ff_generated_250_finish(server, ns);
retVal |= function_namespace_ff_generated_249_finish(server, ns);
retVal |= function_namespace_ff_generated_248_finish(server, ns);
retVal |= function_namespace_ff_generated_247_finish(server, ns);
retVal |= function_namespace_ff_generated_246_finish(server, ns);
retVal |= function_namespace_ff_generated_245_finish(server, ns);
retVal |= function_namespace_ff_generated_244_finish(server, ns);
retVal |= function_namespace_ff_generated_243_finish(server, ns);
retVal |= function_namespace_ff_generated_242_finish(server, ns);
retVal |= function_namespace_ff_generated_241_finish(server, ns);
retVal |= function_namespace_ff_generated_240_finish(server, ns);
retVal |= function_namespace_ff_generated_239_finish(server, ns);
retVal |= function_namespace_ff_generated_238_finish(server, ns);
retVal |= function_namespace_ff_generated_237_finish(server, ns);
retVal |= function_namespace_ff_generated_236_finish(server, ns);
retVal |= function_namespace_ff_generated_235_finish(server, ns);
retVal |= function_namespace_ff_generated_234_finish(server, ns);
retVal |= function_namespace_ff_generated_233_finish(server, ns);
retVal |= function_namespace_ff_generated_232_finish(server, ns);
retVal |= function_namespace_ff_generated_231_finish(server, ns);
retVal |= function_namespace_ff_generated_230_finish(server, ns);
retVal |= function_namespace_ff_generated_229_finish(server, ns);
retVal |= function_namespace_ff_generated_228_finish(server, ns);
retVal |= function_namespace_ff_generated_227_finish(server, ns);
retVal |= function_namespace_ff_generated_226_finish(server, ns);
retVal |= function_namespace_ff_generated_225_finish(server, ns);
retVal |= function_namespace_ff_generated_224_finish(server, ns);
retVal |= function_namespace_ff_generated_223_finish(server, ns);
retVal |= function_namespace_ff_generated_222_finish(server, ns);
retVal |= function_namespace_ff_generated_221_finish(server, ns);
retVal |= function_namespace_ff_generated_220_finish(server, ns);
retVal |= function_namespace_ff_generated_219_finish(server, ns);
retVal |= function_namespace_ff_generated_218_finish(server, ns);
retVal |= function_namespace_ff_generated_217_finish(server, ns);
retVal |= function_namespace_ff_generated_216_finish(server, ns);
retVal |= function_namespace_ff_generated_215_finish(server, ns);
retVal |= function_namespace_ff_generated_214_finish(server, ns);
retVal |= function_namespace_ff_generated_213_finish(server, ns);
retVal |= function_namespace_ff_generated_212_finish(server, ns);
retVal |= function_namespace_ff_generated_211_finish(server, ns);
retVal |= function_namespace_ff_generated_210_finish(server, ns);
retVal |= function_namespace_ff_generated_209_finish(server, ns);
retVal |= function_namespace_ff_generated_208_finish(server, ns);
retVal |= function_namespace_ff_generated_207_finish(server, ns);
retVal |= function_namespace_ff_generated_206_finish(server, ns);
retVal |= function_namespace_ff_generated_205_finish(server, ns);
retVal |= function_namespace_ff_generated_204_finish(server, ns);
retVal |= function_namespace_ff_generated_203_finish(server, ns);
retVal |= function_namespace_ff_generated_202_finish(server, ns);
retVal |= function_namespace_ff_generated_201_finish(server, ns);
retVal |= function_namespace_ff_generated_200_finish(server, ns);
retVal |= function_namespace_ff_generated_199_finish(server, ns);
retVal |= function_namespace_ff_generated_198_finish(server, ns);
retVal |= function_namespace_ff_generated_197_finish(server, ns);
retVal |= function_namespace_ff_generated_196_finish(server, ns);
retVal |= function_namespace_ff_generated_195_finish(server, ns);
retVal |= function_namespace_ff_generated_194_finish(server, ns);
retVal |= function_namespace_ff_generated_193_finish(server, ns);
retVal |= function_namespace_ff_generated_192_finish(server, ns);
retVal |= function_namespace_ff_generated_191_finish(server, ns);
retVal |= function_namespace_ff_generated_190_finish(server, ns);
retVal |= function_namespace_ff_generated_189_finish(server, ns);
retVal |= function_namespace_ff_generated_188_finish(server, ns);
retVal |= function_namespace_ff_generated_187_finish(server, ns);
retVal |= function_namespace_ff_generated_186_finish(server, ns);
retVal |= function_namespace_ff_generated_185_finish(server, ns);
retVal |= function_namespace_ff_generated_184_finish(server, ns);
retVal |= function_namespace_ff_generated_183_finish(server, ns);
retVal |= function_namespace_ff_generated_182_finish(server, ns);
retVal |= function_namespace_ff_generated_181_finish(server, ns);
retVal |= function_namespace_ff_generated_180_finish(server, ns);
retVal |= function_namespace_ff_generated_179_finish(server, ns);
retVal |= function_namespace_ff_generated_178_finish(server, ns);
retVal |= function_namespace_ff_generated_177_finish(server, ns);
retVal |= function_namespace_ff_generated_176_finish(server, ns);
retVal |= function_namespace_ff_generated_175_finish(server, ns);
retVal |= function_namespace_ff_generated_174_finish(server, ns);
retVal |= function_namespace_ff_generated_173_finish(server, ns);
retVal |= function_namespace_ff_generated_172_finish(server, ns);
retVal |= function_namespace_ff_generated_171_finish(server, ns);
retVal |= function_namespace_ff_generated_170_finish(server, ns);
retVal |= function_namespace_ff_generated_169_finish(server, ns);
retVal |= function_namespace_ff_generated_168_finish(server, ns);
retVal |= function_namespace_ff_generated_167_finish(server, ns);
retVal |= function_namespace_ff_generated_166_finish(server, ns);
retVal |= function_namespace_ff_generated_165_finish(server, ns);
retVal |= function_namespace_ff_generated_164_finish(server, ns);
retVal |= function_namespace_ff_generated_163_finish(server, ns);
retVal |= function_namespace_ff_generated_162_finish(server, ns);
retVal |= function_namespace_ff_generated_161_finish(server, ns);
retVal |= function_namespace_ff_generated_160_finish(server, ns);
retVal |= function_namespace_ff_generated_159_finish(server, ns);
retVal |= function_namespace_ff_generated_158_finish(server, ns);
retVal |= function_namespace_ff_generated_157_finish(server, ns);
retVal |= function_namespace_ff_generated_156_finish(server, ns);
retVal |= function_namespace_ff_generated_155_finish(server, ns);
retVal |= function_namespace_ff_generated_154_finish(server, ns);
retVal |= function_namespace_ff_generated_153_finish(server, ns);
retVal |= function_namespace_ff_generated_152_finish(server, ns);
retVal |= function_namespace_ff_generated_151_finish(server, ns);
retVal |= function_namespace_ff_generated_150_finish(server, ns);
retVal |= function_namespace_ff_generated_149_finish(server, ns);
retVal |= function_namespace_ff_generated_148_finish(server, ns);
retVal |= function_namespace_ff_generated_147_finish(server, ns);
retVal |= function_namespace_ff_generated_146_finish(server, ns);
retVal |= function_namespace_ff_generated_145_finish(server, ns);
retVal |= function_namespace_ff_generated_144_finish(server, ns);
retVal |= function_namespace_ff_generated_143_finish(server, ns);
retVal |= function_namespace_ff_generated_142_finish(server, ns);
retVal |= function_namespace_ff_generated_141_finish(server, ns);
retVal |= function_namespace_ff_generated_140_finish(server, ns);
retVal |= function_namespace_ff_generated_139_finish(server, ns);
retVal |= function_namespace_ff_generated_138_finish(server, ns);
retVal |= function_namespace_ff_generated_137_finish(server, ns);
retVal |= function_namespace_ff_generated_136_finish(server, ns);
retVal |= function_namespace_ff_generated_135_finish(server, ns);
retVal |= function_namespace_ff_generated_134_finish(server, ns);
retVal |= function_namespace_ff_generated_133_finish(server, ns);
retVal |= function_namespace_ff_generated_132_finish(server, ns);
retVal |= function_namespace_ff_generated_131_finish(server, ns);
retVal |= function_namespace_ff_generated_130_finish(server, ns);
retVal |= function_namespace_ff_generated_129_finish(server, ns);
retVal |= function_namespace_ff_generated_128_finish(server, ns);
retVal |= function_namespace_ff_generated_127_finish(server, ns);
retVal |= function_namespace_ff_generated_126_finish(server, ns);
retVal |= function_namespace_ff_generated_125_finish(server, ns);
retVal |= function_namespace_ff_generated_124_finish(server, ns);
retVal |= function_namespace_ff_generated_123_finish(server, ns);
retVal |= function_namespace_ff_generated_122_finish(server, ns);
retVal |= function_namespace_ff_generated_121_finish(server, ns);
retVal |= function_namespace_ff_generated_120_finish(server, ns);
retVal |= function_namespace_ff_generated_119_finish(server, ns);
retVal |= function_namespace_ff_generated_118_finish(server, ns);
retVal |= function_namespace_ff_generated_117_finish(server, ns);
retVal |= function_namespace_ff_generated_116_finish(server, ns);
retVal |= function_namespace_ff_generated_115_finish(server, ns);
retVal |= function_namespace_ff_generated_114_finish(server, ns);
retVal |= function_namespace_ff_generated_113_finish(server, ns);
retVal |= function_namespace_ff_generated_112_finish(server, ns);
retVal |= function_namespace_ff_generated_111_finish(server, ns);
retVal |= function_namespace_ff_generated_110_finish(server, ns);
retVal |= function_namespace_ff_generated_109_finish(server, ns);
retVal |= function_namespace_ff_generated_108_finish(server, ns);
retVal |= function_namespace_ff_generated_107_finish(server, ns);
retVal |= function_namespace_ff_generated_106_finish(server, ns);
retVal |= function_namespace_ff_generated_105_finish(server, ns);
retVal |= function_namespace_ff_generated_104_finish(server, ns);
retVal |= function_namespace_ff_generated_103_finish(server, ns);
retVal |= function_namespace_ff_generated_102_finish(server, ns);
retVal |= function_namespace_ff_generated_101_finish(server, ns);
retVal |= function_namespace_ff_generated_100_finish(server, ns);
retVal |= function_namespace_ff_generated_99_finish(server, ns);
retVal |= function_namespace_ff_generated_98_finish(server, ns);
retVal |= function_namespace_ff_generated_97_finish(server, ns);
retVal |= function_namespace_ff_generated_96_finish(server, ns);
retVal |= function_namespace_ff_generated_95_finish(server, ns);
retVal |= function_namespace_ff_generated_94_finish(server, ns);
retVal |= function_namespace_ff_generated_93_finish(server, ns);
retVal |= function_namespace_ff_generated_92_finish(server, ns);
retVal |= function_namespace_ff_generated_91_finish(server, ns);
retVal |= function_namespace_ff_generated_90_finish(server, ns);
retVal |= function_namespace_ff_generated_89_finish(server, ns);
retVal |= function_namespace_ff_generated_88_finish(server, ns);
retVal |= function_namespace_ff_generated_87_finish(server, ns);
retVal |= function_namespace_ff_generated_86_finish(server, ns);
retVal |= function_namespace_ff_generated_85_finish(server, ns);
retVal |= function_namespace_ff_generated_84_finish(server, ns);
retVal |= function_namespace_ff_generated_83_finish(server, ns);
retVal |= function_namespace_ff_generated_82_finish(server, ns);
retVal |= function_namespace_ff_generated_81_finish(server, ns);
retVal |= function_namespace_ff_generated_80_finish(server, ns);
retVal |= function_namespace_ff_generated_79_finish(server, ns);
retVal |= function_namespace_ff_generated_78_finish(server, ns);
retVal |= function_namespace_ff_generated_77_finish(server, ns);
retVal |= function_namespace_ff_generated_76_finish(server, ns);
retVal |= function_namespace_ff_generated_75_finish(server, ns);
retVal |= function_namespace_ff_generated_74_finish(server, ns);
retVal |= function_namespace_ff_generated_73_finish(server, ns);
retVal |= function_namespace_ff_generated_72_finish(server, ns);
retVal |= function_namespace_ff_generated_71_finish(server, ns);
retVal |= function_namespace_ff_generated_70_finish(server, ns);
retVal |= function_namespace_ff_generated_69_finish(server, ns);
retVal |= function_namespace_ff_generated_68_finish(server, ns);
retVal |= function_namespace_ff_generated_67_finish(server, ns);
retVal |= function_namespace_ff_generated_66_finish(server, ns);
retVal |= function_namespace_ff_generated_65_finish(server, ns);
retVal |= function_namespace_ff_generated_64_finish(server, ns);
retVal |= function_namespace_ff_generated_63_finish(server, ns);
retVal |= function_namespace_ff_generated_62_finish(server, ns);
retVal |= function_namespace_ff_generated_61_finish(server, ns);
retVal |= function_namespace_ff_generated_60_finish(server, ns);
retVal |= function_namespace_ff_generated_59_finish(server, ns);
retVal |= function_namespace_ff_generated_58_finish(server, ns);
retVal |= function_namespace_ff_generated_57_finish(server, ns);
retVal |= function_namespace_ff_generated_56_finish(server, ns);
retVal |= function_namespace_ff_generated_55_finish(server, ns);
retVal |= function_namespace_ff_generated_54_finish(server, ns);
retVal |= function_namespace_ff_generated_53_finish(server, ns);
retVal |= function_namespace_ff_generated_52_finish(server, ns);
retVal |= function_namespace_ff_generated_51_finish(server, ns);
retVal |= function_namespace_ff_generated_50_finish(server, ns);
retVal |= function_namespace_ff_generated_49_finish(server, ns);
retVal |= function_namespace_ff_generated_48_finish(server, ns);
retVal |= function_namespace_ff_generated_47_finish(server, ns);
retVal |= function_namespace_ff_generated_46_finish(server, ns);
retVal |= function_namespace_ff_generated_45_finish(server, ns);
retVal |= function_namespace_ff_generated_44_finish(server, ns);
retVal |= function_namespace_ff_generated_43_finish(server, ns);
retVal |= function_namespace_ff_generated_42_finish(server, ns);
retVal |= function_namespace_ff_generated_41_finish(server, ns);
retVal |= function_namespace_ff_generated_40_finish(server, ns);
retVal |= function_namespace_ff_generated_39_finish(server, ns);
retVal |= function_namespace_ff_generated_38_finish(server, ns);
retVal |= function_namespace_ff_generated_37_finish(server, ns);
retVal |= function_namespace_ff_generated_36_finish(server, ns);
retVal |= function_namespace_ff_generated_35_finish(server, ns);
retVal |= function_namespace_ff_generated_34_finish(server, ns);
retVal |= function_namespace_ff_generated_33_finish(server, ns);
retVal |= function_namespace_ff_generated_32_finish(server, ns);
retVal |= function_namespace_ff_generated_31_finish(server, ns);
retVal |= function_namespace_ff_generated_30_finish(server, ns);
retVal |= function_namespace_ff_generated_29_finish(server, ns);
retVal |= function_namespace_ff_generated_28_finish(server, ns);
retVal |= function_namespace_ff_generated_27_finish(server, ns);
retVal |= function_namespace_ff_generated_26_finish(server, ns);
retVal |= function_namespace_ff_generated_25_finish(server, ns);
retVal |= function_namespace_ff_generated_24_finish(server, ns);
retVal |= function_namespace_ff_generated_23_finish(server, ns);
retVal |= function_namespace_ff_generated_22_finish(server, ns);
retVal |= function_namespace_ff_generated_21_finish(server, ns);
retVal |= function_namespace_ff_generated_20_finish(server, ns);
retVal |= function_namespace_ff_generated_19_finish(server, ns);
retVal |= function_namespace_ff_generated_18_finish(server, ns);
retVal |= function_namespace_ff_generated_17_finish(server, ns);
retVal |= function_namespace_ff_generated_16_finish(server, ns);
retVal |= function_namespace_ff_generated_15_finish(server, ns);
retVal |= function_namespace_ff_generated_14_finish(server, ns);
retVal |= function_namespace_ff_generated_13_finish(server, ns);
retVal |= function_namespace_ff_generated_12_finish(server, ns);
retVal |= function_namespace_ff_generated_11_finish(server, ns);
retVal |= function_namespace_ff_generated_10_finish(server, ns);
retVal |= function_namespace_ff_generated_9_finish(server, ns);
retVal |= function_namespace_ff_generated_8_finish(server, ns);
retVal |= function_namespace_ff_generated_7_finish(server, ns);
retVal |= function_namespace_ff_generated_6_finish(server, ns);
return retVal;
}
