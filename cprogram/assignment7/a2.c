#include <stdio.h>
int main()
{
    int n,i,search,found=0;


    int arr[10];

    printf("Enter elements:\n",n);
    for(i=0;i<10;i++)
	 {
        scanf("%d",&arr[i]);
    }

    printf("Enter the number search:");
    scanf("%d",&search);

    for(i=0;i<10;i++)
	 {
        if(arr[i]==search)
		 {
            found=1;
            break;
        }
    }

    if(found)
        printf("%d is found in array %d\n", search, i + 1); 
    else
        printf("%d is not found in array\n", search);

   
}
