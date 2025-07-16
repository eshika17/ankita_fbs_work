finfmin(int arr[],int n);
void main()
{
	int arr[100],n;
	printf("enter the number of element:");
	scanf("%d",&n);
	printf("enter %d element of array:",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);

	}
	int min=findmin(arr,n);
	printf("the minimun number in this array is %d",min);
}

findmin(int arr[],int n)
{
	int min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min)
		min=arr[i];
	}
	return min;
	}