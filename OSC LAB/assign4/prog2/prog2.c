#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
void createChild();
int i=0;
pid_t pidarr[5];
pid_t pid;
int main()
{
        int i=0,status[5]={0,0,0,0,0};
	pid = fork();
	while(pid==0 && (i!=4) ){
		pidarr[i]=getpid();
	createChild();
	i++;
	}
if(i==4 && pid>0){
	for(i=0;i<5;i++){
        waitpid((pidarr[i]),&status[i],0);
        printf("Exited child status is: %d\n", status[i]);
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
	return 0;
}
void createChild(){
	pid=fork();

	if(pid==0 && i!=5){
printf("\nChild is created with pid = %d and parent pid=%d \n",getpid(),getppid());
	}

}
