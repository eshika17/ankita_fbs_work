//WAP to Calculate the Number of Words Present in a String
#include<stdio.h>
int main()
{
	char str[10];
	int count=0;
	
	printf("enter string:");
	fgets(str,sizeof(str),stdin);
	
	for(int i=0;str[i]!='\0';i++)
	{
		if((i==0 && str[i]!='\0'&&str[i]!='\n')||(str[i]!=' '&& str[i-1]==' '))
		{
			count++;
		}
	}
		printf("number of words in string %d",count);
	
}