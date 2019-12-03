#include<stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>

struct message
{
	long id;
	char str[100];
};


int main()
{

	key_t key = ftok("DAC", 123);
	struct message msg;

	int mqid = msgget(key, IPC_CREAT | 0666);

	msg.id=7;

	msgrcv(mqid, &msg, sizeof(msg), 7, 0);

	printf("Message received is: %s\n", msg.str);

	msgctl(mqid, IPC_RMID, 0);
	return 0;
}
