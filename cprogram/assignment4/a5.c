#include<stdio.h>
void main()
{
	printf("enetr 1 for to check the even or odd\n");
	printf("enter 2 for to check prime or not\n");
	printf("enter 3 for to check pallindrom or not\n");
	printf("enter 4 for to check number is positive or nigative\n");
	printf("enter 5 for to check to reverse the number\n");
	printf("enter 6 for to check to sum of digit\n");
	
	int choice,exit;
	printf("enter choice\n");
	scanf("%d",&choice);
	 
	if(choice==1)
     {
	 int num;
     printf("enter number\n");
     scanf("%d",&num);
      
    if(num%2==0)
    {
    	printf("number is even\n");
    }
    else
		printf("number is odd\n");
	}
 else if(choice==2)
{
    int n=11,prime=0;
    for (int i=2;i<n;i++)
	 {
        if (n%i==0) 
		{
        prime=1;
        break;
        }
        }
    if(prime==0)
    {
    	printf("%d is prime",n);
    }
    else
	{
	 	printf("%d is not prime",n);
	}
}

else if(choice==3)
 {
    int n=1221,rev=0,temp,dig;
    temp=n;
    while(temp>0)
	{
        dig=temp%10;
        rev=rev*10+dig;
        temp/=10;
    }
    if(n==rev)
        printf("%d palindrome\n",n);
    else
        printf("%d not palindrome\n",n);
        
}
else if(choice==4)
	{
	int n;
	printf("enter the number");
	scanf("%d",&n);

	if(n>0)
	printf("%d is positive",n);
	else if(n<0)
	printf("%d is nigative",n);
	else 
	printf("%d is neutral",n);
}
else if(choice==5)
{
    int num,reversed=0;

    printf("Enter a number:");
    scanf("%d", &num);

    while(num!=0) 
	{
        int digit=num%10;
        reversed=reversed*10+digit;
        num/=10;
    }
	printf("Reversed number:%d\n",reversed);
   }
else if(choice==6)
 {
    int num,sum=0;
    printf("Enter a number");
    scanf("%d",&num);

    while (num>0)
	 {
	 	num%10;
        sum=sum+num;  
        num/10;       
    }
    printf("Sum of digits: %d\n",sum);
}
}
