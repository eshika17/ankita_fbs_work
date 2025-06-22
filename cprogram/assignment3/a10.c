#include<stdio.h>
int main()
{
	int no=84327;
	int fdig,ldig,sum;
	ldig=no%10;
	while(no>0)
	{
	fdig=no%10;
	no=no/10;
    sum=fdig+ldig;
    }
	printf("%d",sum);
}
