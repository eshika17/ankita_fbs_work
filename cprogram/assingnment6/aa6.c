#include<stdio.h>
void main()
{
	int bs=15000;
    
	float basic,da,ta,hra,total_salary;
    
	 printf("Enter the bs total salary:");
    scanf("%f", &bs);


    if (bs<=5000)
	{
        da =bs*0.10;
        ta =bs*0.20;
        hra=bs*0.25;
    } 
	else
	{
        da =bs*0.15;
        ta =bs*0.25;
        hra=bs*0.30;
    }

 total_salary = bs+da+ta+hra;
 printf("Total Salary: %2f total_salary");

}


