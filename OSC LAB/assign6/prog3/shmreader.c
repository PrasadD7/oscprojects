#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>
void main(){
	key_t key;
	int shmid,ch;
	char put[100],get[100];
	char *shmaddr=NULL;
	key = ftok("/home/dac/b4osc/assign6/prog3",1);
	memset(get,0,sizeof(get));
	shmid=shmget(key,2048,SHM_RDONLY|0600);
	if(shmid==-1){
	printf("\nError creating shared memory!!!");
	}
	else{
	shmaddr = shmat(shmid,NULL,0);
	printf("\nString received from shared memory::");	
	do{
	sscanf(shmaddr,"%s",get);
	printf("\n%s",get);
	printf("Do you want to continue ??\n1:Yes\n0:No");
	scanf("%d",&ch);
	}
	while(ch);
	}
}
