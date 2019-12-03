#include<stdio.h>
 #include <pthread.h>
int count = 0;
void *func1(){
printf("\nI am thread 0 count = %d %s",count++,__func__);
}

void *func2(){
printf("\nI am thread 1 count = %d %s",count++,__func__);
}

void main(){

 pthread_t t[2];	

	pthread_create(&t[0], NULL,func1, NULL);
	pthread_create(&t[1], NULL,func2, NULL);
	pthread_join(t[0], NULL);
	pthread_join(t[1], NULL);

	printf("\nI am thread 1 count = %d %s",count++,__func__);

}
