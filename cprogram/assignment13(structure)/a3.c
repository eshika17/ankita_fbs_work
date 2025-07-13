#include<stdio.h>
struct admin
{
	int id;
	char name[50];
	int salary;
	int allowance;
};
struct admin storeadmin();
void displayadmin(struct admin a1);
void main()
{
	struct admin a1,a2,a3,a4;
	
	printf("enter first admin details");
	a1=storeadmin();
	
	printf("enter second admin details");
	a2=storeadmin();
	
	printf("enter third admin details");
	a3=storeadmin();
	
	printf("enter fourth admin details");
	a4=storeadmin();
	
	printf("admin details:\n");
	displayadmin(a1);
	displayadmin(a2);
	displayadmin(a3);
	displayadmin(a4);
}
struct admin storeadmin()
{
	struct admin a1;
	scanf("%d%s%d%d",&a1.id,&a1.name,&a1.salary,&a1.allowance);
	return a1;
}
void displayadmin(struct admin a1)
{
	printf("id=%d name=%s salary=%d allowance=%d\n",a1.id,a1.name,a1.salary,a1.allowance);
	
	
}