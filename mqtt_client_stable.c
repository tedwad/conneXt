#include <open62541/client_config_default.h>
#include <open62541/client_highlevel.h>
#include <open62541/plugin/log_stdout.h>

#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#include <mosquitto.h>
#include <cjson/cJSON.h>

UA_Double Q_VFD1_Temperature;
UA_Double Q_VFD2_Temperature;
UA_Double Q_VFD3_Temperature;
UA_Double Q_VFD4_Temperature;
UA_Double M_R01_SJointAngle_Degree;
UA_Double M_R01_LJointAngle_Degree;
UA_Double M_R01_RJointAngle_Degree;
UA_Double M_R01_UJointAngle_Degree;
UA_Double M_R01_BJointAngle_Degree;
UA_Double M_R01_TJointAngle_Degree;
UA_Double M_R02_SJointAngle_Degree;
UA_Double M_R02_LJointAngle_Degree;
UA_Double M_R02_RJointAngle_Degree;
UA_Double M_R02_UJointAngle_Degree;
UA_Double M_R02_BJointAngle_Degree;
UA_Double M_R02_TJointAngle_Degree;
UA_Double M_R03_SJointAngle_Degree;
UA_Double M_R03_LJointAngle_Degree;
UA_Double M_R03_RJointAngle_Degree;
UA_Double M_R03_UJointAngle_Degree;
UA_Double M_R03_BJointAngle_Degree;
UA_Double M_R03_TJointAngle_Degree;
UA_Double M_R04_SJointAngle_Degree;
UA_Double M_R04_LJointAngle_Degree;
UA_Double M_R04_RJointAngle_Degree;
UA_Double M_R04_UJointAngle_Degree;
UA_Double M_R04_BJointAngle_Degree;
UA_Double M_R04_TJointAngle_Degree;

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
	//printf(data);
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

	key_t key_Q_VFD1_Temperature = ftok("shared_memory", 1);
	int shmid_Q_VFD1_Temperature = shmget(key_Q_VFD1_Temperature, sizeof(float), IPC_CREAT | 0666);	
	float *Q_VFD1_Temperature_ptr = (float *)shmat(shmid_Q_VFD1_Temperature, NULL, 0);	
	Q_VFD1_Temperature = VFD1_Temperature->valuedouble;
	*Q_VFD1_Temperature_ptr = Q_VFD1_Temperature;
	printf("%f\n", *Q_VFD1_Temperature_ptr);			
	shmdt(Q_VFD1_Temperature_ptr);	
