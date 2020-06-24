

exeserverbonjour2: serverbonjour2.c
	gcc serverbonjour2.c -o serverbonjour2 -lpthread
	./serverbonjour2 9002
compilserverbonjour2: serverbonjour2.c
	gcc serverbonjour2.c -o serverbonjour2 -lpthread

execlient1:client1.c
	gcc client1.c -o client1 -lpthread
	./client1 9002
compilclient1:client1.c
	gcc client1.c -o client1 -lpthread
