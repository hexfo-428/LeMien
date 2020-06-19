#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/socket.h>

#include <netinet/in.h> 
#include <arpa/inet.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

#include <string.h>

int main()
{
	int socket_a_moi = socket(AF_INET, SOCK_STREAM, 0);

	
    struct sockaddr_in adresse_serveur;
    adresse_serveur.sin_family = AF_INET;
    adresse_serveur.sin_port = htons(9002);
    adresse_serveur.sin_addr.s_addr = INADDR_ANY;

    
    bind(socket_a_moi, (struct sockaddr*) &adresse_serveur, sizeof(adresse_serveur));
    
    listen(socket_a_moi, 5);
    printf("Le serveur ecoute sur l'adresse: %s et sur le port: %d\n",inet_ntoa(adresse_serveur.sin_addr),htons(9002));
 

    	char msg_recu[256];
	char coucou[256]="coucou";
	char bonjour[256]="bonjour";
	char rien[256]="";


	for (;;)
	{
	int accept_client = accept(socket_a_moi, NULL, NULL);
	printf("Connecté ...! \n");

	int msg_du_client = recv(accept_client, msg_recu, sizeof(msg_recu), 0);
	printf("<=\"%s\"\n", msg_recu);



	 if (strncmp(coucou, msg_recu , 4) == 0 )
	{
		printf("=>Bonjour!\n");
		msg_du_client = send(accept_client, bonjour, sizeof(bonjour), 0);
		close(accept_client);
		close(socket_a_moi);
	}
	else
		printf("reesayer..\n");
		msg_du_client = send(accept_client, rien, sizeof(rien), 0);




}
    
    close(socket_a_moi);	

	return 0;
}

