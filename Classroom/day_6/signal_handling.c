#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void handler(int sig_no)
{
	printf("We are handling: %d\n", sig_no);
}

/*
__________________________________________
1|2|3|4|5|6|7|8|9|10|11|12|13|14
__________________________________________
0|1|0|0|0|0|0|0|0|0 |0 |0 |0 |0			//pending signal
_________________________________________
0|0|0|0|0|0|0|0|0|0 |0 |0 |0 |0			//masked signal
*/
int main()
{
	int i=0;
	signal(SIGINT,  handler);
	signal(3,  handler); // SIGQUIT is 3
	while(1)
	{
		printf("%d\n", i++);
		sleep(1);
	}
	return 0;
}
