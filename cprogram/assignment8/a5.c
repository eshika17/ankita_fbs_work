#include<stdio.h>
printfodd(int arr[],int size);
printfeven(int arr[],int size);
void main()
{
	int arr[5];
	printf("enter the array element");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nodd number in given array \t");
	printfodd(arr,5);
	
	printf("\neven number is given array\t");
	printfeven(arr,5);
	
}
printfodd(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2!=0)
		printf("%d\t",arr[i]);
		
	}
	
}
printfeven(int arr[],int size)
{
for(int i=0;i<5;i++)
{
	if(arr[i]%2==0)
	printf("%d\t",arr[i]);
}
}