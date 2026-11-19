#include <stdio.h>
#include "student.h"

void calculateAverage()
{
    if(studentAdded == 0)
    {
        printf("\nPlease add student details first!\n");
        return;
    }

    int total = 0;
    int i;

    for(i = 0; i < 3; i++)
{
    if(marks[i] < 0 || marks[i] > 100)
    {
        printf("Invalid marks detected! Cannot calculate average.\n");
        return;
    }

    total += marks[i];
}
   average = total / 3.0;

printf("\nTotal Marks = %d / 300\n", total);
printf("Average Marks = %.2f\n", average);
    printf("\nAverage Marks = %.2f\n", average);
}
