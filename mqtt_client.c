#include <open62541/client_config_default.h>
#include <open62541/client_highlevel.h>
#include <open62541/plugin/log_stdout.h>

#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#include <mosquitto.h>
#include <cjson/cJSON.h>

bool config_correct;

void on_connect(struct mosquitto *mosq, void *obj, int rc) {
	printf("ID: %d\n", * (int *) obj);
	if(rc) {
		printf("Error with result code: %d\n", rc);
		exit(-1);
	}
	mosquitto_subscribe(mosq, NULL, "start_tray", 0);
}

void on_message(struct mosquitto *mosq, void *obj, const struct mosquitto_message *msg) {
	
	printf("New message with topic %s: %s\n", msg->topic, (char *) msg->payload);
	char *data = (char *) msg->payload;
//	printf(data);
	cJSON *root = cJSON_Parse(data);
	if (root == NULL) {
		fprintf(stderr, "Error parsing JSON: %s\n", cJSON_GetErrorPtr());		
	}
/*	cJSON *correctconfig = cJSON_GetObjectItemCaseSensitive(root, "Config_Correct");

	
	if (cJSON_IsTrue(correctconfig)){
		
		key_t key = ftok("shared_memory_key", 1);
		int shmid = shmget(key, sizeof(bool), IPC_CREAT | 0666);	
		bool *correctconfig_ptr = (bool *)shmat(shmid, NULL, 0);	
		shmdt(correctconfig_ptr);		
	}	
	else if(cJSON_IsFalse(correctconfig)){
		key_t key = ftok("shared_memory_key", 1);
		int shmid = shmget(key, sizeof(bool), IPC_CREAT | 0666);	
		bool *correctconfig_ptr = (bool *)shmat(shmid, NULL, 0);	
		shmdt(correctconfig_ptr);
	}
	else {
		fprintf(stderr, "Error retrieving values from JSON object.\n");
	}*/
}

int main() {
		
	int rc, id=12;

	mosquitto_lib_init();

	struct mosquitto *mosq;

	mosq = mosquitto_new("subscribe-test", true, &id);
	mosquitto_connect_callback_set(mosq, on_connect);
	mosquitto_message_callback_set(mosq, on_message);
	
	
	
	rc = mosquitto_connect(mosq, "test.mosquitto.org", 1883, 10);
	if(rc) {
		printf("Could not connect to Broker with return code %d\n", rc);
		return -1;
	}

	mosquitto_loop_start(mosq);
	printf("Press Enter to quit...\n");
	getchar();
	mosquitto_loop_stop(mosq, true);

	mosquitto_disconnect(mosq);
	mosquitto_destroy(mosq);
	mosquitto_lib_cleanup();

	return 0;
}

