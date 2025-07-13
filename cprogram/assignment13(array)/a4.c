#include <stdio.h>
struct hr {
	int id;
	char name[20];
	int salary;
	int commission;
};
	int main()
	 {
	struct hr harr[5];
	int i;
	for(int i=0; i<5; i++)
	 {
			printf("enter detail for hr %d\n",i+1);
			scanf("%d%s%d%d",&harr[i].id,harr[i].name,&harr[i].salary,&harr[i].commission);
		    

		}
	
		printf("details of hr%d\n",i+1);
		for(int i=0; i<5; i++) {
		printf("id=%d Name=%s salary=%d commission=%d\n",harr[i].id,harr[i].name,harr[i].salary,harr[i].commission);
}
}