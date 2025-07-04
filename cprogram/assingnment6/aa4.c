#include <stdio.h>
void age(int*);
void eligible();
void main()
 {
eligible();
 }
 void eligible()
 {
    int age=2;
    if (age <= 19) 
	{
        printf("You are eligible to vote.\n");
    } 
	else
	{
        printf("You are not eligible to vote.\n");
    }
}