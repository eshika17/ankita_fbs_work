#include <stdio.h>
struct salesmanager {
	int id;
	char name[20];
	int salary;
	int incentive;
	int target;
};
	int main()
	 {
	struct salesmanager sarr[5];
	int i;
	for(int i=0; i<5; i++)
	 {
			printf("enter detail for salesmanager %d\n",i+1);
			scanf("%d%s%d%d%d",&sarr[i].id,sarr[i].name,&sarr[i].salary,&sarr[i].incentive,&sarr[i].target);
	

		}
	
		printf("details of salesmanager%d\n",i+1);
		for(int i=0; i<5; i++) {
		printf("id=%d Name=%s salary=%d incentive=%d target%d\n",sarr[i].id,sarr[i].name,sarr[i].salary,sarr[i].incentive,sarr[i].target);
}
}