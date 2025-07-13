typedef struct product
{
	int id;
	char name[20];
	int quantity;
	int price;
}product;
product storeproduct(product*);
void displayproduct(product*);
void main()
{
	product a1,a2,a3,a4;
	
	printf("enter first product details:\n");
	storeproduct(&a1);
	
	printf("enter second product details:\n");
	storeproduct(&a2);
	
	printf("enter third product details:\n");
	storeproduct(&a3);
	
	printf("enter fourth product details:\n");
	storeproduct(&a4);
	
	printf("----product----details-------\n");
	displayproduct(&a1);
	displayproduct(&a2);
	displayproduct(&a3);
	displayproduct(&a4);
	
}
product storeproduct(product* a)
{
	printf("enter id name quantity and price");
	scanf("%d",&a->id);
	scanf("%s",&a->name);
	scanf("%d",&a->quantity);
	scanf("%d",&a->price);
	
}
void displayproduct(product* x)
{
	printf("id=%d name=%s quantity=%d price=%d\n",x->id,x->name,x->quantity,x->price);
	
}
	


	


