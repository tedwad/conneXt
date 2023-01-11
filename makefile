myServer: myServer.o
	gcc myServer.o -lopen62541 -o myServer

myServer.o: myServer.c
	gcc -c -std=c99 -I../../install/include -L../../install/lib myServer.c -lopen62541 -lmbedtls -lmbedx509 -lmbedcrypto

clean:
	rm *.o myServer

run:
	./myServer