
struct SalesManager {
    int id;
    char name[50];
    int salary;
    int incentive;
    int target;
};

int main() {
    struct SalesManager s1,s2,s3,s4;

    printf("Enter first SalesManager details: ");
    scanf("%d %s %d %d", &s1.id,s1.name,&s1.salary,&s1.incentive,&s1.target);

     printf("Enter second SalesManager details: ");
    scanf("%d %s  %d%d", &s2.id,s1.name,&s2.salary,&s2.incentive,&s2.target);

    printf("Enter third SalesManager details: ");
    scanf("%d %s  %d%d", &s3.id,s3.name,&s3.salary,&s3.incentive,&s3.target);

    printf("Enter fourth SalesManager details: ");
    scanf("%d %s %d %d", &s4.id,s4.name,&s4.salary,&s4.incentive,&s4.target);

    printf("SalesManager Details:\n");
    printf("\nId=%d name=%s salary=%d incentive=%d target=%d",s1.id,s1.name,s1.salary,s1.incentive,s1.target);
    printf("\nId=%d name=%s salary=%d incentive=%d target=%d",s2.id,s2.name,s2.salary,s2.incentive,s2.target);
    printf("\nId=%d name=%s salary=%d incentive=%d target=%d",s3.id,s1.name,s3.salary,s3.incentive,s3.target);
    printf("\nId=%d name=%s salary=%d incentive=%d target=%d",s4.id,s4.name,s4.salary,s4.incentive,s4.target);    
   
}