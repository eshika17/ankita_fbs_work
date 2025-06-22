#include<stdio.h>
void main()
 {
    int num1, num2, num3;
    printf("Enter numbers");
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1 == num2 && num2 == num3 && num1==num3)
        printf("The triangle is Equilateral");
        
    else if (num1 == num2 || num2 == num3 || num1 == num3)
        printf("The triangle is Isosceles");
        
	else if(num1!=0 || num2!=0 || num3!=0)
        printf("The triangle is Scalene");


}

