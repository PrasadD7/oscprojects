#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	pid_t pid;

	pid=fork();

	//For a child process, pid is 0
	if(pid==0)
	{
		/*sleep(5);
		printf("\n Child process created");
		printf("\nChild process ID: %d",getpid());
		printf("\nChild parent process ID: %d",getppid());
		sleep(15);
//		while(1);*/
		exit(0);		
	}
	else
	{
		sleep(10);
		printf("\nParent process created");
		printf("\nParent Process ID: %d",getpid());
		printf("\nChild's process ID: %d",pid);
//		sleep(40);
		sleep(50);
	}
	printf("\nBoth processes at the end");
	
	return 0;
}
