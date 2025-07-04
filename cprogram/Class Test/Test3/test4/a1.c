
// wap to print factors of number in given range
void main()
{
	int start,end;
	printf("enter the start of the range:");
	scanf("%d",&start);
	
	printf("enter the end of the range:");
	scanf("%d",&end);
	
	for(int num=start;num<=end;num++)
	{
		printf("factors of %d:",num);
		
		for(int i=1;i<=num;i++)
		{
			if(num%i==0)
			printf("%d",i);
		}
		printf("\n");
		
		}
		return 0;
	}
	
