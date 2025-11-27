#include <stdio.h>

int main() 
{
    int n;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;  


    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    
    printf("The elements of the array in reverse order are:\n");
    for (int i = n - 1; i >= 0; i--) 
    {
        printf("%d ", *(ptr + i));  
    }
    printf("\n");

    return 0;
}
