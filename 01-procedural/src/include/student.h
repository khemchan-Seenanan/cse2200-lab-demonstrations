#ifndef STUDENT_H
#define STUDENT_H

struct student {
   char usi[8];
   char fullName[64];
   char dateOfBirth[11];
};

void initStudent(struct student*, char[], char[], char[]);
void printStudent(struct student);

#endif