#include <unistd.h>
int gethostname(char *name, size_t len);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
extern int errno;

int main(){
	
char buffer[128];

if(gethostname(buffer,128)==-1)

	printf("error: %s\n",strerror(errno));

	else printf("host name:%s\n",buffer);
	exit(0);

}