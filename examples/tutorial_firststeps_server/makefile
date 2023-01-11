myServer: myServer.o
	gcc -std=c99 -I../../install/include -L../..install/lib myServer.c -lopen62541 -lmbedtls -lmbedx509 -lmbedcrypto -o myServer

myServer.o: myServer.c
	gcc -c myServer.c

clean:
	rm *.o myServer

run:
	./myServer