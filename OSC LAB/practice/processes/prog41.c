#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(){
	pid_t pid;
	pid_t pidarr[5];
	int i=0,status;

	for(i=0;i<5;i++){
	pid=fork();
	if(pid==0){
	printf("\nInside child with pid:%d, parent pid:%d",getpid(),getppid());
	wait(5);
	pidarr[i] = getpid();
	exit(0);
	}
	}
	if(pid>0){
	printf("Inside parent");
	for(i=0;i<5;i++){
	 waitpid(pidarr[i], &status, NULL);
	printf("\n%d exit status ",status);
	}
	}

return 0;
}
