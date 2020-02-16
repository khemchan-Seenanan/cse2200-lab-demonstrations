#include "registration.h"
#include "student.h"
#include "programme.h"

void initRegistration(struct registration* registration, struct student* student, struct programme* programme){
   registration->student = student;
   registration->programme = programme;
}

void printRegistration(struct registration registration){
   printStudent(*(registration.student));
   printProgramme(*(registration.programme));
}