#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "parsers.h"

void parseProgrammes(FILE *file, struct programme **programmesPtr, int *n)
{
   if (file == NULL)
   {
      printf("Failed to open programmes file");
      exit(EXIT_FAILURE);
   }

   int linesRead = 0;
   int lineBufferLength;
   char lineBuffer[100];
   struct programme programme;
   char code[5];
   char name[64];
   int credits;

   while ((fgets(lineBuffer, 100, file) != NULL))
   {
      lineBufferLength = strlen(lineBuffer);
      lineBuffer[lineBufferLength - 1] = '\0';

      switch (linesRead % 3)
      {
      case 0:
         strcpy(code, lineBuffer);
         break;

      case 1:
         strcpy(name, lineBuffer);
         break;

      case 2:
         credits = atoi(lineBuffer);

         // initialize programme
         initProgramme(&programme, code, name, credits);

         // extend array and append programme
         *programmesPtr = realloc(*programmesPtr, ++(*n) * sizeof(struct programme));
         (*programmesPtr)[(*n) - 1] = programme;
         break;

      default:
         break;
      }

      linesRead++;
   }
}

void parseStudents(FILE *file, struct student **studentsPtr, int *n)
{
   if (file == NULL)
   {
      printf("Failed to open students file");
      exit(EXIT_FAILURE);
   }

   int linesRead = 0;
   int lineBufferLength;
   char lineBuffer[100];
   struct student student;
   char usi[8];
   char fullName[64];
   char dateOfBirth[11];

   while ((fgets(lineBuffer, 100, file) != NULL))
   {
      lineBufferLength = strlen(lineBuffer);
      lineBuffer[lineBufferLength - 1] = '\0';

      switch (linesRead % 3)
      {
      case 0:
         strcpy(usi, lineBuffer);
         break;

      case 1:
         strcpy(fullName, lineBuffer);
         break;

      case 2:
         strcpy(dateOfBirth, lineBuffer);

         // initialize student
         initStudent(&student, usi, fullName, dateOfBirth);

         // extend array and append student
         *studentsPtr = realloc(*studentsPtr, ++(*n) * sizeof(struct student));
         (*studentsPtr)[(*n) - 1] = student;
         break;

      default:
         break;
      }

      linesRead++;
   }
}

void parseRegistrations(FILE *file, struct registration **registrationsPtr, int *n, struct programme programmes[], int programmesSize, struct student students[], int studentsSize)
{
   if (file == NULL)
   {
      printf("Failed to open registrations file");
      exit(EXIT_FAILURE);
   }

   int i;
   int linesRead = 0;
   int lineBufferLength;
   char lineBuffer[100];
   struct registration registration;
   struct programme *programme;
   struct student *student;

   while ((fgets(lineBuffer, 100, file) != NULL))
   {
      lineBufferLength = strlen(lineBuffer);
      lineBuffer[lineBufferLength - 1] = '\0';

      switch (linesRead % 2)
      {
      case 0:
         // find programme
         for (i = 0; i < programmesSize; i++)
            if (strcmp(programmes[i].code, lineBuffer) == 0)
            {
               programme = &programmes[i];
               break;
            }
         break;

      case 1:
         // find student
         for (i = 0; i < studentsSize; i++)
            if (strcmp(students[i].usi, lineBuffer) == 0)
            {
               student = &students[i];
               break;
            }

         // initialize registration
         initRegistration(&registration, programme, student);

         // extend array and append registration
         *registrationsPtr = realloc(*registrationsPtr, ++(*n) * sizeof(struct registration));
         (*registrationsPtr)[(*n) - 1] = registration;
         break;

      default:
         break;
      }

      linesRead++;
   }
}