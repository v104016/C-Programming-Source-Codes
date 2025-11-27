#include <stdio.h>

int main() 
{
    int start, end, sum = 0;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);


    for (int i = start; i <= end; i++)
    {
        if (i % 2 != 0) 
        { 
            sum += i; 
        }
    }

    printf("The sum of odd numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}
