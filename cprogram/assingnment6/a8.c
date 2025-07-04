void perimeter();
int main() 
{
	perimeter();
}
void perimeter()
{
    float length, width, perimeter;

    printf("Enter the length of the rectangle: ");

    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    perimeter = 2 * (length + width);

    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

}
