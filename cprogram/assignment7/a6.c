#include <stdio.h>
int main()
 {
    int arr[5];
	int size;

    printf("Enter the number of elements :");
    scanf("%d",&size);

    printf("Enter the elements");
    for (int i = 0; i < size; i++)
	 {
        scanf("%d",&arr[i]);
    }

    printf("Prime numbers in array:");
    for (int i = 0; i < size; i++)
	 {
        if (arr[i]<=1)
		 {
		 	continue;
		 }
		 int prime=0;
		 for(int j=2;j<=arr[i]/2;i++)
		 {
		 	if(arr[i]%j==0)
		 	{
		 		prime=1;
		 		break;
			 }
		 }
		 if(prime==0)
            printf("%d ",arr[i]);
        }
    }
