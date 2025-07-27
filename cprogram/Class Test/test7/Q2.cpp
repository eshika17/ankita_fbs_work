//check if the array is pallindrome or not
#include <stdio.h>
is_palindrome(int arr[], int size)
 {
    int i = 0, j = size - 1;
    while (i < j) {
        if (arr[i] != arr[j]) 
		{
          i++;
        }
    
          j--;
    }
}
int main()
 {
    int arr[5];
    printf("Enter array elements: ");
    for (int i = 0; i < 5; i++)
	 {
        scanf("%d", &arr[i]);
    }

    if (is_palindrome(arr, 5)) {
        printf("Array is a palindrome\n");
    } else {
        printf("Array is not a palindrome\n");
    }
   
}