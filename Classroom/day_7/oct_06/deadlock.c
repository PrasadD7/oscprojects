#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

int g_count = 10;

pthread_mutex_t lock1;
pthread_mutex_t lock2;

void* func1(void *input)
{
	pthread_mutex_lock(&lock1);
	sleep(1);
	pthread_mutex_lock(&lock2);

	printf("%s: Initial balance is: %d\n", __func__, g_count);
	if (g_count > 0)
	{
		//sleep(1);
		g_count -=5;
		printf("%s: Withdrawn value is 5 and remaining balance is: %d\n", __func__, g_count);
	}
	pthread_mutex_unlock(&lock2);
	pthread_mutex_unlock(&lock1);
	return NULL;
}

void* func2(void *input)
{
	pthread_mutex_lock(&lock2);
	pthread_mutex_lock(&lock1);
	if (g_count > 0)
	{
		printf("%s: Withdrawn money: %d\n", __func__, g_count);
	g_count=0;
	}
	pthread_mutex_unlock(&lock1);
	pthread_mutex_unlock(&lock2);
	return NULL;
}



int main()
{
	pthread_t tid[2];

	pthread_mutex_init(&lock1, NULL);
	pthread_mutex_init(&lock2, NULL);

	pthread_create(&tid[0], NULL, func1, NULL);

	pthread_create(&tid[1], NULL, func2, NULL);

	pthread_join(tid[0], NULL);
	pthread_join(tid[1], NULL);

	pthread_mutex_destroy(&lock1);
	pthread_mutex_destroy(&lock2);

	return 0;

}
