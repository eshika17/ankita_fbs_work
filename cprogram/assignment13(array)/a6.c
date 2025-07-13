#include <stdio.h>
struct date{
	int date;
	char month[20];
	int year;
	
};
	int main()
	 {
	struct date darr[5];
	int i;
	for(int i=0; i<5; i++)
	 {
			printf("enter detail for date %d\n",i+1);
			scanf("%d%s%d",&darr[i].date,darr[i].month,&darr[i].year);
		    

		}
	
		printf("details of date%d\n",i+1);
		for(int i=0; i<5; i++) {
		printf("date=%d month=%s year=%d\n",darr[i].date,darr[i].month,darr[i].year);
}
}