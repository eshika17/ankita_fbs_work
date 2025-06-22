#include<stdio.h>
void greatest();
int main() 
{
	greatest();
}
void greatest()
{
    int x='2',y='4',z='7';

    if (x<y)
	 {
        if (y>z)
		 {
            printf("The x is greatest:",x);
        } 
		else
		 {
            printf("The y greatest  is:",z);
        }
    }
	
	 else {
        if (y>z)
		 {
            printf("The y greatest  is:",y);
        }
		 else
		 {
            printf("The z greatest  is:",z);
        }
    }
}