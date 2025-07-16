#include<stdio.h>
int MergeArray(int arr[],int brr[],int merged[],int size);
void main()
{
	int arr[5];
	int brr[5];
	int merged[10];
	
	printf("enter array element");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter brr element");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
	MergeArray(arr,brr,merged,5);
	printf("merge array:\t");
	for(int i=0;i<10;i++)
	{
		printf("%d\t",merged[i]);
		
	}
}
void MergeArray(int arr[],int brr[],int merged[],int size)
{
	for(int i=0;i<size;i++)
	{
		merged[i]=arr[i];
		
	}
	for(int i=0;i<size;i++)
	{
		merged[i+size]=brr[i];
		
	}
	}	