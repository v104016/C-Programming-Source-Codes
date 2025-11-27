#include <stdio.h>


long long int factorialIterative(int n) 
{
    long long int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;  
    }
    return fact;
}


long long int factorialRecursive(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;  
    } 
    else 
    {
        return n * factorialRecursive(n - 1);  
    }
}

int main() 
{
    int num;


    printf("Enter a number: ");
    scanf("%d", &num);


    printf("Factorial of %d using iterative method is: %lld\n", num, factorialIterative(num));


    printf("Factorial of %d using recursive method is: %lld\n", num, factorialRecursive(num));

    return 0;
}
