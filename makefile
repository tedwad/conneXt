myServer: myServer.o main.o
	gcc myServer.o main.o -o myServer -lopen62541 -lmbedtls -lmbedx509 -lmbedcrypto
	
myServer.o: myServer.c main.c
	gcc -c -std=c99 myServer.c main.c -lopen62541 -lmbedtls -lmbedx509 -lmbedcrypto
	
clean:
	rm *.o myServer
	
run:
	./myServer
