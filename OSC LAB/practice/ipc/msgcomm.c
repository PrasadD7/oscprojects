#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <unistd.h>
struct message{
long id;
char msg[100];
};
int main(){
	key_t key;
	pid_t pid;
	int mqid,i=0;
	key = ftok("DAC",123);
	mqid = msgget(key,IPC_CREAT | 0666);
	struct message m;
	pid = fork();
	if(pid<0){
	printf("Fork failed ");
	}
	i= 100;
	if(pid == 0){

		m.id = i;
	printf("Enter msg to be added to the queue");
	scanf("%s",m.msg);
	msgsnd(mqid,&m,sizeof(m),0);
	printf("hii");
	}
	if(pid > 0){
		sleep(5);
	printf("Message received is");
	msgrcv(mqid,&m,sizeof(m),7,0);
	printf("%s",m.msg);
	msgctl(mqid, IPC_RMID, 0);
	}
return 0;
}
