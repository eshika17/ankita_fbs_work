#include<stdio.h>
void vowel();
int main()
 {
 	vowel();
 }
 void vowel()
 {
    char ch='A';
   {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
       
	    printf("%c is a vowel", ch);
    
	else
        printf("%c is a consonant", ch);
    }
}
