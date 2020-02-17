#include <stdio.h>
#include <string.h>

#include "programme.h"

void initProgramme(struct programme *programme, char code[], char name[], int credits)
{
   strcpy(programme->code, code);
   strcpy(programme->name, name);
   programme->credits = credits;
}

void printProgramme(struct programme programme)
{
   char credits[4];

   sprintf(credits, "%d", programme.credits);

   puts(programme.code);
   puts(programme.name);
   puts(credits);
}