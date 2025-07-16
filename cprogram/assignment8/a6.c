#include<stdio.h>
void printfalternate(int arr[],int size);
void main()
{
	int arr[5];
	printf("enter array element");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("alternate number in given array\t");
	printfalternate(arr,5);
	
}
void printfalternate(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
}