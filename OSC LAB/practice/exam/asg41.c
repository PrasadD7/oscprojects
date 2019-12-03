#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
void main(){
pid_t pid,parr[5];
int i=0,status[5];
for(i=0;i<5;i++){
pid=fork();
if(pid<0){
printf("failed to spawn");
}
if(pid==0){
	parr[i]=getpid();
printf("\nChild created with pid=%u",getpid());
exit(0);
}
}
if(pid>0){
	for(i=0;i<5;i++){
	waitpid(parr[i],&status[i], NULL);
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
