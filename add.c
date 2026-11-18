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

    for( i = 0; i < 3; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    studentAdded = 1;

    printf("\nStudent Added Successfully!\n");
}
