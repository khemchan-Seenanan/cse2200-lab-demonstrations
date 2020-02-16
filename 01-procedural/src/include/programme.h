#ifndef PROGRAMME_H
#define PROGRAMME_H

struct programme {
   int code;
   char name[64];
   int credits;
};

void initProgramme(struct programme*, int, char[], int);
void printProgramme(struct programme);

#endif