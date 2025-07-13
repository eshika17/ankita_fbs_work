typedef struct date
{
	int date;
	char month[20];
	int year;
	
}date;
date storedate(date*);
void displaydate(date*);
void main()
{
	date a1,a2,a3,a4;
	
	printf("enter first date details:\n");
	storedate(&a1);
	
	printf("enter second date details:\n");
	storedate(&a2);
	
	printf("enter third date details:\n");
	storedate(&a3);
	
	
	printf("----date----details-------\n");
	displaydate(&a1);
	displaydate(&a2);
	displaydate(&a3);
	
	
}
date storedate(date* a)
{
	printf("enter date name month and year");
	scanf("%d",&a->date);
	scanf("%s",&a->month);
	scanf("%d",&a->year);

}
void displaydate(date* x)
{
	printf("date=%d month=%s year=%d\n",x->date,x->month,x->year);
	
}
	


	


