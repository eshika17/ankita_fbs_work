//wap to find power of any number
void main()
{
	int base,exp,result=1;
	printf("enter base");
	scanf("%d",&base);
	
	printf("enter exp");
	scanf("%d",&exp);

	while(exp!=0)
	{
		result=result+base;
		exp--;
	}
	printf("%d",result);
	
	}