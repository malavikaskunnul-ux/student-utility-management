#include <stdio.h>
#include "student.h"

void addStudent()
{
	int i;
    printf("\nEnter Student Name: ");
    scanf(" %49[^\n]", name);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter 3 Subject Marks:\n");

    for(i = 0; i < 3; i++)
{
    do
    {
        printf("Subject %d (0-100): ", i + 1);
        scanf("%d", &marks[i]);

        if(marks[i] < 0 || marks[i] > 100)
        {
            printf("Invalid marks! Enter marks between 0 and 100.\n");
        }

    } while(marks[i] < 0 || marks[i] > 100);
}
    studentAdded = 1;

    printf("\nStudent Added Successfully!\n");
}
