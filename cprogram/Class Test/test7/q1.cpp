#include<stdio.h>
int main()
{
char* mystrchr(const char* str, char ch){
    while (*str != '\0')
	 {
        if (*str == ch) 
		{
            return (char*)str;
        }
        str++;
    }
    if (ch == '\0') 
	{
        return (char*)str;
}
    
}
}
