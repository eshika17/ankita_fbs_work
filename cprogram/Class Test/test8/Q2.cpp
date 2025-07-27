//write a program to print following series
#include<stdio.h>
int main()
{
	int no;
	printf("enter number of iteration");
	scanf("%d",&no);
	int n=1;
	for(int i=0;i<=no;i++)
	{
      for(int j=0;j<=i;j++) 
       { 
           printf("%d",n);
        
        }
    printf("+");
   }
    
}