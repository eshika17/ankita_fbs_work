#include <stdio.h>

int main()
 {
    int a=10,b=20,c=15;

    if (a>b)
	 {
        if(a<c)
            printf("%d is the greatest\n", a);
        else
            printf("%d is the greatest\n", c);
    }
	 else 
	 {
        if (b<c)
            printf("%d is the greatest\n", b);
        else
            printf("%d is the greatest\n", c);
    }
}
