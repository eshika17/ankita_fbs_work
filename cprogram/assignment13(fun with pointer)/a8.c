typedef struct distance
{
	int feat;
	int inch;
	
}distance;
distance storedistance(distance*);
void displaydistance(distance*);
void main()
{
	distance a1,a2,a3,a4;
	
	printf("enter first distance details:\n");
	storedistance(&a1);
	
	printf("enter second distance details:\n");
	storedistance(&a2);
	
	printf("----distance----details-------\n");
	displaydistance(&a1);
	displaydistance(&a2);

	
	
}
distance storedistance(distance* a)
{
	printf("enter feat and inch ");
	scanf("%d",&a->feat);
	scanf("%s",&a->inch);
	

}
void displaydistance(distance* x)
{
	printf("feat=%d inch=%d\n",x->feat,x->inch);
	
}
	


	


