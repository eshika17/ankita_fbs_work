//admin(id,name,salary,allowance)
typedef struct admin
{
	int id;
	char name[20];
	int salary;
	int allowance;
}
admin;
admin storeadmin(admin*);
void displayadmin(admin*);
void main()
{
	admin a1,a2,a3,a4;
	
	printf("enter first admin details:\n");
	storeadmin(&a1);
	
	printf("enter second admin details:\n");
	storeadmin(&a2);
	
	printf("enter third admin details:\n");
	storeadmin(&a3);
	
	printf("enter fourth admin details:\n");
	storeadmin(&a4);
	
	printf("----admin----details-------\n");
	displayadmin(&a1);
	displayadmin(&a2);
	displayadmin(&a3);
	displayadmin(&a4);
	
}
admin storeadmin(admin* a)
{
	printf("enter id name salary and allowance");
	scanf("%d",&a->id);
	scanf("%s",&a->name);
	scanf("%d",&a->salary);
	scanf("%d",&a->allowance);
	
}
void displayadmin(admin* x)
{
	printf("id=%d name=%s salary=%d allowance=%d\n",x->id,x->name,x->salary,x->allowance);
	
}
	


	


