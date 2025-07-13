#include<stdio.h>
typedef struct student
{
    int rollno;
    char name[20];
    int marks;
}student;
student storestudent(student*);
void displaystudent(student*);
void main()
 {
    struct student s1,s2;
    storestudent(&s1);
    storestudent(&s2);

    printf("student details:\n");
    displaystudent(&s1);
    displaystudent(&s2);
}
student storestudent(student* x)
{
    printf("enter rollno name and marks");
    	scanf("%d",&x->rollno);
    	scanf("%s",&x->name);
    	scanf("%d",&x->marks);
}
	void displaystudent(student* x)
{
		printf("rollno=%d name=%s marks=%d\n",x->rollno,x->name,x->marks);
}

