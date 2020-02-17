#include <stdio.h>

#include "programme.h"
#include "student.h"
#include "registration.h"
#include "parsers.h"

int programmesSize = 0, studentsSize = 0, registrationsSize = 0;

struct programme *programmes = NULL;
struct student *students = NULL;
struct registration *registrations = NULL;

int main(int argc, char const *argv[])
{
   // open all input files (programmes, students and registrations)
   FILE *programmesFile = fopen(argv[1], "r");
   FILE *studentsFile = fopen(argv[2], "r");
   FILE *registrationsFile = fopen(argv[3], "r");

   // parse all files
   parseProgrammes(programmesFile, &programmes, &programmesSize);
   parseStudents(studentsFile, &students, &studentsSize);
   parseRegistrations(registrationsFile, &registrations, &registrationsSize, programmes, programmesSize, students, studentsSize);

   // print all registrations
   int i;
   for (i = 0; i < registrationsSize; i++)
      printRegistration(registrations[i]);

   return 0;
}