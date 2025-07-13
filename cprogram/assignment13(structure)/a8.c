#include<stdio.h>
struct distance
{
	int feet;
	int inch;
};
struct distance storedistance();
void displaydistance(struct distance a1);
void main()
{
	struct distance a1,a2,a3,a4;
	
	printf("enter first distance details");
	a1=storedistance();
	
	printf("enter second distance details");
	a2=storedistance();
	
	printf("enter third distance details");
	a3=storedistance();
	
	printf("enter fourth distance details");
	a4=storedistance();
	
	printf("distance details:\n");
	displaydistance(a1);
	displaydistance(a2);
	displaydistance(a3);
	displaydistance(a4);
}
struct distance storedistance()
{
	struct distance a1;
	scanf("%d%d",&a1.feet,&a1.inch);
	return a1;
}
void displaydistance(struct distance a1)
{
	printf("feet=%d inch=%d=%d \n",a1.feet,a1.inch);
	
	
}