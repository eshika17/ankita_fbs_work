//Write a program to check the string is palindrome or not
#include<stdio.h>
int main()
{
	char str[10];
	int i=0,len,flag=0;
	
	printf("enter string:");
	scanf("%s",str);

	 len=strlen(str);


	for(int i=0;i<len;i++)
	{
		if(str[i]!=str[len-i-1])
		flag=1;
		break;
	}
	
	if(flag==0)
	{
		printf("String Pallidrom");
	}
	else
	{
		printf("Not pallidrom");
	}
	
	
	
}