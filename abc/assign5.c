int main()
 {
    int num1, num2, num3, num4, num5, average;
   
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

   
    average = (num1 + num2 + num3 + num4 + num5) /5.0;

    printf("The average of the given numbers is: %.2f\n", average);

}
