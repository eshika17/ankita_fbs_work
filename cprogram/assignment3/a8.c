#include<stdio.h>
void main()
{
    int n=145,temp=n,sum=0;
    while(n>0)
	 {
        int digit=n%10,fact=1;
        for (int i=1;i<=digit;i++)
        fact*=i;
        sum=sum+fact;
        n/=10;
    }
    if(sum==temp)
        printf("%d Strong number\n",temp);
    else
        printf("%d not Strong number\n",temp);
}
