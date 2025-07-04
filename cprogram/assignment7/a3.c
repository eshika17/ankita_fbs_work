#include<stdio.h>
int main() 
{
    int i,sum=0;
    
    int num[10]; 

    printf("Enter numbers:\n");
    for(i=0;i<10;i++)
	 {
        scanf("%d", &num[i]);
        sum=sum+num[i]; 
    }

     printf("Sum of the num is:%d\n",sum);

}
