#include <open62541/client_config_default.h>
#include <open62541/client_highlevel.h>
#include <open62541/plugin/log_stdout.h>

#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#include <mosquitto.h>
#include <cjson/cJSON.h>

double tags [28];

void on_connect(struct mosquitto *mosq, void *obj, int rc) {
	printf("ID: %d\n", * (int *) obj);
	if(rc) {
		printf("Error with result code: %d\n", rc);
		exit(-1);
	}
	mosquitto_subscribe(mosq, NULL, "data-synch", 0);
}

void on_message(struct mosquitto *mosq, void *obj, const struct mosquitto_message *msg) {
	
	//printf("New message with topic %s: %s\n", msg->topic, (char *) msg->payload);
	char *data = (char *) msg->payload;
//	printf(data);
	cJSON *root = cJSON_Parse(data);
	if (root == NULL) {
		fprintf(stderr, "Error parsing JSON: %s\n", cJSON_GetErrorPtr());		
	}
	cJSON *VFD1_Temperature = cJSON_GetObjectItemCaseSensitive(root, "Q_VFD1_Temperature");
	cJSON *VFD2_Temperature = cJSON_GetObjectItemCaseSensitive(root, "Q_VFD2_Temperature");
	cJSON *VFD3_Temperature = cJSON_GetObjectItemCaseSensitive(root, "Q_VFD3_Temperature");
	cJSON *VFD4_Temperature = cJSON_GetObjectItemCaseSensitive(root, "Q_VFD4_Temperature");
	cJSON *R01_JointAngleS = cJSON_GetObjectItemCaseSensitive(root, "M_R01_SJointAngle_Degree");
	cJSON *R01_JointAngleL = cJSON_GetObjectItemCaseSensitive(root, "M_R01_LJointAngle_Degree");
	cJSON *R01_JointAngleR = cJSON_GetObjectItemCaseSensitive(root, "M_R01_RJointAngle_Degree");
	cJSON *R01_JointAngleU = cJSON_GetObjectItemCaseSensitive(root, "M_R01_UJointAngle_Degree");
	cJSON *R01_JointAngleB = cJSON_GetObjectItemCaseSensitive(root, "M_R01_BJointAngle_Degree");
	cJSON *R01_JointAngleT = cJSON_GetObjectItemCaseSensitive(root, "M_R01_TJointAngle_Degree");
	cJSON *R02_JointAngleS = cJSON_GetObjectItemCaseSensitive(root, "M_R02_SJointAngle_Degree");
	cJSON *R02_JointAngleL = cJSON_GetObjectItemCaseSensitive(root, "M_R02_LJointAngle_Degree");
	cJSON *R02_JointAngleR = cJSON_GetObjectItemCaseSensitive(root, "M_R02_RJointAngle_Degree");
	cJSON *R02_JointAngleU = cJSON_GetObjectItemCaseSensitive(root, "M_R02_UJointAngle_Degree");
	cJSON *R02_JointAngleB = cJSON_GetObjectItemCaseSensitive(root, "M_R02_BJointAngle_Degree");
	cJSON *R02_JointAngleT = cJSON_GetObjectItemCaseSensitive(root, "M_R02_TJointAngle_Degree");
	cJSON *R03_JointAngleS = cJSON_GetObjectItemCaseSensitive(root, "M_R03_SJointAngle_Degree");
	cJSON *R03_JointAngleL = cJSON_GetObjectItemCaseSensitive(root, "M_R03_LJointAngle_Degree");
	cJSON *R03_JointAngleR = cJSON_GetObjectItemCaseSensitive(root, "M_R03_RJointAngle_Degree");
	cJSON *R03_JointAngleU = cJSON_GetObjectItemCaseSensitive(root, "M_R03_UJointAngle_Degree");
	cJSON *R03_JointAngleB = cJSON_GetObjectItemCaseSensitive(root, "M_R03_BJointAngle_Degree");
	cJSON *R03_JointAngleT = cJSON_GetObjectItemCaseSensitive(root, "M_R03_TJointAngle_Degree");
	cJSON *R04_JointAngleS = cJSON_GetObjectItemCaseSensitive(root, "M_R04_SJointAngle_Degree");
	cJSON *R04_JointAngleL = cJSON_GetObjectItemCaseSensitive(root, "M_R04_LJointAngle_Degree");
	cJSON *R04_JointAngleR = cJSON_GetObjectItemCaseSensitive(root, "M_R04_RJointAngle_Degree");
	cJSON *R04_JointAngleU = cJSON_GetObjectItemCaseSensitive(root, "M_R04_UJointAngle_Degree");
	cJSON *R04_JointAngleB = cJSON_GetObjectItemCaseSensitive(root, "M_R04_BJointAngle_Degree");
	cJSON *R04_JointAngleT = cJSON_GetObjectItemCaseSensitive(root, "M_R04_TJointAngle_Degree");
	
	if (cJSON_IsNumber(VFD1_Temperature) && cJSON_IsNumber(VFD2_Temperature) && cJSON_IsNumber(VFD3_Temperature) && cJSON_IsNumber(VFD4_Temperature) && cJSON_IsNumber(R01_JointAngleS) && cJSON_IsNumber(R01_JointAngleL) && cJSON_IsNumber(R01_JointAngleR) && cJSON_IsNumber(R01_JointAngleU) && cJSON_IsNumber(R01_JointAngleB) && cJSON_IsNumber(R01_JointAngleT) && cJSON_IsNumber(R02_JointAngleS) && cJSON_IsNumber(R02_JointAngleL) && cJSON_IsNumber(R02_JointAngleR) && cJSON_IsNumber(R02_JointAngleU) && cJSON_IsNumber(R02_JointAngleB) && cJSON_IsNumber(R02_JointAngleT) && cJSON_IsNumber(R03_JointAngleS) && cJSON_IsNumber(R03_JointAngleL) && cJSON_IsNumber(R03_JointAngleR) && cJSON_IsNumber(R03_JointAngleU) && cJSON_IsNumber(R03_JointAngleB) && cJSON_IsNumber(R03_JointAngleT) && cJSON_IsNumber(R04_JointAngleS) && cJSON_IsNumber(R04_JointAngleL) && cJSON_IsNumber(R04_JointAngleR) && cJSON_IsNumber(R04_JointAngleU) && cJSON_IsNumber(R04_JointAngleB) && cJSON_IsNumber(R04_JointAngleT)){
		
		key_t key = ftok("shared_memory_key", 1);
		int shmid = shmget(key, sizeof(float), IPC_CREAT | 0666);	
		float *tags_ptr = (float *)shmat(shmid, NULL, 0);
		
		for(int i=0; i < 28; i++){
			if (i==0){
				tags[i] = VFD1_Temperature->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==1){
				tags[i] = VFD2_Temperature->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==2){
				tags[i] = VFD3_Temperature->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==3){
				tags[i] = VFD4_Temperature->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==4){
				tags[i] = R01_JointAngleS->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==5){
				tags[i] = R01_JointAngleL->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==6){
				tags[i] = R01_JointAngleR->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==7){
				tags[i] = R01_JointAngleU->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==8){
				tags[i] = R01_JointAngleB->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==9){
				tags[i] = R01_JointAngleT->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==10){
				tags[i] = R02_JointAngleS->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==11){
				tags[i] = R02_JointAngleL->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==12){
				tags[i] = R02_JointAngleR->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==13){
				tags[i] = R02_JointAngleU->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==14){
				tags[i] = R02_JointAngleB->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==15){
				tags[i] = R02_JointAngleT->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==16){
				tags[i] = R03_JointAngleS->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==17){
				tags[i] = R03_JointAngleL->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==18){
				tags[i] = R03_JointAngleR->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==19){
				tags[i] = R03_JointAngleU->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==20){
				tags[i] = R03_JointAngleB->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==21){
				tags[i] = R03_JointAngleT->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==22){
				tags[i] = R04_JointAngleS->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==23){
				tags[i] = R04_JointAngleL->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==24){
				tags[i] = R04_JointAngleR->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==25){
				tags[i] = R04_JointAngleU->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==26){
				tags[i] = R04_JointAngleB->valuedouble;
				tags_ptr[i] = tags[i];
			}
			if (i==27){
				tags[i] = R04_JointAngleT->valuedouble;
				tags_ptr[i] = tags[i];
			}
			//printf("%f", tags[i]);
		}					
		shmdt(tags_ptr);		
	}	
	else {
		fprintf(stderr, "Error retrieving values from JSON object.\n");
	}
}

int main() {
		
	int rc, id=12;

	mosquitto_lib_init();

	struct mosquitto *mosq;

	mosq = mosquitto_new("subscribe-test", true, &id);
	mosquitto_connect_callback_set(mosq, on_connect);
	mosquitto_message_callback_set(mosq, on_message);
	
	
	
	rc = mosquitto_connect(mosq, "mqtt.eclipseprojects.io", 1883, 10);
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

