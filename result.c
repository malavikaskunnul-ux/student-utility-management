#include <stdio.h>
#include "student.h"

void checkResult()
{
    if(studentAdded == 0)
    {
        printf("\nPlease add student details first!\n");
        return;
    }

    int pass = 1;
    int i;

    printf("\n--- Subject-wise Result ---\n");

    for(i = 0; i < 3; i++)
    {
        printf("Subject %d: %d - ", i + 1, marks[i]);

        if(marks[i] < 35)
        {
            printf("FAIL\n");
            pass = 0;
        }
        else
        {
            printf("PASS\n");
        }
    }

    if(pass)
        printf("\nOverall Result: PASS\n");
    else
        printf("\nOverall Result: FAIL\n");
}