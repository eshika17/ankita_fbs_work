void average();
int main()
 {
 	average();
 }
 void average()
 {
 
    int num1, num2, num3, num4, num5,average;
   
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

   
    average= (num1 + num2 + num3 + num4 + num5)/5;

	printf("average=%d",average);
}