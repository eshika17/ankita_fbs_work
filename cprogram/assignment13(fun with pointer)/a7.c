typedef struct time
{
	int hour;
	char min[20];
	int sec;
	
}time;
time storetime(time*);
void displaytime(time*);
void main()
{
	time a1,a2,a3,a4;
	
	printf("enter first time details:\n");
	storetime(&a1);
	
	printf("enter second time details:\n");
	storetime(&a2);
	
	printf("enter third time details:\n");
	storetime(&a3);
	
	
	printf("----time----details-------\n");
	displaytime(&a1);
	displaytime(&a2);
	displaytime(&a3);
	
	
}
time storetime(time* a)
{
	printf("enter hour min and sec");
	scanf("%d",&a->hour);
	scanf("%s",&a->min);
	scanf("%d",&a->sec);

}
void displaytime(time* x)
{
	printf("hour=%d min=%s sec=%d\n",x->hour,x->min,x->sec);
	
}
	


	


