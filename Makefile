exeetape2: etape2.c 
	gcc etape2.c -o etape2
	./etape2

compiletape2: etape2.c 
	gcc etape2.c -o etape2

exeserverbonjour: serverbonjour.c
	gcc serverbonjour.c -o serverbonjour
	./serverbonjour

compilserverbonjour: serverbonjour.c
	gcc serverbonjour.c -o serverbonjour


execlientcoucou: clientcoucou.c
	gcc clientcoucou.c -o clientcoucou
	./clientcoucou

compilclientcoucou:clientcoucou.c
	gcc clientcoucou.c -o clientcoucou
