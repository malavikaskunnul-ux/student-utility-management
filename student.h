#ifndef STUDENT_H
#define STUDENT_H

extern char name[50];
extern int rollNo;
extern int marks[3];
extern float average;
extern int studentAdded;

void addStudent();
void calculateAverage();
void checkResult();
void displayStudent();

#endif
