#include <stdio.h>
struct Time {
    int hour;
    int min;
    int sec;
};

int main() {
    struct Time t1,t2,t3,t4;
	
	printf("Enter first time:");
    scanf("%d%d%d",&t1.hour,&t1.min,&t1.sec);

    printf("Enter second time:");
    scanf("%d%d%d",&t2.hour,&t2.min,&t2.sec);
	
	printf("Enter third time:");
    scanf("%d%d%d",&t3.hour,&t3.min,&t3.sec);


    printf("\nhour=%d min=%d sec=%d",t1.hour,t1.min,t1.sec);
    printf("\nhour=%d min=%d sec=%d",t2.hour,t2.min,t2.sec);
    printf("\nhour=%d min=%d sec=%d",t3.hour,t3.min,t3.sec);
}