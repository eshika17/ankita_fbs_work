#include<stdio.h>
struct product
{
	int id;
	char name[50];
	int quantity;
	int price;
};
struct product storeproduct();
void displayproduct(struct product a1);
void main()
{
	struct product a1,a2,a3,a4;
	
	printf("enter first product details");
	a1=storeproduct();
	
	printf("enter second product details");
	a2=storeproduct();
	
	printf("enter third product details");
	a3=storeproduct();
	
	printf("enter fourth product details");
	a4=storeproduct();
	
	printf("product details:\n");
	displayproduct(a1);
	displayproduct(a2);
	displayproduct(a3);
	displayproduct(a4);
}
struct product storeproduct()
{
	struct product  a1;
	scanf("%d%s%d%d",&a1.id,&a1.name,&a1.quantity,&a1.price);
	return a1;
}
void displayproduct(struct product a1)
{
	printf("id=%d name=%s quantity=%d price=%d\n",a1.id,a1.name,a1.quantity,a1.price);
	
	
}