//wap to calculate selling price of book bades on the cost price and discount
#include<stdio.h>
void main()
{
	float sellingp,costp,discount,tamount;

	printf("enetr your costprice of book");
	scanf("%f",&costp);
	
	if(costp>=1000)
	{
		discount=costp*0.20;
		printf("discount=%2f\n",discount);
		sellingp=costp-discount;
		printf("your total selling price=%.2f",sellingp);
	}
	else if(costp>=700 && costp<1000)
	{
		discount=costp*0.10;
		printf("discount=%2f\n",discount);
		sellingp=costp-discount;
		printf("your total selling price=%.2f",sellingp);
	}
	else if(costp>=500 && costp<700)
	{
		discount=costp*0.05;
		printf("discount=%2f\n",discount);
		sellingp=costp-discount;
		printf("your total selling price=%.2f",sellingp);
	}
	
	else
	{
		printf("you have no discount\n");
		printf("your total selling price=%f",costp);
	}
}
