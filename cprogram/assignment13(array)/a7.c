#include <stdio.h>
struct time {
	int hour;
	char min[20];
	int sec;
	
};
	int main()
	 {
	struct time tarr[5];
	int i;
	for(int i=0; i<5; i++)
	 {
			printf("enter detail for time %d\n",i+1);
			scanf("%d%s%d",&tarr[i].hour,&tarr[i].min,&tarr[i].sec);
		    

		}
	
		printf("details of time%d\n",i+1);
		for(int i=0; i<5; i++) {
		printf("hour=%d min=%s sec=%d\n",tarr[i].hour,tarr[i].min,tarr[i].sec);
}
}