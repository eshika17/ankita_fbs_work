#include<stdio.h>
void main()
{
	int num1,num2;
	char ch;
	
	printf("Enter the number");
	scanf("%d%d\n",&num1,&num2);
	
	printf("1.enter '+' for addition\n 2.enter'-' for subtraction\n 3.enter'*' for multiplication\n 4.enter'/' for division\n 5.enter'%' for modulus\n");
	scanf("%d",&ch);
	
	if(ch=='+')
		printf("the addition is %d",num1+num2);
	else
		if(ch=='-')
			printf("the subtraction is %d",num1-num2);
		else
			if(ch=='*')
				printf("the multiplication is %d",num1*num2);
			else
				if(ch=='/')
					printf("the division is %d",num1/num2);
				else
					if(ch=='%')
						printf("the modulus is %d",num1%num2);
					else
						printf("invalid");
						
		
}