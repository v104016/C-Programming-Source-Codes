#include <stdio.h>
#include <string.h>


struct student 
{
    char name[50];
    int roll_number;
    int total_marks;
};

int main() 
{
    struct student students[5];  
    int i, topper_index = 0;

    
    printf("Enter details for 5 students:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; 

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_number);

        printf("Enter total marks: ");
        scanf("%d", &students[i].total_marks);

        
        getchar();
    }

    
    for (i = 1; i < 5; i++) 
    {
        if (students[i].total_marks > students[topper_index].total_marks) 
        {
            topper_index = i;
        }
    }


    printf("\nTopper Details:\n");
    printf("Name: %s\n", students[topper_index].name);
    printf("Roll Number: %d\n", students[topper_index].roll_number);
    printf("Total Marks: %d\n", students[topper_index].total_marks);

    return 0;
}
