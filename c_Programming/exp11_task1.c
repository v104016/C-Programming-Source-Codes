#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Employee 
{
    int id;
    char name[50];
    float salary;
};


void addEmployee(FILE *fp) 
{
    struct Employee emp;

    printf("\nEnter employee ID: ");
    scanf("%d", &emp.id);
    getchar();  

    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = '\0';

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    printf("\nEmployee added successfully.\n");
}


void displayEmployees(FILE *fp) 
{
    struct Employee emp;

    
    rewind(fp);

    printf("\nEmployee Records:\n");
    while (fread(&emp, sizeof(struct Employee), 1, fp) == 1) 
    {
        printf("ID: %d\n", emp.id);
        printf("Name: %s\n", emp.name);
        printf("Salary: %.2f\n", emp.salary);
        printf("--------------------------\n");
    }
}

int main() 
{
    FILE *fp;
    int choice;

    
    fp = fopen("employee_database.dat", "rb+");

    
    if (fp == NULL) 
    {
        fp = fopen("employee_database.dat", "wb+");
        if (fp == NULL) 
        {
            printf("Error opening file.\n");
            return 1;
        }
    }


    do 
    {
        printf("\nEmployee Database Menu:\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                addEmployee(fp);
                break;
            case 2:
                displayEmployees(fp);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    
    fclose(fp);
    return 0;
}
