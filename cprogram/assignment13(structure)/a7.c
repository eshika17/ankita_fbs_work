#include<stdio.h>
struct time
{
	int hour;
	char min[50];
	int sec;
};
struct time storetime();
void displaytime(struct time a1);
void main()
{
	struct time a1,a2,a3;
	
	printf("enter first time details");
	a1=storetime();
	
	printf("enter second time details");
	a2=storetime();
	
	printf("enter third time details");
	a3=storetime();
	
	printf("time details:\n");
	displaytime(a1);
	displaytime(a2);
	displaytime(a3);
}
struct time storetime()
{
	struct time a1;
	scanf("%d%s%d",&a1.hour,&a1.min,&a1.sec);
	return a1;
}
void displaytime(struct time a1)
{
	printf("hour=%d min=%s sec=%d\n",a1.hour,a1.min,a1.sec);
	
	
}