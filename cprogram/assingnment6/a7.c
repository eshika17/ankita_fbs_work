void minutes();
int main()
 {
 	minutes();
 }
 void minutes()
{
    int minutes, hours, remaining_minutes;

     printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;
    remaining_minutes = minutes % 60;

    printf("%d minutes is equal to %d hour and %d minute\n", minutes, hours, remaining_minutes);
}
