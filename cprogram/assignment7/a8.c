#include<stdio.h>
int main()
 {
    int arr[5];
    int brr[5];
    int merged[10];

    printf("enter element in arr:");
    for(int i=0;i<5;i++)
    {
    	scanf("%d",&arr[i]);
	}
	printf("enter element in brr:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
	printf("if we merge two array:");
	for(int i=0;i<5;i++)
	{
		merged[i]=arr[i];
	}
	for(int i=0;i<5;i++)
	{
		merged[i+5]=brr[i];
	}
	for(int i=0;i<10;i++)
	{
		printf("%d",merged[i]);
	}
}
	
