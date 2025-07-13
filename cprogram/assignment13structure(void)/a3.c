#include<stdio.h>
struct admin 
{
    int id;
    char name[20];
    int salary;
    int allowance;
};
int main() {
    struct admin a1,a2,a3,a4;

    printf("Enter first admin details: ");
    scanf("%d%s%d%d",&a1.id,a1.name,&a1.salary,&a1.allowance);
    
    printf("Enter second admin details: ");
    scanf("%d%s%d%d",&a2.id,a2.name,&a2.salary,&a2.allowance);

    printf("Enter third admin details: ");
    scanf("%d%s%d%d",&a3.id,a3.name,&a3.salary,&a3.allowance);
	
	printf("Enter fourth admin details: ");
    scanf("%d%s%d%d",&a4.id,a4.name,&a4.salary,&a4.allowance);


    
    printf("HR salary Details:\n");
    printf("id=%d name=%s salary=%d allowance=%d\n",a1.id,a1.name,a1.salary,a1.allowance);
    printf("id=%d name=%s salary=%d allowance=%d\n",a2.id,a2.name,a2.salary,a2.allowance);
    printf("id=%d name=%s salary=%d allowance=%d\n",a3.id,a3.name,a3.salary,a3.allowance);
    printf("id=%d name=%s salary=%d allowance=%d\n",a4.id,a4.name,a4.salary,a4.allowance);
}
