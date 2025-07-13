#include <stdio.h>
struct product {
	int id;
	char name[20];
	int quantity;
	int price;
};
	int main()
	 {
	struct product parr[5];
	int i;
	for(int i=0; i<5; i++)
	 {
			printf("enter detail for product %d\n",i+1);
			scanf("%d%s%d%d",&parr[i].id,parr[i].name,&parr[i].quantity,&parr[i].price);
		    

		}
	
		printf("details of product%d\n",i+1);
		for(int i=0; i<5; i++) {
		printf("id=%d Name=%s salary=%d quantity=%d\n",parr[i].id,parr[i].name,parr[i].quantity,parr[i].price);
}
}