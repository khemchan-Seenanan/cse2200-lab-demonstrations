#ifndef PROGRAMME_H
#define PROGRAMME_H

struct programme
{
   char code[5];
   char name[64];
   int credits;
};

void initProgramme(struct programme *, char[], char[], int);
void printProgramme(struct programme);

#endif