/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "namespace_mvi_generated.h"


/* https://nextusc.com/UA/MVI - ns=1;i=5001 */

static UA_StatusCode function_namespace_mvi_generated_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "https://nextusc.com/UA/MVI");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[1], 5001LU),UA_NODEID_NUMERIC(ns[0], 11715LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "https://nextusc.com/UA/MVI"),UA_NODEID_NUMERIC(ns[0], 11616LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_mvi_generated_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 5001LU));
}

/* StaticStringNodeIdPattern - ns=1;i=6012 */

static UA_StatusCode function_namespace_mvi_generated_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticStringNodeIdPattern");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 6012LU),UA_NODEID_NUMERIC(ns[1], 5001LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "StaticStringNodeIdPattern"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_mvi_generated_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 6012LU));
}

/* StaticNumericNodeIdRange - ns=1;i=6011 */

static UA_StatusCode function_namespace_mvi_generated_2_begin(UA_Server *server, UA_UInt16* ns) {
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
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 6011LU),UA_NODEID_NUMERIC(ns[1], 5001LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "StaticNumericNodeIdRange"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_mvi_generated_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 6011LU));
}

/* StaticNodeIdTypes - ns=1;i=6010 */

static UA_StatusCode function_namespace_mvi_generated_3_begin(UA_Server *server, UA_UInt16* ns) {
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
UA_Int32 variablenode_ns_1_i_6010_variant_DataContents[2];
variablenode_ns_1_i_6010_variant_DataContents[0] = (UA_Int32) 0;
variablenode_ns_1_i_6010_variant_DataContents[1] = (UA_Int32) 1;
UA_Variant_setArray(&attr.value, &variablenode_ns_1_i_6010_variant_DataContents, (UA_Int32) 2, &UA_TYPES[UA_TYPES_IDTYPE]);
attr.displayName = UA_LOCALIZEDTEXT("", "StaticNodeIdTypes");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 6010LU),UA_NODEID_NUMERIC(ns[1], 5001LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "StaticNodeIdTypes"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_mvi_generated_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 6010LU));
}

/* NamespaceVersion - ns=1;i=6009 */

static UA_StatusCode function_namespace_mvi_generated_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_6009_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_6009_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_6009_variant_DataContents);
*variablenode_ns_1_i_6009_variant_DataContents = UA_STRING_ALLOC("1.0.0");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6009_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceVersion");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 6009LU),UA_NODEID_NUMERIC(ns[1], 5001LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "NamespaceVersion"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6009_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_mvi_generated_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 6009LU));
}

/* NamespaceUri - ns=1;i=6008 */

static UA_StatusCode function_namespace_mvi_generated_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_1_i_6008_variant_DataContents =  UA_String_new();
if (!variablenode_ns_1_i_6008_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_1_i_6008_variant_DataContents);
*variablenode_ns_1_i_6008_variant_DataContents = UA_STRING_ALLOC("https://nextusc.com/UA/MVI");
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6008_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespaceUri");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 6008LU),UA_NODEID_NUMERIC(ns[1], 5001LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "NamespaceUri"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_1_i_6008_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_mvi_generated_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 6008LU));
}

/* NamespacePublicationDate - ns=1;i=6007 */

static UA_StatusCode function_namespace_mvi_generated_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 13LU);
UA_DateTime *variablenode_ns_1_i_6007_variant_DataContents =  UA_DateTime_new();
if (!variablenode_ns_1_i_6007_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_DateTime_init(variablenode_ns_1_i_6007_variant_DataContents);
*variablenode_ns_1_i_6007_variant_DataContents = ( (UA_DateTime)(1705952872000 * UA_DATETIME_MSEC) + UA_DATETIME_UNIX_EPOCH);
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6007_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "NamespacePublicationDate");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 6007LU),UA_NODEID_NUMERIC(ns[1], 5001LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "NamespacePublicationDate"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_DateTime_delete(variablenode_ns_1_i_6007_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_mvi_generated_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 6007LU));
}

/* IsNamespaceSubset - ns=1;i=6006 */

static UA_StatusCode function_namespace_mvi_generated_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_1_i_6006_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_1_i_6006_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_1_i_6006_variant_DataContents);
*variablenode_ns_1_i_6006_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_6006_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "IsNamespaceSubset");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 6006LU),UA_NODEID_NUMERIC(ns[1], 5001LU),UA_NODEID_NUMERIC(ns[0], 46LU),UA_QUALIFIEDNAME(ns[0], "IsNamespaceSubset"),UA_NODEID_NUMERIC(ns[0], 68LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_1_i_6006_variant_DataContents);
return retVal;
}

static UA_StatusCode function_namespace_mvi_generated_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 6006LU));
}

/* RocketTray - ns=1;i=5006 */

