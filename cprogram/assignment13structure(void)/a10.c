#include <stdio.h>
struct Product {
    int id;
    char name[50];
    int quantity;
    int price;
};
int main()
{
struct Product p1,p2,p3,p4;

    printf("Enter first product:");
    scanf("%d%s%d%d",&p1.id,p1.name,&p1.quantity,&p1.price);

    printf("Enter second product:");
    scanf("%d%s%d%d",&p2.id,p2.name,&p2.quantity,&p1.price);
   
    printf("Enter third product:");
    scanf("%d%s%d%d",&p3.id,p3.name,&p3.quantity,&p1.price);
    
    printf("Enter fourth product:");
    scanf("%d%s%d%d",&p4.id,p4.name,&p4.quantity,&p1.price);
    
    printf("product details:\n");
    printf("\nid=%d name=%s quantity=%d price=%d",p1.id,p1.name,p1.quantity,p1.price);
    printf("\nid=%d name=%s quantity=%d price=%d",p2.id,p2.name,p2.quantity,p2.price);
    printf("\nid=%d name=%s quantity=%d price=%d",p3.id,p3.name,p3.quantity,p3.price);
    printf("\nid=%d name=%s quantity=%d price=%d",p4.id,p4.name,p4.quantity,p4.price);
}

