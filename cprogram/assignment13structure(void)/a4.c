#include <stdio.h>
struct HR {
    int id;
    char name[50];
    int salary;
    int commission;
};

int main() {
    struct HR h1,h2,h3,h4;

    printf("Enter first HR details: ");
    scanf("%d%s%d%d",&h1.id,h1.name,&h1.salary,&h1.commission);
    
    printf("Enter second HR details: ");
    scanf("%d%s%d%d",&h2.id,h2.name,&h2.salary,&h2.commission);

    printf("Enter third HR details: ");
    scanf("%d%s%d%d",&h3.id,h3.name,&h3.salary,&h3.commission);
	
	printf("Enter fourth HR details: ");
    scanf("%d%s%d%d",&h4.id,h4.name,&h4.salary,&h4.commission);


    
    printf("HR salary Details:\n");
    printf("id=%d name=%s salary=%d commission=%d\n",h1.id,h1.name,h1.salary,h1.commission);
    printf("id=%d name=%s salary=%d commission=%d\n",h2.id,h2.name,h2.salary,h2.commission);
    printf("id=%d name=%s salary=%d commission=%d\n",h3.id,h3.name,h3.salary,h3.commission);
    printf("id=%d name=%s salary=%d commission=%d\n",h4.id,h4.name,h4.salary,h4.commission);



}