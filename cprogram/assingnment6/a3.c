void celsius();
void main()
 {
 	celsius();
 }
 void celsius()
 {
    float celsius, fahrenheit;

   
    printf("Enter temperature in Celsius:");
    scanf("%f", &celsius);

    
    fahrenheit = (celsius * 9 / 5) + 32;

   
    printf("Temperature in Fahrenheit: %.2lf\n", fahrenheit);

}