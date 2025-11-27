#include <stdio.h>


void counter() 
{
    
    static int count = 0;
    
    
    count++;
    
    
    printf("Function has been called %d times\n", count);
}

int main() 
{
    
    counter();
    counter();
    counter();
    counter();

    return 0;
}
