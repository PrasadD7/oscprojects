#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(){

	int i=0;
	pid_t pid,parr[5];
for(i = 0; i<3; i++){
	pid = fork();
	if(pid == 0){
	if(i==0){
		printf("\nLaunching firefox using pid = %d and parent pid = %d",getpid(),getppid());
	execlp("firefox","firefox",NULL);
	}if(i==1){
		printf("\nLaunching firefox using pid = %d and parent pid = %d",getpid(),getppid());
	execlp("gedit","gedit",NULL);
	}if(i==2){
		printf("\nLaunching firefox using pid = %d and parent pid = %d",getpid(),getppid());
	execlp("gcc","gcc",NULL);
	}
	}
}
return 0;
}