/*	
	key_t key_Q_VFD2_Temperature = ftok("shared_memory", 2);
	int shmid_Q_VFD2_Temperature = shmget(key_Q_VFD2_Temperature, sizeof(float), IPC_CREAT | 0666);
	float *Q_VFD2_Temperature_ptr = (float *)shmat(shmid_Q_VFD2_Temperature, NULL, 0);	
	Q_VFD2_Temperature = VFD2_Temperature->valuedouble;
	*Q_VFD2_Temperature_ptr = Q_VFD2_Temperature;	
//	shmdt(Q_VFD2_Temperature_ptr);
	
	key_t key_Q_VFD3_Temperature = ftok("shared_memory", 3);
	int shmid_Q_VFD3_Temperature = shmget(key_Q_VFD3_Temperature, sizeof(float), IPC_CREAT | 0666);
	float *Q_VFD3_Temperature_ptr = (float *)shmat(shmid_Q_VFD3_Temperature, NULL, 0);
	Q_VFD3_Temperature = VFD3_Temperature->valuedouble;
	*Q_VFD3_Temperature_ptr = Q_VFD3_Temperature;	
//	shmdt(Q_VFD3_Temperature_ptr);
	
	key_t key_Q_VFD4_Temperature = ftok("shared_memory", 4);
	int shmid_Q_VFD4_Temperature = shmget(key_Q_VFD4_Temperature, sizeof(float), IPC_CREAT | 0666);
	float *Q_VFD4_Temperature_ptr = (float *)shmat(shmid_Q_VFD4_Temperature, NULL, 0);
	Q_VFD4_Temperature = VFD4_Temperature->valuedouble;
	*Q_VFD4_Temperature_ptr = Q_VFD4_Temperature;	
//	shmdt(Q_VFD4_Temperature_ptr);
	
	key_t key_M_R01_SJointAngle_Degree = ftok("shared_memory", 5);
	int shmid_M_R01_SJointAngle_Degree = shmget(key_M_R01_SJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R01_SJointAngle_Degree_ptr = (float *)shmat(shmid_M_R01_SJointAngle_Degree, NULL, 0);
	M_R01_SJointAngle_Degree = R01_JointAngleS->valuedouble;
	*M_R01_SJointAngle_Degree_ptr = M_R01_SJointAngle_Degree;
	printf("%f\n", *M_R01_SJointAngle_Degree_ptr);	
//	shmdt(M_R01_SJointAngle_Degree_ptr);
	
	key_t key_M_R01_LJointAngle_Degree = ftok("shared_memory", 6);
	int shmid_M_R01_LJointAngle_Degree = shmget(key_M_R01_LJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R01_LJointAngle_Degree_ptr = (float *)shmat(shmid_M_R01_LJointAngle_Degree, NULL, 0);
	M_R01_LJointAngle_Degree = R01_JointAngleL->valuedouble;
	*M_R01_LJointAngle_Degree_ptr = M_R01_LJointAngle_Degree;
//	shmdt(M_R01_LJointAngle_Degree_ptr);
	
	key_t key_M_R01_RJointAngle_Degree = ftok("shared_memory", 7);
	int shmid_M_R01_RJointAngle_Degree = shmget(key_M_R01_RJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R01_RJointAngle_Degree_ptr = (float *)shmat(shmid_M_R01_RJointAngle_Degree, NULL, 0);
	M_R01_RJointAngle_Degree = R01_JointAngleR->valuedouble;
	*M_R01_RJointAngle_Degree_ptr = M_R01_RJointAngle_Degree;
//	shmdt(M_R01_RJointAngle_Degree_ptr);
	
	key_t key_M_R01_UJointAngle_Degree = ftok("shared_memory", 8);
	int shmid_M_R01_UJointAngle_Degree = shmget(key_M_R01_UJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R01_UJointAngle_Degree_ptr = (float *)shmat(shmid_M_R01_UJointAngle_Degree, NULL, 0);
	M_R01_UJointAngle_Degree = R01_JointAngleU->valuedouble;
	*M_R01_UJointAngle_Degree_ptr = M_R01_UJointAngle_Degree;
//	shmdt(M_R01_UJointAngle_Degree_ptr);
	
	key_t key_M_R01_BJointAngle_Degree = ftok("shared_memory", 9);
	int shmid_M_R01_BJointAngle_Degree = shmget(key_M_R01_BJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R01_BJointAngle_Degree_ptr = (float *)shmat(shmid_M_R01_BJointAngle_Degree, NULL, 0);
	M_R01_BJointAngle_Degree = R01_JointAngleB->valuedouble;
	*M_R01_BJointAngle_Degree_ptr = M_R01_BJointAngle_Degree;
//	shmdt(M_R01_BJointAngle_Degree_ptr);
	
	key_t key_M_R01_TJointAngle_Degree = ftok("shared_memory", 10);
	int shmid_M_R01_TJointAngle_Degree = shmget(key_M_R01_TJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R01_TJointAngle_Degree_ptr = (float *)shmat(shmid_M_R01_TJointAngle_Degree, NULL, 0);
	M_R01_TJointAngle_Degree = R01_JointAngleT->valuedouble;
	*M_R01_TJointAngle_Degree_ptr = M_R01_TJointAngle_Degree;
//	shmdt(M_R01_TJointAngle_Degree_ptr);
	
	key_t key_M_R02_SJointAngle_Degree = ftok("shared_memory", 11);
	int shmid_M_R02_SJointAngle_Degree = shmget(key_M_R02_SJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R02_SJointAngle_Degree_ptr = (float *)shmat(shmid_M_R02_SJointAngle_Degree, NULL, 0);
	M_R02_SJointAngle_Degree = R02_JointAngleS->valuedouble;
	*M_R02_SJointAngle_Degree_ptr = M_R02_SJointAngle_Degree;
//	shmdt(M_R02_SJointAngle_Degree_ptr);
	
	key_t key_M_R02_LJointAngle_Degree = ftok("shared_memory_key_M_R02_LJointAngle_Degree", 12);
	int shmid_M_R02_LJointAngle_Degree = shmget(key_M_R02_LJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R02_LJointAngle_Degree_ptr = (float *)shmat(shmid_M_R02_LJointAngle_Degree, NULL, 0);
	M_R02_LJointAngle_Degree = R02_JointAngleL->valuedouble;
	*M_R02_LJointAngle_Degree_ptr = M_R02_LJointAngle_Degree;
//	shmdt(M_R02_LJointAngle_Degree_ptr);
	
	key_t key_M_R02_RJointAngle_Degree = ftok("shared_memory", 13);
	int shmid_M_R02_RJointAngle_Degree = shmget(key_M_R02_RJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R02_RJointAngle_Degree_ptr = (float *)shmat(shmid_M_R02_RJointAngle_Degree, NULL, 0);
	M_R02_RJointAngle_Degree = R02_JointAngleR->valuedouble;
	*M_R02_RJointAngle_Degree_ptr = M_R02_RJointAngle_Degree;
//	shmdt(M_R02_RJointAngle_Degree_ptr);
	
	key_t key_M_R02_UJointAngle_Degree = ftok("shared_memory", 14);
	int shmid_M_R02_UJointAngle_Degree = shmget(key_M_R02_UJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R02_UJointAngle_Degree_ptr = (float *)shmat(shmid_M_R02_UJointAngle_Degree, NULL, 0);
	M_R02_UJointAngle_Degree = R02_JointAngleU->valuedouble;
	*M_R02_UJointAngle_Degree_ptr = M_R02_UJointAngle_Degree;
//	shmdt(M_R02_UJointAngle_Degree_ptr);
	
	key_t key_M_R02_BJointAngle_Degree = ftok("shared_memory", 15);
	int shmid_M_R02_BJointAngle_Degree = shmget(key_M_R02_BJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R02_BJointAngle_Degree_ptr = (float *)shmat(shmid_M_R02_BJointAngle_Degree, NULL, 0);
	M_R02_BJointAngle_Degree = R02_JointAngleB->valuedouble;
	*M_R02_BJointAngle_Degree_ptr = M_R02_BJointAngle_Degree;
//	shmdt(M_R02_BJointAngle_Degree_ptr);
	
	key_t key_M_R02_TJointAngle_Degree = ftok("shared_memory", 16);
	int shmid_M_R02_TJointAngle_Degree = shmget(key_M_R02_TJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R02_TJointAngle_Degree_ptr = (float *)shmat(shmid_M_R02_TJointAngle_Degree, NULL, 0);
	M_R02_TJointAngle_Degree = R02_JointAngleT->valuedouble;
	*M_R02_TJointAngle_Degree_ptr = M_R02_TJointAngle_Degree;
//	shmdt(M_R02_TJointAngle_Degree_ptr);
	
	key_t key_M_R03_SJointAngle_Degree = ftok("shared_memory", 17);
	int shmid_M_R03_SJointAngle_Degree = shmget(key_M_R03_SJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R03_SJointAngle_Degree_ptr = (float *)shmat(shmid_M_R03_SJointAngle_Degree, NULL, 0);
	M_R03_SJointAngle_Degree = R03_JointAngleS->valuedouble;
	*M_R03_SJointAngle_Degree_ptr = M_R03_SJointAngle_Degree;
//	shmdt(M_R03_SJointAngle_Degree_ptr);
	
	key_t key_M_R03_LJointAngle_Degree = ftok("shared_memory", 18);
	int shmid_M_R03_LJointAngle_Degree = shmget(key_M_R03_LJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R03_LJointAngle_Degree_ptr = (float *)shmat(shmid_M_R03_LJointAngle_Degree, NULL, 0);
	M_R03_LJointAngle_Degree = R03_JointAngleL->valuedouble;
	*M_R03_LJointAngle_Degree_ptr = M_R03_LJointAngle_Degree;
//	shmdt(M_R03_LJointAngle_Degree_ptr);
	
	key_t key_M_R03_RJointAngle_Degree = ftok("shared_memory", 19);
	int shmid_M_R03_RJointAngle_Degree = shmget(key_M_R03_RJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R03_RJointAngle_Degree_ptr = (float *)shmat(shmid_M_R03_RJointAngle_Degree, NULL, 0);
	M_R03_RJointAngle_Degree = R03_JointAngleR->valuedouble;
	*M_R03_RJointAngle_Degree_ptr = M_R03_RJointAngle_Degree;
//	shmdt(M_R03_RJointAngle_Degree_ptr);
	
	key_t key_M_R03_UJointAngle_Degree = ftok("shared_memory", 20);
	int shmid_M_R03_UJointAngle_Degree = shmget(key_M_R03_UJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R03_UJointAngle_Degree_ptr = (float *)shmat(shmid_M_R03_UJointAngle_Degree, NULL, 0);
	M_R03_UJointAngle_Degree = R03_JointAngleU->valuedouble;
	*M_R03_UJointAngle_Degree_ptr = M_R03_UJointAngle_Degree;
//	shmdt(M_R03_UJointAngle_Degree_ptr);
	
	key_t key_M_R03_BJointAngle_Degree = ftok("shared_memory", 21);
	int shmid_M_R03_BJointAngle_Degree = shmget(key_M_R03_BJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R03_BJointAngle_Degree_ptr = (float *)shmat(shmid_M_R01_BJointAngle_Degree, NULL, 0);
	M_R03_BJointAngle_Degree = R03_JointAngleB->valuedouble;
	*M_R03_BJointAngle_Degree_ptr = M_R03_BJointAngle_Degree;
//	shmdt(M_R03_BJointAngle_Degree_ptr);
	
	key_t key_M_R03_TJointAngle_Degree = ftok("shared_memory", 22);
	int shmid_M_R03_TJointAngle_Degree = shmget(key_M_R03_TJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R03_TJointAngle_Degree_ptr = (float *)shmat(shmid_M_R03_TJointAngle_Degree, NULL, 0);
	M_R03_TJointAngle_Degree = R03_JointAngleT->valuedouble;
	*M_R03_TJointAngle_Degree_ptr = M_R03_TJointAngle_Degree;
//	shmdt(M_R03_TJointAngle_Degree_ptr);
	
	key_t key_M_R04_SJointAngle_Degree = ftok("shared_memory", 23);
	int shmid_M_R04_SJointAngle_Degree = shmget(key_M_R04_SJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R04_SJointAngle_Degree_ptr = (float *)shmat(shmid_M_R04_SJointAngle_Degree, NULL, 0);
	M_R04_SJointAngle_Degree = R04_JointAngleS->valuedouble;
	*M_R04_SJointAngle_Degree_ptr = M_R04_SJointAngle_Degree;
//	shmdt(M_R04_SJointAngle_Degree_ptr);
	
	key_t key_M_R04_LJointAngle_Degree = ftok("shared_memory", 24);
	int shmid_M_R04_LJointAngle_Degree = shmget(key_M_R04_LJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R04_LJointAngle_Degree_ptr = (float *)shmat(shmid_M_R04_LJointAngle_Degree, NULL, 0);
	M_R04_LJointAngle_Degree = R04_JointAngleL->valuedouble;
	*M_R04_LJointAngle_Degree_ptr = M_R04_LJointAngle_Degree;
//	shmdt(M_R04_LJointAngle_Degree_ptr);
	
	key_t key_M_R04_RJointAngle_Degree = ftok("shared_memory", 25);
	int shmid_M_R04_RJointAngle_Degree = shmget(key_M_R04_RJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R04_RJointAngle_Degree_ptr = (float *)shmat(shmid_M_R04_RJointAngle_Degree, NULL, 0);
	M_R04_RJointAngle_Degree = R04_JointAngleR->valuedouble;
	*M_R04_RJointAngle_Degree_ptr = M_R04_RJointAngle_Degree;
//	shmdt(M_R04_RJointAngle_Degree_ptr);
	
	key_t key_M_R04_UJointAngle_Degree = ftok("shared_memory", 26);
	int shmid_M_R04_UJointAngle_Degree = shmget(key_M_R04_UJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R04_UJointAngle_Degree_ptr = (float *)shmat(shmid_M_R04_UJointAngle_Degree, NULL, 0);
	M_R04_UJointAngle_Degree = R04_JointAngleU->valuedouble;
	*M_R04_UJointAngle_Degree_ptr = M_R04_UJointAngle_Degree;
//	shmdt(M_R04_UJointAngle_Degree_ptr);
	
	key_t key_M_R04_BJointAngle_Degree = ftok("shared_memory", 27);
	int shmid_M_R04_BJointAngle_Degree = shmget(key_M_R04_BJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R04_BJointAngle_Degree_ptr = (float *)shmat(shmid_M_R04_BJointAngle_Degree, NULL, 0);
	M_R04_BJointAngle_Degree = R04_JointAngleB->valuedouble;
	*M_R04_BJointAngle_Degree_ptr = M_R04_BJointAngle_Degree;
//	shmdt(M_R04_BJointAngle_Degree_ptr);
	
	key_t key_M_R04_TJointAngle_Degree = ftok("shared_memory", 28);
	int shmid_M_R04_TJointAngle_Degree = shmget(key_M_R04_TJointAngle_Degree, sizeof(float), IPC_CREAT | 0666);
	float *M_R04_TJointAngle_Degree_ptr = (float *)shmat(shmid_M_R04_TJointAngle_Degree, NULL, 0);
	M_R04_TJointAngle_Degree = R04_JointAngleT->valuedouble;
	*M_R04_TJointAngle_Degree_ptr = M_R04_TJointAngle_Degree;
//	shmdt(M_R04_TJointAngle_Degree_ptr);
*/	
	//printf("VFD1_Temperature value: %f\n", VFD1_Temperature->valuedouble);
	//printf("R01_JointAngleS value: %f\n", R01_JointAngleS->valuedouble);
//	printf("%f\n", *Q_VFD1_Temperature_ptr);
//	printf("%f\n", *M_R01_SJointAngle_Degree_ptr);	
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

