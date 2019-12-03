#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>
void main(){
	key_t key;
	int shmid,ch=1;
	char put[100],get[100];
	char *shmaddr=NULL;
	key = ftok("/home/dac/b4osc/assign6/prog3",1);
	memset(put,0,sizeof(put));
	shmid=shmget(key,2048,IPC_CREAT|0600);
	if(shmid==-1){
	printf("\nError creating shared memory!!!");
	}
	else{
	shmaddr = shmat(shmid,NULL,0);
	do{
	printf("\nEnter string to be stored in shared memory::");
	fgets(shmaddr,10,stdin);
	printf("\nYou entered :: %s",shmaddr);
	printf("Do you want to continue ??\n1:Yes\n0:No");
        scanf("%d",&ch);
	}
	while(ch);
	
	ch=shmdt(shmaddr);
	if(!ch)
		printf("\nShared memory destroyed !!!");
	else
		printf("\nShared memory destruction failed !!!");

	}

}
