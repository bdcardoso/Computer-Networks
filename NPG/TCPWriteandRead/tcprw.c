#include <unistd.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
	
int fd, nbytes, nleft, nwritten, nread;
char *ptr, buffer[128];

ptr=strcpy(buffer, "Hello!\n");
nbytes=7;

nleft=nbytes;
while(nleft>0){nwritten=write(fd,ptr,nleft);
			if(nwritten<=0) exit(1);
			nleft-=nwritten;
			ptr+=nwritten;}

nleft=nbytes; ptr=&buffer[0];

while(nleft>0){nread=read(fd,ptr,nleft);
	if(nread==-1)exit(1);
	else if(nread==0)break;
	nleft -=nread;
	ptr+=nread;}

	nread=nbytes-nleft;
	close(fd);

	write(1,"echo: ",6);
	write(1,buffer,nread);
	exit(0);

}