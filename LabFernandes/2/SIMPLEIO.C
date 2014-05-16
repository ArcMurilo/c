                            /* Chapter 9 - Program 1 - SIMPLEIO.C */
#include <stdio.h>            /* standard header for input/output */

int main()
{
int c;

   printf("Enter any characters, X = halt program.\n");

   do 
   {
      c = getchar();      /* get a single character from the kb   */
      putchar(c);         /* display the character on the monitor */
   } while (c != 'X');    /* until an X is hit                    */

   printf("\nEnd of program.\n");

   return 0;
}



/* Result of execution



*/
