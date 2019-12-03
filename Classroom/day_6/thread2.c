#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void* func1(void *t)
{
	printf("I am inside a thread: %d\n", *((int *)t));

	return NULL;
}

int main()
{
	pthread_t tid;
	int i=10;

	pthread_create(&tid, NULL, func1, &i);

	sleep(1);
	return 0;
}
