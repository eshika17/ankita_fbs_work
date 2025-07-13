#include<stdio.h>
struct student
{
	int rollno;
	char name[50];
	int marks;
	
};
struct student storestudent();
void displaystudent(struct student a1);
void main()
{
	struct student a1,a2,a3,a4;
	
	printf("enter first student details");
	a1=storestudent();
	
	printf("enter second student details");
	a2=storestudent();
	
	printf("enter third student details");
	a3=storestudent();
	
	printf("enter fourth student details");
	a4=storestudent();
	
	printf("student details:\n");
	displaystudent(a1);
	displaystudent(a2);
	displaystudent(a3);
	displaystudent(a4);
}
struct student storestudent()
{
	struct student a1;
	scanf("%d%s%d",&a1.rollno,a1.name,&a1.marks);
	return a1;
}
void displaystudent(struct student a1)
{
	printf("id=%d name=%s smarks=%d\n",a1.rollno,a1.name,a1.marks);
	
	
}