#include<stdio.h>

int main()
{
	float radius,area;
	const float pi=3.14;
	
	printf("enter the radius of circle");
	
	scanf("%f",&radius);
	
	area=pi * radius * radius;
	printf("%2f \n",area);
	
}