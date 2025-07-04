#include <stdio.h>
int main()
 {
    int num[5]; 
    int i;

    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++) 
	{
        scanf("%d",&num[i]);
    }
    
    printf("Even Nubers:");
    for(i=0;i<5;i++) 
	{
        if(num[i]%2==0)
		 {
            printf("%d\t",num[i]);
         }
    }
    printf("\nOdd Numbers:");
    for(i=0;i<5;i++) 
	{
        if(num[i]%2!=0)
		 {
            printf("%d\t",num[i]);
         }
    }
     
    return 0;
}
