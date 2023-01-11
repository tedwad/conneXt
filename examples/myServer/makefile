myServer: ../../install/include/open62541.o myServer.o
	gcc ../../install/include/open62541.o myServer.o -lopen62541 -o myServer

../../install/include/open62541.o: ../../install/include/open62541.c
	gcc -c -std=c99 ../../install/include/open62541.c -o ../../install/include/open62541.o 

myServer.o: myServer.c
	gcc -c -std=c99 -I../../install/include -L../../install/lib myServer.c -lopen62541 -lmbedtls -lmbedx509 -lmbedcrypto

clean:
	rm *.o myServer

run:
	./myServer