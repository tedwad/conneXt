myServer: myServer.o
	gcc myServer.o -o myServer -lopen62541

myServer.o: myServer.c
	gcc -c myServer.c

clean:
	rm *.o myServer

run:
	./myServer
