myServer: ../../install/include/open62541.o myServer.o
	gcc ../../install/include/open62541.o -o myServer

../../install/include/open62541.o: ../../install/include/open62541.c
	gcc -c -std=c99 ../../install/include/open62541.c -o ../../install/include/open62541.o 

myServer.o: myServer.c
	gcc -c myServer.c

clean:
	rm *.o myServer

run:
	./myServer