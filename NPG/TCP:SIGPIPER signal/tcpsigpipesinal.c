#include <signal.h>

int main(){

	void (*old_handler)(int);

	if((old_handler=signal(SIGPIPE,SIG_IGN))=SIG_ERR)exit(1);
