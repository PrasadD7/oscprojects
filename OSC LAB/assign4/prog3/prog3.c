#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
int main(){
pid_t pid;
pid_t pidarr[5];
int i,status[5]={0,0,0};
for(i=0;i<3;i++){
pid = fork();
if(pid==0){
if(i==0){
	pidarr[i]=getpid();
	printf("Launching Firefox with process id = %u, parent pid= %u",getpid(),getppid());
	execlp("firefox","firefox",NULL);
}
else if(i==1){
	pidarr[i]=getpid();
	printf("Launching Gedit with process id = %u, parent pid= %u",getpid(),getppid());
	execlp("gedit","gedit",NULL);
}
else if(i==2){
	sleep(15);
	pidarr[i]=getpid();
	printf("Launching GCC with process id = %u, parent pid= %u",getpid(),getppid());
	execlp("gcc","gcc",NULL);
}
}
}
if(pid>0){
	sleep(3);
        for(i=0;i<3;i++){
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
}
