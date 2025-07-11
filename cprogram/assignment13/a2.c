#include <stdio.h>
struct employee
 {
    int id;
    char name[50];
    int salary;
};
struct employee storeemployee();
void displayemployee(struct employee e1);
void main() 
{
    struct employee e1,e2,e3,e4;

    
    printf("Enter first employee:");
    e1=storeemployee();

    printf("Enter second employee:");
    e2=storeemployee();  

    printf("Enter third employee:");
    e3=storeemployee();
    
	printf("Enter fourth employee:");
    e4=storeemployee();

    displayemployee(e1);
    displayemployee(e2);
    displayemployee(e3);
    displayemployee(e4);
    
}
struct employee storeemployee()
{
	struct employee e1;
	scanf("%d", &e1.id);
	scanf(" %s", &e1.name);
	scanf("%d", &e1.salary);
	return e1;
}
    void displayemployee(struct employee e1)
    {
    	printf("id=%d name=%s salary=%d\n",e1.id,e1.name,e1.salary);
	}
    
    
    
    


