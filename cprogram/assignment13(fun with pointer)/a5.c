typedef struct salesmanager
{
	int id;
	char name[20];
	int salary;
	int incentive;
	int target;
}salesmanager;
salesmanager storesalesmanager(salesmanager*);
void displaysalesmanager(salesmanager*);
int main()
{
	salesmanager a1,a2,a3,a4;
	printf("enter first salesmanager details:\n");
	storesalesmanager(&a1);
	
	printf("enter second salesmanager details:\n");
	storesalesmanager(&a2);
	
	printf("enter third salesmanger details:\n");
	storesalesmanger(&a3);
	
	printf("enter fourth salesmanager details:\n");
	storesalesmanager(&a4);
	
	printf("----salesmanager----details-------\n");
	displaysalesmanager(&a1);
	displaysalesmanager(&a2);
	displaysalesmanager(&a3);
	displaysalesmanager(&a4);
	
}
salesmanager storesalesmanager(salesmanager* a)
{
	printf("enter id name salary and incentive target");
	scanf("%d",&a->id);
	scanf("%s",&a->name);
	scanf("%d",&a->salary);
	scanf("%d",&a->incentive);
	scanf("%d",&a->target);
	
}
void displaysalesmanager(salesmanager* x)
{
	printf("id=%d name=%s salary=%d incentive=%d target=%d\n",x->id,x->name,x->salary,x->incentive,x->target);
	
}
	


	


