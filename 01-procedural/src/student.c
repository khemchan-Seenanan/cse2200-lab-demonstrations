#include <stdio.h>
#include <string.h>

#include "student.h"

void initStudent(struct student* student, char usi[], char fullName[], char dateOfBirth[]){
   strcpy(student->usi, usi);
   strcpy(student->fullName, fullName);
   strcpy(student->dateOfBirth, dateOfBirth);
}

void printStudent(struct student student){
   puts(student.usi);
   puts(student.fullName);
   puts(student.dateOfBirth);
}