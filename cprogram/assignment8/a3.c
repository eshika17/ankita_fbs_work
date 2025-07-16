#include<stdio.h>
void searcharray(int arr[],int size,int key);
void main()
{
	int arr[5],n,key;
	printf("enter array number");
	scanf("%d",&n);
	
	printf("enter array element");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("enter the element you what to find");
	scanf("%d",&key);
	
	searcharray(arr,n,key);
}
void searcharray(int arr[],int size,int key)
{
	int found=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
		printf("%d element found at %d index",key,i);
		found=1;
		break;
	  }
}
	if(!found)
	{
		printf("%d element is not found",key);
	}
}
