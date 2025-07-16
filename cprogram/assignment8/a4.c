#include<stdio.h>
void sumarray(int arr[],int sum);
void main()
{
	int arr[5];
	int sum=0;
	printf("enter array elements");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	sumarray(arr,sum);
	
}
void sumarray(int arr[],int sum)
{
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
printf("sum=%d",sum);
} 