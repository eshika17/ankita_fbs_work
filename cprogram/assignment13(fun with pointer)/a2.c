#include <stdio.h>
typedef struct employee
 {
    int id;
    char name[50];
    int salary;
}employee;
employee storeemployee(employee*);
void displayemployee(employee*);
void main() 
{
    struct employee e1,e2;

    storeemployee(&e1);
    storeemployee(&e2);

    printf("employee details:\n");
    displayemployee(&e1);
    displayemployee(&e2);
}
 employee storeemployee(employee* x)
{
	printf("enter id name and salary");
		scanf("%d",&x->id);
    	scanf("%s",&x->name);
    	scanf("%d",&x->salary);
}
void displayemployee(employee* x)
    {
    	printf("id=%d name=%s salary=%d\n",x->id,x->name,x->salary);
	}
    
    
    
    


