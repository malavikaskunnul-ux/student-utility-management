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

    for( i = 0; i < 3; i++)
    {
        total += marks[i];
    }

    average = total / 3.0;

    printf("\nAverage Marks = %.2f\n", average);
}
