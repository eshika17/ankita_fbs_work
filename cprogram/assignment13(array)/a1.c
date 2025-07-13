#include <stdio.h>
struct student {
	int rollno;
	char name[20];
	int marks;
};
	void main()
	 {
	struct student sarr[5];
	int i;
	for(int i=0; i<5; i++)
	 {
			printf("enter detail for student %d:\n",i+1);
		scanf("%d%s%d",&sarr[i].rollno,sarr[i].name,&sarr[i].marks);
		    

		}
	
		printf("details of student%d\n",i+1);
		for(int i=0; i<5; i++) {
		printf("Rollno=%d Name=%s Marks=%d\n",sarr[i].rollno,sarr[i].name,sarr[i].marks);
}
}