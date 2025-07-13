struct employee {
    int id;
    char name[50];
    int salary;
};

int main() {
    struct employee e1,e2,e3;

    printf("Enter first employee details: ");
    scanf("%d %s %d", &e1.id,e1.name,&e1.salary);

     printf("Enter second employee details: ");
    scanf("%d %s %d", &e2.id,e2.name,&e2.salary);

    printf("Enter third employee details: ");
    scanf("%d %s %d", &e3.id,e3.name,&e3.salary);

    printf("employee Details:\n");
    printf("\nId=%d name=%s salary=%d",e1.id,e1.name,e1.salary);
    printf("\nId=%d name=%s salary=%d",e2.id,e2.name,e2.salary);
    printf("\nId=%d name=%s salary=%d",e3.id,e3.name,e3.salary);
    
   
}
    
    
    
    


