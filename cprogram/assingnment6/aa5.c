#include<stdio.h>
void ch();
void main()
 {
 	ch();
 }
 void ch()
 {
    char ch;
    printf("Enter alphabate");
    scanf("%c",&ch);
   
    if(ch>='A'&&ch<='Z')
	 {
        printf("The character %c is uppercase",ch);
    }
     else if(ch>='a'&&ch<='z')
	{
        printf("The character %c is lowercase",ch);
    }

   
}
