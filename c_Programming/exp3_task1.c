#include <stdio.h>

int main() 
{
    int num1, num2, result;
    int choice;

    
    start:

    
    printf("\nMenu Driven Calculator\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n");

    
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);


    switch(choice) 
    {
        case 1:
            
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            goto start;  

        case 2:
            
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            goto start;  

        case 3:
            
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            goto start;  

        case 4:
            
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %d / %d = %d\n", num1, num2, result);
            } 
            else 
            {
                printf("Error! Division by zero.\n");
            }
            goto start;  

        case 5:
            
            printf("Exiting the calculator. Goodbye!\n");
            return 0;

        default:
            
            printf("Invalid choice! Please enter a valid option.\n");
            goto start;
    }

    return 0;
}
