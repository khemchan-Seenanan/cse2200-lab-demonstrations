#ifndef REGISTRATION_H
#define REGISTRATION_H

#include "student.h"
#include "programme.h"

struct registration {
   struct student* student;
   struct programme* programme;
};

void initRegistration(struct registration*, struct student*, struct programme*);
void printRegistration(struct registration);

#endif