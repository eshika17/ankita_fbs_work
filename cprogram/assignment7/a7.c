#include<stdio.h>
void main()
{
    int arr[5];
    int brr[5];
    int crr[5];
    
    printf("enter element in arr:");
    for (int i=0;i<5;i++) 
	{
		scanf("%d",&arr[i]);
    }
    printf("enter element in brr:");
    for(int i=0;i<5;i++)
    {
    	scanf("%d",&brr[i]);
	}
    printf("Sum of arr and brr in crr:\n");
    for (int i=0;i<5;i++) 
	{
		crr[i]=arr[i] + brr[i];
        printf("%d\t",crr[i]);
    }

  	
}