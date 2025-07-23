//WAP to Remove the nth Index Character from a Non-Empty String
#include<stdio.h>
int main()
{
char str[10];
int i,n,len;

printf("enter string:");
scanf("%s",str);

printf("enter the index you want to remove:");
scanf("%d",&n);

len=strlen(str);
if(n<0 ||n>=len)
{
	printf("invalid string:");
	
}
else
{
for(int i=n;i<len;i++)
{
	str[i]=str[i+1];
}
}
printf("string after removal:%s",str);
}







