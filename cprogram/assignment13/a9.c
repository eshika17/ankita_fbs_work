#include <stdio.h>
struct Complex {
    float real;
    float imaginary;
};

int main() {
    struct Complex c1,c2,c3;

    
    
    printf("Enter first complex:");
    scanf("%d%d",&c1.real,c1.imaginary);

    printf("Enter first complex:");
    scanf("%d%d",&c2.real,c2.imaginary);
    
    printf("Enter first complex:");
    scanf("%d%d",&c3.real,c3.imaginary);
  

   printf("complex details:\n");
   printf("\nreal=%d imaginary=%d",&c1.real,&c1.imaginary);
   printf("\nreal=%d imaginary=%d",&c2.real,&c2.imaginary);
   printf("\nreal=%d imaginary=%d",&c3.real,&c3.imaginary);

}
