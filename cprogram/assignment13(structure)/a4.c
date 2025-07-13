#include<stdio.h>
struct hr
{
	int id;
	char name[50];
	int salary;
	int commission;
};
struct hr storehr();
void displayhr(struct hr a1);
void main()
{
	struct hr a1,a2,a3,a4;
	
	printf("enter first hr details");
	a1=storehr();
	
	printf("enter second hr details");
	a2=storehr();
	
	printf("enter third hr details");
	a3=storehr();
	
	printf("enter fourth hr details");
	a4=storehr();
	
	printf("hr details:\n");
	displayhr(a1);
	displayhr(a2);
	displayhr(a3);
	displayhr(a4);
}
struct hr storehr()
{
	struct hr a1;
	scanf("%d%s%d%d",&a1.id,&a1.name,&a1.salary,&a1.commission);
	return a1;
}
void displayhr(struct hr a1)
{
	printf("id=%d name=%s salary=%d commission=%d\n",a1.id,a1.name,a1.salary,a1.commission);
	
	
}