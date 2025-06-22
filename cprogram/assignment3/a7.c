#include<stdio.h>
void main()
{
	int n=5;
	int factorial=1;
	for(int i=1;i<=n;i++)
	{
		factorial=i;
		printf("factorial of %d is %d\n",n,factorial);
	}
}