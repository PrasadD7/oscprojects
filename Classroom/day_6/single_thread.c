#include<stdio.h>

int main()
{
	long long sum;
	for (int i=0; i<1000000; i++)
	{
		sum += i;
	}

	printf("Sum of 1 to 1000 is: %lld\n", sum);

	return 0;
}
