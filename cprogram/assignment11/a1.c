//Write a program to scan string from user then scan a single character and search it in a accepted string.
#include <stdio.h>
IsString(char str,int size);
void string();
void main()
 {
 	string();
 }
 void string()
 {
    char str[100];
    char ch;
    int found=0;
    int i=0;


    printf("Enter a string:");
    scanf("%s",&str);

    printf("Enter a character to search: ");
    scanf(" %c", &ch); 
	
	IsString(str,10); 
    

//    for(int i=0;str[i]!='\0';i++)
//	  {
//	        if(str[i]==ch)
//			{
//	            printf("Character'%c'found at position %d\n",ch,i);
//	            found = 1;
//	        }
//    	}
//    if(!found)
//	 {
//        printf("Character'%c'not found in the string.\n",ch);
//    }

}

IsString(char str,int size)
{
	for(int i=0;str[i]!='\0';i++)
	  {
	        if(str[i]==ch)
			{
	            printf("Character'%c'found at position %d\n",ch,i);
	            found = 1;
	        }
    	}
    if(!found)
	 {
        printf("Character'%c'not found in the string.\n",ch);
    }
}
