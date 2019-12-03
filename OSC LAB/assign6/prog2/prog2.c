#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

int count = 0;

pthread_mutex_t lock;

void* func1(void *input)
{
	pthread_mutex_lock(&lock);
		count++;
		printf("\nIn %s:count = %d\n", __func__, count);
	pthread_mutex_unlock(&lock);
	return NULL;
}

void* func2(void *input)
{

	pthread_mutex_lock(&lock);
		count++;
		printf("\nIn %s:count = %d\n", __func__, count);
	pthread_mutex_unlock(&lock);
	return NULL;

}

int main()
{
	pthread_t tid[2];

	pthread_mutex_init(&lock, NULL);

	pthread_create(&tid[0], NULL, func1, NULL);

	pthread_create(&tid[1], NULL, func2, NULL);

	pthread_join(tid[0], NULL);
	pthread_join(tid[1], NULL);

	pthread_mutex_destroy(&lock);

	return 0;

}
