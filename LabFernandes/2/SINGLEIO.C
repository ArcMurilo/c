                             /* Chapter 9 - Program 2 - SINGLEIO.C */
#include "stdio.h"
#include "conio.h"

int main()
{
int c;

   printf("Enter any characters, terminate program with X\n");

   do 
   {
      c = _getch();                    /* get a character */
      putchar(c);                  /* display the hit key */
   } while (c != 'X');

   printf("\nEnd of program.\n");

   return 0;
}



/* Result of execution


*/
