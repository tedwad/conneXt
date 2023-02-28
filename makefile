myServer: myServer.o main.o
	gcc myServer.o main.o -o myServer -lopen62541 -lmbedtls -lmbedx509 -lmbedcrypto
	
myServer.o: myServer.c main.c
	gcc -c -std=c99 myServer.c main.c -lopen62541 -lmbedtls -lmbedx509 -lmbedcrypto

myServer.h: ~/open62541/tools/nodeset_compiler/nodeset_compiler.py ~/open62541/deps/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml nodesets/DI/Opc.Ua.Di.NodeSet2.xml nodesets/Robotics/Opc.Ua.Robotics.NodeSet2.xml model/Published/Opc.Ua.Ff.NodeSet2.xml
	python3 ~/open62541/tools/nodeset_compiler/nodeset_compiler.py --types-array=UA_TYPES -e ~/open62541/deps/ua-nodeset/Schema/Opc.Ua.NodeSet2.xml -x nodesets/DI/Opc.Ua.Di.NodeSet2.xml -x nodesets/Robotics/Opc.Ua.Robotics.NodeSet2.xml -x model/Published//Opc.Ua.Ff.NodeSet2.xml myServer

clean:
	rm *.o myServer
	
run:
	./myServer
