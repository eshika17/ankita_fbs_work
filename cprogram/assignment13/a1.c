#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    int marks;
};

int main()
 {
    struct student s1,s2,s3,s4;

  printf("enter first student details:");
  scanf("%d%s%d",&s1.rollno,&s1.name,&s1.marks);
  
  printf("enter first student details:");
  scanf("%d%s%d",&s2.rollno,&s2.name,&s2.marks);

  printf("enter first student details:");
  scanf("%d%s%d",&s3.rollno,&s3.name,&s3.marks);

  printf("enter first student details:");
  scanf("%d%s%d",&s4.rollno,&s4.name,&s4.marks);
 

    printf("Enter student details:\n");
    printf("rollno=%d name=%s marks=%d\n",s1.rollno,s1.name,s1.marks);
    printf("rollno=%d name=%s marks=%d\n",s1.rollno,s1.name,s1.marks);
    printf("rollno=%d name=%s marks=%d\n",s1.rollno,s1.name,s1.marks);
    printf("rollno=%d name=%s marks=%d\n",s1.rollno,s1.name,s1.marks);
}