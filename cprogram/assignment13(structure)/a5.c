#include<stdio.h>
struct salesmanager
{
	int id;
	char name[50];
	int salary;
	int incentive;
	int target;
};
struct salesmanager storesalesmanager();
void displaysalesmanager(struct salesmanager a1);
void main()
{
	struct salesmanager a1,a2,a3,a4;
	
	printf("enter first salesmanager details");
	a1=storesalesmanager();
	
	printf("enter second salesmanager details");
	a2=storesalesmanager();
	
	printf("enter third salesmanager details");
	a3=storesalesmanager();
	
	printf("enter fourth salesmanager details");
	a4=storesalesmanager();
	
	printf("salesmanager details:\n");
	displaysalesmanager(a1);
	displaysalesmanager(a2);
	displaysalesmanager(a3);
	displaysalesmanager(a4);
}
struct salesmanager storesalesmanager()
{
	struct salesmanager a1;
	scanf("%d%s%d%d%d",&a1.id,a1.name,&a1.salary,&a1.incentive,&a1.target);
	return a1;
}
void displaysalesmanager(struct salesmanager a1)
{
	printf("id=%d name=%s salary=%d incentive=%d target=%d\n",a1.id,a1.name,a1.salary,a1.incentive,a1.target);
	
	
}