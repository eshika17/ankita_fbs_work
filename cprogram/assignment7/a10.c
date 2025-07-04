#include <stdio.h>
int main() 
{
    int arr[100],n;
    printf("enter the size of array:");
    scanf("%d",&n);
    
    printf("enter element in array:");
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
    	for(int j=0;j<n-i-1;j++)
    	{
    		if(arr[j]>arr[j+1])
    		{
    			int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
			}
		}
	}
    printf("Sorted array in assending order:");
    for (int i=0;i<n;i++)
	 {
        printf("%d\t",arr[i]);
    }

}
