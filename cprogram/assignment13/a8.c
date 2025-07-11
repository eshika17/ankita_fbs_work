#include <stdio.h>
struct Distance
 {
    int feet;
    int inch;
};

int main() {
    struct Distance d1,d2,d3;

    printf("Enter first distance: ");
    scanf("%d%d",&d1.feet,&d1.inch);

    printf("Enter second distance: ");
    scanf("%d%d",&d2.feet,&d2.inch);
    
    printf("Enter second distance: ");
    scanf("%d%d",&d3.feet,&d3.inch);
    
    printf("distance details:\n");
   printf("\nfeet=%d inch=%d",&d1.feet,d1.inch);
   printf("\nfeet=%d inch=%d",&d2.feet,d2.inch);
   printf("\nfeet=%d inch=%d",&d3.feet,d3.inch);
}