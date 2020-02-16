#include "student.h"
#include "programme.h"
#include "registration.h"

int main(int argc, char const *argv[])
{
   struct student me;
   struct programme computerScience;
   struct registration myRegistration;

   initStudent(&me, "1008928", "Shrimply Pibbles", "31-02-2000");
   initProgramme(&computerScience, 702, "Bachelor of Science (Computer Science)", 138);
   initRegistration(&myRegistration, &me, &computerScience);

   printRegistration(myRegistration);

   return 0;
}