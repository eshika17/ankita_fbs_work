//write a program in c for,to find common element in two arrays
#include<stdio.h>
void main()
{
	int arr[5];
	int brr[5];
	
	printf("enter element is arr:");
	for(int i=0;i<5;i++)
	{
	scanf("%d",&arr[i]);
	
}
printf("enter element is brr:");
for(int i=0;i<5;i++)
{
	scanf("%d",&brr[i]);
}

    printf("comman elements\n");
    for(int i=0;i<5;i++)
    {
    	for(int j=0;j<5;j++)
    	
    	if(arr[i]==brr[j])
    	{
    		printf("%d\t",arr[i]);
		}
	}
}
  