#include <stdio.h>
#include <string.h>

#include "programme.h"

void initProgramme(struct programme* programme, int code, char name[], int credits){
   programme->code = code;
   strcpy(programme->name, name);
   programme->credits = credits;
}

void printProgramme(struct programme programme){
   char code[4], credits[4];

   sprintf(code, "%d", programme.code);
   sprintf(credits, "%d", programme.credits);

   puts(code);
   puts(programme.name);
   puts(credits);
}