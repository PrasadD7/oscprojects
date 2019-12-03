#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
	pid_t pid;
	pid_t pidarr[5];
	int i=0,status[5]={0,0,0,0,0};
	for(i=0;i<5;i++){
	pid=fork();
	if(pid<0){
	printf("\nfork() has failed");
	}
	if(pid==0){
	printf("\nChild is created with pid = %d and parent pid=%d \n",getpid(),getppid());
	pidarr[i] = getpid();
	sleep(10);
	//execl("/home/dac/b4osc/assign4","waiter.c",NULL);
	exit(0);
	}
	}
	if(pid>0){
		sleep(5);
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
