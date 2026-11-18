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

    for( i = 0; i < 3; i++)
    {
        if(marks[i] < 35)
        {
            pass = 0;
            break;
        }
    }

    if(pass)
        printf("\nResult: PASS\n");
    else
        printf("\nResult: FAIL\n");
}
