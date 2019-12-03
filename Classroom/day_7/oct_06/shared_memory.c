#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>

int main()
{
	key_t key = ftok("/home/dac/osc/system_prog/oct_06", 1);

	int shared_id = shmget(key, 1024, IPC_CREAT | 0666);

	char *buf = shmat(shared_id, NULL, 0);

	printf("Enter your name\n");
	scanf("%s", buf);

	printf("User entered: %s\n", buf);

	sleep(100);

	shmdt(buf);

//	shmctl(shared_id, IPC_RMID, NULL);

	return 0;
}

