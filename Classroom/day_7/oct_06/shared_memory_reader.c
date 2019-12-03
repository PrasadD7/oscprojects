#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>


int main()
{
	key_t key = ftok("/home/dac/osc/system_prog/oct_06", 1);

	int shared_id = shmget(key, 1024, 0666);

	char *buf = shmat(shared_id, NULL, 0);

	printf("Shared memory have: %s\n", buf);

	shmdt(buf);

	shmctl(shared_id, IPC_RMID, NULL);

	return 0;
}

