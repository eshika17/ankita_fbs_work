#include <stdio.h>
struct employee {
	int id;
	char name[20];
	int salary;
};
void main()
	 {
	struct employee earr[5];
	int i;
	for(int i=0; i<5; i++)
	 {
			printf("enter detail for employee %d:\n",i+1);
			scanf("%d%s%d",&earr[i].id,earr[i].name,&earr[i].salary);
		    

		}
	
		printf("details of employee%d\n",i+1);
		for(int i=0; i<5; i++) {
		printf("id=%d Name=%s salary=%d\n",earr[i].id,earr[i].name,earr[i].salary);
}
}