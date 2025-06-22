#include<stdio.h>
int main()
 {
    int n=1221,rev=0,temp,dig;
    temp=n;

    while(temp>0)
	{
        dig=temp%10;
        rev=rev*10+dig;
        temp/=10;
    }
    if(n==rev)
        printf("%d palindrome\n",n);
    else
        printf("%d not palindrome\n",n);
}
