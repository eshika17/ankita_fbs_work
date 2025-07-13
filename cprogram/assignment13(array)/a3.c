#include<stdio.h>

struct admin
 {
    int id;
    char name[20];  
    int salary;
    int allowance;
};
int main()
 {
    struct admin aarr[5];
    for (int i = 0; i < 5; i++)
	 {
        printf("Enter details for admin %d:\n", i + 1);
        scanf("%d%s%d%d",&aarr[i].id,aarr[i].name,&aarr[i].salary,&aarr[i].allowance);
		    
    }
    printf("\nadmin details:\n");
    for (int i = 0; i < 5; i++)
	 {
       printf("id=%d Name=%s salary=%d allowance=%d\n",aarr[i].id,aarr[i].name,aarr[i].salary,aarr[i].allowance);
}
}