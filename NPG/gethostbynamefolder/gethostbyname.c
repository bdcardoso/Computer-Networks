#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>


int main(){

	struct hostent *h;
	struct in_addr *a;

	if((h = gethostbyname("localhost")) == NULL){ 
		exit(1);
	}

	printf("official host name: %s\n",h->h_name);

	a=(struct in_addr*)h->h_addr_list[0];

	printf("internet access: %s (%01X) \n", inet_ntoa(*a), ntohl(a->s_addr));

	exit(0);

}