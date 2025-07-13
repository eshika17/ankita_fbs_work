#include<stdio.h>
struct date
{
	int date;
	char month[50];
	int year;
};
struct date storedate();
void displaydate(struct date a1);
void main()
{
	struct date a1,a2,a3,a4;
	
	printf("enter first date details");
	a1=storedate();
	
	printf("enter second date details");
	a2=storedate();
	
	printf("enter third date details");
	a3=storedate();
	
	printf("date details:\n");
	displaydate(a1);
	displaydate(a2);
	displaydate(a3);
}
struct date storedate()
{
	struct date a1;
	scanf("%d%s%d",&a1.date,&a1.month,&a1.year);
	return a1;
}
void displaydate(struct date a1)
{
	printf("date=%d month=%s year=%d\n",a1.date,a1.month,a1.year);
	
	
}