#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void* func1(void *t)
{
	printf("I am inside a thread\n");

	return NULL;
}

int main()
{
	pthread_t tid;
	
	pthread_create(&tid, NULL, func1, NULL);

	sleep(1);
	return 0;
}
