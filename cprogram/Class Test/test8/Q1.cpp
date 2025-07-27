//write a program to count number of words in a string
#include<stdio.h>
int main()
{
	char str[10];
	int count=0;
	printf("enter string:");
	gets(str);
	int i=0;
	
	
	for(int i=0;str[i]!='\0';i++)
	{
	
		if((i==0&&str[i]!='\0'&&str[i]!='\n') ||(str[i]!=' '&&str[i-1]==' '))
		{
			
			
			count++;
			
			}
			
			
			
			
	}
		printf("number of words%d",count);
}
	
	

