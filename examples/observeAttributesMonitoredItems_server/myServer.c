
// Observing Attributes with Local MonitoredItems

/*
A client that is interested in the current value of a variable does not need to regularly poll the variable. Instead, the client can use the Subscription mechanism to be notified about changes.

So-called MonitoredItems define which values (node attributes) and events the client wants to monitor. Under the right conditions, a notification is created and added to the Subscription. The notifications currently in the queue are regularly sent to the client.

The local user can add MonitoredItems as well. Locally, the MonitoredItems do not go via a Subscription and each have an individual callback method and a context pointer.
*/

#include <open62541/client_subscriptions.h>
#include <open62541/plugin/log_stdout.h>
#include <open62541/server.h>
#include <open62541/server_config_default.h>

#include <signal.h>
#include <stdlib.h>

static void
dataChangeNotificationCallback(UA_Server *server, UA_UInt32 monitoredItemId,
				void *monitoredItemContext, const UA_NodeId *nodeId,
				void *nodeContext, UA_UInt32 attributeId,
				const UA_DataValue *value) {
	UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Received Notification");
}

static void
addMonitoredItemToCurrentTimeVariable(UA_Server *server) {
	UA_NodeId currentTimeNodeId = UA_NODEID_NUMERIC(0,UA_NS0ID_SERVER_SERVERSTATUS_CURRENTTIME);
	UA_MonitoredItemCreateRequest monRequest = UA_MonitoredItemCreateRequest_default(currentTimeNodeId);
	monRequest.requestedParameters.samplingInterval = 100.0; /* 100ms interval */
	UA_Server_createDataChangeMonitoredItem(server, UA_TIMESTAMPSTORETURN_SOURCE, monRequest, NULL, dataChangeNotificationCallback);
}

static volatile UA_Boolean running = true;
static void stopHandler(int sign) {
	UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
	running = false;
}

int main(void) {
	signal(SIGINT, stopHandler);
	signal(SIGTERM, stopHandler);
	
	UA_Server *server = UA_Server_new();
	UA_ServerConfig_setDefault(UA_Server_getConfig(server));
	
	addMonitoredItemToCurrentTimeVariable(server);
	
	UA_StatusCode retval = UA_Server_run(server, &running);
	UA_Server_delete(server);
	
	return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}
