#include<stdio.h>
void year();
void main()
{
	year();
}
void year()
{
	int year=2024;
	if(year%4==0)
	printf("year is leap");
	else
		printf("year is not leap");
}