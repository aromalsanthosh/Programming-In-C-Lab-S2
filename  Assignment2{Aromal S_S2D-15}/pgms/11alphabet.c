#include <stdio.h>

void alphabet(char i)
{
   printf("%c ", i);
   if(i < 'Z')
   {
       alphabet(i+1);
   }
}

int  main() {
   char i = 'A';
   printf("English Alphabets are:\n");
   alphabet(i);
   return 0;
}
