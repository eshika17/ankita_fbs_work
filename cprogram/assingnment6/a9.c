void area();
int main() 
{
	area();
}
void area()
{
    float base, height, area;

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
   
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("The area of the triangle is: %.2f\n", area);

}
