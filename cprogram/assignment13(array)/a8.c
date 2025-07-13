#include <stdio.h>
struct distance {
	int feet;
	char inch[20];
	
};
	int main()
	 {
	struct distance darr[5];
	int i;
	for(int i=0; i<5; i++)
	 {
			printf("enter detail for distance %d\n",i+1);
			scanf("%d%d",&darr[i].feet,&darr[i].inch);
		    

		}
	
		printf("details of darr%d\n",i+1);
		for(int i=0; i<5; i++) {
		printf("feet=%d inch=%d\n",darr[i].feet,darr[i].inch);
}
}