#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
int main(){
key_t key;
pid_t pid;
key = ftok("dac",123);
int shmid;
char *shmaddr=NULL;
char get[100],put[100];
memset(get,0,sizeof(get[100]));

shmid = shmget(key, 2048, IPC_CREAT | 0600);
if(shmid == -1){
printf("Error creating shared memory !!!");
return -1;
}
shmaddr = shmat(shmid, NULL, 0);
pid = fork();
if(pid==0){
printf("Enter data to be written (child)");
fgets(shmaddr,20,stdin);
printf("\nYou entered %s",shmaddr);
}
else{
	int wstatus;
waitpid(pid,&wstatus, NULL);
printf("Child exited with status %d",wstatus);
sscanf(shmaddr,"%s",get);
printf("\nData entered by child is %s",get);
}
return 0;

}
