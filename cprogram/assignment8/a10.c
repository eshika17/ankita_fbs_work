#include<stdio.h>
void main()
{
	int arr[10];
	
	printf("enter the array element");
	for(int i=0;i<10;i++)
	{
	scanf("%d",&arr[i]);
}
reversearray(arr,10);
printf("reverse the given array\n");
for(int i=0;i<10;i++)
printf("%d\n",arr[i]);
}
reversearray(int arr[],int size)
{
	int temp;
	for(int i=0;i<size/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[size-i-1];
		arr[size-i-1]=temp;
	}
}