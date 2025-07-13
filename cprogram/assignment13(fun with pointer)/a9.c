typedef struct complex
{
	int real;
	int imaginary;
	
}complex;
complex storecomplex(complex*);
void displaycomplex(complex*);
void main()
{
	complex a1,a2,a3,a4;
	
	printf("enter first complex details:\n");
	storecomplex(&a1);
	
	printf("enter second complex details:\n");
	storecomplex(&a2);
	
	
	
	printf("----complex----details-------\n");
	displaycomplex(&a1);
	displaycomplex(&a2);
	
	
	
}
complex storecomplex(complex* a)
{
	printf("enter real and imaginary ");
	scanf("%d",&a->real);
	scanf("%s",&a->imaginary);
	

}
void displaycomplex(complex* x)
{
	printf("real=%d imaginary=%d\n",x->real,x->imaginary);
	
}
	


	


