#include<stdio.h>
void printprime(int arr[],int size);
void main()
{
	int arr[10];
	printf("enter array element");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("prime number in given array");
	printfprime(arr[10]);
	
}
void printfprime(int arr[],int size)
{
	for(int i=0;i<5;i++)
	{
		int isprime=1;
		if(arr[i]<=1)
		continue;
		for(int j=2;j<=arr[i]/2;j++)
		{
			if(arr[i]%j==0)
			{
				isprime=0;
				break;
			}
		}
		if(isprime==1)
		{
			printf("%d\t",arr[i]);
		}
	}
}