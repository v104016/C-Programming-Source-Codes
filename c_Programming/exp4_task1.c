#include <stdio.h>


int isPrime(int num) 
{
    if (num <= 1) 
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
        {
            return 0; 
        }
    }
    return 1;
}


void findPrimes(int start, int end) 
{
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int num = start; num <= end; num++) 
    {
        if (isPrime(num)) 
        {
            printf("%d ", num); 
        }
    }
    printf("\n");
}

int main() 
{
    int start, end;

    // Input the range from the user
    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    findPrimes(start, end);

    return 0;
}
