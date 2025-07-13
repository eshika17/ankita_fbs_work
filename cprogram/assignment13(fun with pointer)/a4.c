typedef struct hr
{
	int id;
	char name[20];
	int salary;
	int commission;
}hr;
hr storehr(hr*);
void displayhr(hr*);
void main()
{
	hr a1,a2,a3,a4;
	
	printf("enter first hr details:\n");
	storehr(&a1);
	
	printf("enter second hr details:\n");
	storehr(&a2);
	
	printf("enter third hr details:\n");
	storehr(&a3);
	
	printf("enter fourth hr details:\n");
	storehr(&a4);
	
	printf("----hr----details-------\n");
	displayhr(&a1);
	displayhr(&a2);
	displayhr(&a3);
	displayhr(&a4);
	
}
hr storehr(hr* a)
{
	printf("enter id name salary and commission");
	scanf("%d",&a->id);
	scanf("%s",&a->name);
	scanf("%d",&a->salary);
	scanf("%d",&a->commission);
	
}
void displayhr(hr* x)
{
	printf("id=%d name=%s salary=%d commission=%d\n",x->id,x->name,x->salary,x->commission);
	
}
	


	


