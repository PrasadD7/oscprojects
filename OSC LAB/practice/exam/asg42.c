#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
pid_t pid,parr[5];
int i=0;
void main(){
	int status[5];
pid = fork();
if(pid==0){

while(i<5 && pid==0){
createProcess();
}
}

if(pid>0 && i==5){
for(i=0;i<5;i++){
waitpid(parr[i],&status[i],0);

if (WIFEXITED(status[i])) {
                       printf("exited, status=%d\n", WEXITSTATUS(status[i]));
                   } else if (WIFSIGNALED(status[i])) {
                       printf("killed by signal %d\n", WTERMSIG(status[i]));
                   } else if (WIFSTOPPED(status[i])) {
                       printf("stopped by signal %d\n", WSTOPSIG(status[i]));
                   } else if (WIFCONTINUED(status[i])) {
                       printf("continued\n");
                   }

}
}

}

void createProcess(){
pid = fork();
if(pid==0){
	++i;
	parr[i]=getpid();
	printf("\nChild is created with pid = %d and parent pid=%d \n",getpid(),getppid());
}
}
