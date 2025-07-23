//WAP Replace all Occurrences of ‘a’ with $ in a String 
int main()
{
char str[10];

printf("enter a string:");
scanf("%s",&str);

for(int i=0;str[i]!='\0';i++)
{
	if(str[i]=='a')
	{
	str[i]='$';
	}
}
printf("modified string:%s",str);
}
