#include <stdio.h>
int main()
 {
    int arr[5],i;
    printf("enter 5 element:");
    for(int i=0;i<5;i++)
    {
    	scanf("%d",&arr[i]);
	}
	printf("Alternate element in array\n:");
    for (int i=0;i<5;i=i+2) 
{
        printf("\t%d",arr[i]);
}
}
