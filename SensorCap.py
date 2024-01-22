import paho.mqtt.client as mqtt
from datetime import datetime
import json
from threading import Event, Lock
from time import sleep

BROKER = "test.mosquitto.org"
PORT = 1883
TOPIC = "data-synch"
USERNAME = "jad"
PASSWRD = "samaha"
j_list = ['S', 'L', 'U', 'R', 'B', 'T']
SENSOR_LIST = [f'M_R01_{i}' for i in j_list]
# SENSOR_LIST = ['I_R02_GripperPot']

# def on_message(client, data, msg):
#     data = json.loads(msg.payload)
#     print(data)
#
#
# def on_connect(client, data, flag, rc):
#     if rc == 0:
#         print("Connected Successfully!")
#         client.subscribe(TOPIC) 
#     else:
#         print("Could not connect! code = ", rc)
#
#
# client = mqtt.Client()
#
# # client.username_pw_set(USERNAME, password=PASSWRD)
# client.on_connect = on_connect
# client.connect(BROKER, PORT)
#
# client.on_message = on_message
# client.loop_forever()


class SensorCapture:

    def __init__(self, user: str, passwrd: str, topic: str, port: int, broker: str, sensor_list: list):
        self.sensors = sensor_list
        self._client = mqtt.Client()
        # self._client.username_pw_set(user, password=passwrd)
        self._client.on_connect = self._on_connect
        self._client.connect(broker, port=port)
        self._client.on_message = self._on_message

        self.topic = topic
        self._data = {}
        self._lock = Lock()
        self._ready_event = Event()

    def start(self):
        self._client.loop_start()
        self._ready_event.wait()

    @property
    def data(self):
        with self._lock:
            data = self._data
        return data

    @data.setter
    def data(self, value):
        with self._lock:
            self._data = value

    def stop(self):
        self._client.loop_stop()

    def _on_connect(self, client, data, flag, rc):
        if rc == 0:
            print("Connected Successfully!")
            client.subscribe(self.topic)
        else:
            print("Could not connect! code = ", rc)

    def _on_message(self, client, data, msg):
        data = json.loads(msg.payload)
        if len(self.sensors) == 0:
            self.sensors = data.keys()
        self.data = {key: data[key] for key in self.sensors}
        self._ready_event.set()
        # print(self.data)


if __name__ == '__main__':

    sens = SensorCapture(user=USERNAME, passwrd=PASSWRD, topic=TOPIC, port=PORT, broker=BROKER, sensor_list=SENSOR_LIST)
    sens.start()
    while True:
        print(sens.data)
        sleep(0.5)
