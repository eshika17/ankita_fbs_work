//WAP to Take in a String and Replace Every Blank Space with special symbol
int main()
{
	char str[50];
	int stdin;
	
	printf("enter string: ");
	fgets(str,sizeof(str),stdin);
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==" ")
		{
			str[i]='@';
		}
	}
	printf("modified string:%s",str);
}