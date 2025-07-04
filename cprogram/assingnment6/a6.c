void square();
int main()
 {
 	square();
 }
 void square()
 {
 
    int num;
    
    int square,cube;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    square = num * num;
    cube = num * num * num;
    
     printf("Square of %d is %d\n", num, square);
    printf("Cube of %d is %d\n", num, cube);
    
}

