#include <stdio.h>
#include "student.h"

char name[50];
int rollNo;
int marks[3];
float average = 0 ;
int studentAdded = 0;

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Calculate Average\n");
        printf("3. Check Result\n");
        printf("4. Display Student Details\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                calculateAverage();
                break;

            case 3:
                checkResult();
                break;

            case 4:
                displayStudent();
                break;

            case 5:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}
