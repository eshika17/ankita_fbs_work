#include<stdio.h>
void main()
{
	int a,b,i,sum=0;
	printf(" enter the range 1 to");
	scanf("%d",&b);
	int num=b;
	for(i=1;i<=a;i++)
	{

		int num=i;
		int res=0;
		while(num>0)
		{
			b=num%10;
			int fact=1;
			for(int j=1;j<=b;j++)
			{
				fact=fact*j;
			}
			res=res+fact;
			num=num/10;
		
		if(res==i)
		printf("is a strong no");
		else
		printf("is not strong no");
		
			}
	}
		
	}
