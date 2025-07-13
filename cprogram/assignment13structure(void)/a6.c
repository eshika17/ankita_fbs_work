#include <stdio.h>
struct Date {
    int date;
    int month;
    int year;
};

int main() {
    struct Date e1,e2,e3,e4;

    
    printf("Enter first date: ");
    scanf("%d%d%d",&e1.date,&e1.month,&e1.year);

    printf("Enter second date: ");
    scanf("%d%d%d",&e2.date,&e2.month,&e2.year);

    printf("Enter third date: ");
    scanf("%d%d%d",&e3.date,&e3.month,&e3.year);
    
    printf("Enter fourth date: ");
    scanf("%d%d%d",&e3.date,&e3.month,&e3.year);

    
   printf("date details:\n");
   printf("\ndate=%d month=%d year=%d",e1.date,e1.month,e1.year);
   printf("\ndate=%d month=%d year=%d",e2.date,e2.month,e2.year);
   printf("\ndate=%d month=%d year=%d",e3.date,e3.month,e3.year);
   printf("\ndate=%d month=%d year=%d",e4.date,e4.month,e4.year);


}