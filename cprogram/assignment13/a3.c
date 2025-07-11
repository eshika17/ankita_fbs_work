#include<stdio.h>
struct admin 
{
    int id;
    char name[20];
    int salary;
    int allowance;
};
struct admin storeadmin();
void diaplayadmin(struct admin a1);
void main()
 {
    struct admin a1,a2,a3,a4;

    printf("Enter first admin detail:");
    a1=storeadmin();

    printf("Enter second admin detail:");
    a2=storeadmin();

    printf("Enter third admin detail:");
    a3=storeadmin();

    printf("Enter fourth admin detail:");
    a4=storeadmin();

    displayadmin(a1);
    displayadmin(a2);
    displayadmin(a3); 
	displayadmin(a4);
}
struct admin storeadmin()
{
struct admin a1;    
    scanf("%d%s%d%d",&a1.id,&a1.name,&a1.salary,&a1.allowance);
    return a1;
}
void displayadmin(struct admin a1)
    {
	
printf(" id=%d name=%d salary=%d allowance=%d\n",a1.id,a1.name,a1.salary,a1.allowance);
   
}
