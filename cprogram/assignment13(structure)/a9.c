#include<stdio.h>
struct complex
{
	int real;
	int imaginary;
};
struct complex storecomplex();
void displaycomplex(struct complex a1);
void main()
{
	struct complex a1,a2;
	
	printf("enter first hr details");
	a1=storecomplex();
	
	printf("enter second hr details");
	a2=storecomplex();
	
	printf("copmlex details:\n");
	displaycomplex(a1);
	displaycomplex(a2);
}
struct complex storecomplex()
{
	struct complex a1;
	scanf("%d%d",&a1.real,&a1.imaginary);
	return a1;
}
void displaycomplex(struct complex a1)
{
	printf("real=%d imaginary=%d\n",a1.real,a1.imaginary);
	
	
}