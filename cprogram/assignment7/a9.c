#include<stdio.h>

int main()
 {
 	int arr[100],n;
 	printf("enter the size of array:");
 	scanf("%d",&n);
 	
 	printf("enter array element:");
 	for(int i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);
 		
	 }
	 printf("original array");
	 for(int i=0;i<n;i++)
	 {
	 	printf("%d",arr[i]);
	 }
	 for(int i=0;i<n/2;i++)
	 {
	 	int temp=arr[i];
	 	arr[i]=arr[n=1-i];
	 	arr[n-1-i]=temp;
	 	
	 }
	 printf("\n");
	 
	 printf("reverse array");
	 for(int i=0;i<n;i++)
	 {
	 	printf("%d",arr[i]);
	 	
	 }
 	
 	
}
