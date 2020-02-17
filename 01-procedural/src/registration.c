#include <stdio.h>

#include "registration.h"
#include "student.h"
#include "programme.h"

void initRegistration(struct registration *registration, struct programme *programme, struct student *student)
{
   registration->student = student;
   registration->programme = programme;
}

void printRegistration(struct registration registration)
{
   puts("Programme:");
   printProgramme(*(registration.programme));
   puts("Student:");
   printStudent(*(registration.student));
   puts("");
}