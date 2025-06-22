#include<stdio.h>
int main()
{
	int n=152,rem,res,sum=0,cube;
    int temp=n;
    while(n>0)
   {
   	rem=n%10;
   	cube=rem*rem*rem;
   	sum=sum+cube;
   	n=n/10;
   	
   }
   if(temp==sum)
   {
   	printf("amstrong");
   	
   }
   	else{
   	 printf("not amstrong");	
	   }
	   }


	
