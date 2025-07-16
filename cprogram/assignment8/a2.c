void searcharray(int arr[],int size,int key);
void main()
{
	int arr[5],n,key;
	printf("enter array number");
	scanf("%d",&n);
	
	printf("enter array number");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&key);
		
	}
	printf("enter array number you what to find");
	scanf("%d",&key);
	
}
void searcharray(int arr[],int size,int key)
{
	int found=0;
	for(int i=0;i<size;i++)
	{
		printf("%d element found at %d index",key,i);
		found=1;
		break;
	}
	}
	if(found)
	{
		printf("%delement is not found",key);
	}
}