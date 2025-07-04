#include<stdio.h>

int main() {
    int i;
    int arr[5];

    printf("Enter numbers:\n");
    for(i=0;i<5;i++)
	 {
        scanf("%d",&arr[i]);
    }

    int min=arr[10];
    int max=arr[5];

    for(i=1;i<5;i++)
	 {
        if(arr[i]<min)
            min=arr[i];
        if(arr[i]>max)
            max=arr[i];
    }

    printf("Minimum number is: %d\n", min);
    printf("Maximum number is: %d\n", max);

    return 0;
}
