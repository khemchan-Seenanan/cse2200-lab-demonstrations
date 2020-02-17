#ifndef REGISTRATION_H
#define REGISTRATION_H

#include "student.h"
#include "programme.h"

struct registration
{
   struct programme *programme;
   struct student *student;
};

void initRegistration(struct registration *, struct programme *, struct student *);
void printRegistration(struct registration);

#endif