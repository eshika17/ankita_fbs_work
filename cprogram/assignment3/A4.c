#include <stdio.h>
int main() 
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
