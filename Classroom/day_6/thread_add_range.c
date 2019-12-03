#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>

typedef struct
{
	int start;
	int range;
}s_range;

void* func1(void *t)
{
	int start = ((s_range*)t)->start;
	int range = ((s_range*)t)->range;

	printf("start = %d\n", start);
	printf("range = %d\n", range);

	long* sum = malloc(sizeof(long));
	for (int i = start; i < start+range; i++)
	{
		*sum += i;
	}

	printf("Sum is: %ld\n", *sum);

	pthread_exit(sum);

	return NULL;
}

int main()
{
	pthread_t tid[4];
	int i=10;
	int start=0;
	s_range st[4];
	long *sum[4];
	long result = 0;       

	for (i=0; i<4; i++)
	{
		sum[i] = malloc(sizeof(long));
	}

	for (i=0; i<4; i++)
	{
		st[i].start=start;
		st[i].range=250;
		pthread_create(&tid[i], NULL, func1, &st[i]);
	
		start +=250;
	}

	for (i=0; i<4; i++) {
		pthread_join(tid[i], (void **)&sum[i]);

		result += *sum[i]; 
	}

		printf("Sum of 1 to 1000 is: %ld\n", result);
	return 0;
}