static UA_StatusCode function_namespace_mvi_generated_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "RocketTray");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[1], 5006LU),UA_NODEID_NUMERIC(ns[0], 85LU),UA_NODEID_NUMERIC(ns[0], 35LU),UA_QUALIFIEDNAME(ns[1], "RocketTray"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_mvi_generated_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 5006LU));
}

/* Config_Correct - ns=1;i=6003 */

static UA_StatusCode function_namespace_mvi_generated_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Config_Correct");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 6003LU),UA_NODEID_NUMERIC(ns[1], 5006LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Config_Correct"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_mvi_generated_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 6003LU));
}

/* Color - ns=1;i=6001 */

static UA_StatusCode function_namespace_mvi_generated_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 3;
/* Value rank inherited */
attr.valueRank = -2;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
attr.displayName = UA_LOCALIZEDTEXT("", "Color");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,UA_NODEID_NUMERIC(ns[1], 6001LU),UA_NODEID_NUMERIC(ns[1], 5006LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Color"),UA_NODEID_NUMERIC(ns[0], 63LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_mvi_generated_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 6001LU));
}

/* Rocket_Nose - ns=1;i=5010 */

static UA_StatusCode function_namespace_mvi_generated_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Rocket_Nose");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[1], 5010LU),UA_NODEID_NUMERIC(ns[1], 5006LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Rocket_Nose"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_mvi_generated_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 5010LU));
}

/* Rocket_MidHigh - ns=1;i=5009 */

static UA_StatusCode function_namespace_mvi_generated_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Rocket_MidHigh");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[1], 5009LU),UA_NODEID_NUMERIC(ns[1], 5006LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Rocket_MidHigh"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_mvi_generated_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 5009LU));
}

/* Rocket_MidLow - ns=1;i=5008 */

static UA_StatusCode function_namespace_mvi_generated_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Rocket_MidLow");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[1], 5008LU),UA_NODEID_NUMERIC(ns[1], 5006LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Rocket_MidLow"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_mvi_generated_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 5008LU));
}

/* Rocket_Base - ns=1;i=5007 */

static UA_StatusCode function_namespace_mvi_generated_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "Rocket_Base");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,UA_NODEID_NUMERIC(ns[1], 5007LU),UA_NODEID_NUMERIC(ns[1], 5006LU),UA_NODEID_NUMERIC(ns[0], 47LU),UA_QUALIFIEDNAME(ns[1], "Rocket_Base"),UA_NODEID_NUMERIC(ns[0], 58LU),(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_namespace_mvi_generated_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, UA_NODEID_NUMERIC(ns[1], 5007LU));
}

UA_StatusCode namespace_mvi_generated(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[2];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "https://nextusc.com/UA/MVI");

/* Load custom datatype definitions into the server */
retVal |= function_namespace_mvi_generated_0_begin(server, ns);
retVal |= function_namespace_mvi_generated_1_begin(server, ns);
retVal |= function_namespace_mvi_generated_2_begin(server, ns);
retVal |= function_namespace_mvi_generated_3_begin(server, ns);
retVal |= function_namespace_mvi_generated_4_begin(server, ns);
retVal |= function_namespace_mvi_generated_5_begin(server, ns);
retVal |= function_namespace_mvi_generated_6_begin(server, ns);
retVal |= function_namespace_mvi_generated_7_begin(server, ns);
retVal |= function_namespace_mvi_generated_8_begin(server, ns);
retVal |= function_namespace_mvi_generated_9_begin(server, ns);
retVal |= function_namespace_mvi_generated_10_begin(server, ns);
retVal |= function_namespace_mvi_generated_11_begin(server, ns);
retVal |= function_namespace_mvi_generated_12_begin(server, ns);
retVal |= function_namespace_mvi_generated_13_begin(server, ns);
retVal |= function_namespace_mvi_generated_14_begin(server, ns);
retVal |= function_namespace_mvi_generated_14_finish(server, ns);
retVal |= function_namespace_mvi_generated_13_finish(server, ns);
retVal |= function_namespace_mvi_generated_12_finish(server, ns);
retVal |= function_namespace_mvi_generated_11_finish(server, ns);
retVal |= function_namespace_mvi_generated_10_finish(server, ns);
retVal |= function_namespace_mvi_generated_9_finish(server, ns);
retVal |= function_namespace_mvi_generated_8_finish(server, ns);
retVal |= function_namespace_mvi_generated_7_finish(server, ns);
retVal |= function_namespace_mvi_generated_6_finish(server, ns);
retVal |= function_namespace_mvi_generated_5_finish(server, ns);
retVal |= function_namespace_mvi_generated_4_finish(server, ns);
retVal |= function_namespace_mvi_generated_3_finish(server, ns);
retVal |= function_namespace_mvi_generated_2_finish(server, ns);
retVal |= function_namespace_mvi_generated_1_finish(server, ns);
retVal |= function_namespace_mvi_generated_0_finish(server, ns);
return retVal;
}
