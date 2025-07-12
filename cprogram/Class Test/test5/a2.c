//to initalize some amount in your account.
//then give choice to user for deposite or withdrow.
//and display updated amount. condition to withdraw if the balance is less than
//3000 display can't withdraw the amount balance is not sufficient.
#include<stdio.h>
void main()
{
	float balance,amount;
	int choice;
	
	printf("enter initial balance in your account");
    scanf("%f",&balance);  
	
 printf("1.deposite");
 printf("2.withdraw\n");
 printf("enter your choice:");
 scanf("%d",&choice);
 
 if(choice==1)
 {
 	printf("enter your deposite number");
 	scanf("%f",&amount);
 	balance=balance+amount;
 	printf("your total amount=%.2f",balance);
 }
	else if(choice==2)
	{
		printf("enter your withdraw amount");
		scanf("%f",&amount);
		
	if(balance>3000)
	{
		balance=balance-amount;
		printf("%.2f",balance);
	}
	else
	{
		printf("your balance has invalide");
	}
	
	}
	else
	{
		printf("invalid choice");
		
	}
}