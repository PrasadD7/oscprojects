#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<semaphore.h>
int count = 0;
 sem_t lock;
void* func1(void *input)
{
	sem_wait(&lock);
		count++;
		printf("\nIn %s:count = %d\n", __func__, count);
	sem_post(&lock);
	return NULL;
}

void* func2(void *input)
{

	sem_wait(&lock);
		count++;
		printf("\nIn %s:count = %d\n", __func__, count);
	sem_post(&lock);
	return NULL;

}

void* func3(void *input)
{

	sem_wait(&lock);
		count++;
		printf("\nIn %s:count = %d\n", __func__, count);
	sem_post(&lock);
	return NULL;

}

int main()
{
	pthread_t tid[3];

	sem_init(&lock,0,1);

	pthread_create(&tid[0], NULL, func1, NULL);

	pthread_create(&tid[1], NULL, func2, NULL);

	pthread_create(&tid[2], NULL, func3, NULL);
	pthread_join(tid[0], NULL);
	pthread_join(tid[1], NULL);

	pthread_join(tid[2], NULL);
	sem_destroy(&lock);

	return 0;

}
