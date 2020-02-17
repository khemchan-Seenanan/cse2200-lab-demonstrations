#ifndef PARSERS_H
#define PARSERS_H

#include <stdio.h>

#include "programme.h"
#include "student.h"
#include "registration.h"

void parseProgrammes(FILE *, struct programme **, int *);
void parseStudents(FILE *, struct student **, int *);
void parseRegistrations(FILE *, struct registration **, int *, struct programme[], int, struct student[], int);

#endif