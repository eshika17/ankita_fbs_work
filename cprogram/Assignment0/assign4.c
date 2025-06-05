int main()
 {
   int a, b, temp;

   printf("Enter first numbers a: ");
   scanf("%d",&a);
    
   printf("Enter second numbers b: ");
   scanf("%d",&b);

   temp = a;
   a = b;
   b = temp;
   
   printf("a = %d\n", a);
   printf("b = %d\n", b);
   
}
