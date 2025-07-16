#include<stdio.h>
int sumarray(int arr[],int brr[],int crr[],int size);
void main()
{
	int arr[5]={1,2,3,4,5};
	int brr[5]={10,20,30,40,50};
	int crr[5];
	
	printf("the sum of array");
	sumarray(arr,brr,crr,5);
	
}
int sumarray(int arr[],int brr[],int crr[],int size)
{
	for(int i=0;i<size;i++)
	{
		crr[i]=arr[i]+brr[i];
		printf("%d\t",crr[i]);
	}
}