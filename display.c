#include <stdio.h>
#include "student.h"

void displayStudent()
{
    if(studentAdded == 0)
    {
        printf("\nNo student details available!\n");
        return;
    }

    printf("\n--- STUDENT DETAILS ---\n");

    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", rollNo);

    printf("Marks:\n");
    int i;

    for( i = 0; i < 3; i++)
    {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }

    printf("Average: %.2f\n", average);
}
