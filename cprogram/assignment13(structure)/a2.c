#include<stdio.h>
struct employee
{
	int id;
	char name[50];
	int salary;
};
struct employee storeemployee();
void displayemployee(struct employee a1);
void main()
{
	struct employee a1,a2,a3,a4;
	
	printf("enter first employee details");
	a1=storeemployee();
	
	printf("enter second employee details");
	a2=storeemployee();
	
	printf("enter third employee details");
	a3=storeemployee();
	
	printf("enter fourth employee details");
	a4=storeemployee();
	
	printf("employee details:\n");
	displayemployee(a1);
	displayemployee(a2);
	displayemployee(a3);
	displayemployee(a4);
}
struct employee storeemployee()
{
	struct employee a1;
	scanf("%d%s%d",&a1.id,a1.name,&a1.salary);
	return a1;
}
void displayemployee(struct employee a1)
{
	printf("id=%d name=%s salary=%d\n",a1.id,a1.name,a1.salary);
	
	
}