/* pow example */
#include <stdio.h>      /* printf */
#include <math.h>       /* pow */

int main ()
{
  printf ("%c %c %c %c %c %c %c %c %c %c %c %c %c %c\n", 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42);
  printf ("%c    Moment of Inertia    %c\n", 42, 42);
  printf ("%c                         %c\n", 42, 42);
  printf ("%c      %c = %c%c%c%c%i          %c\n", 42, 73, 109, 42, 114, 94, 2, 42);
  printf ("%c %c %c %c %c %c %c %c %c %c %c %c %c %c\n\n", 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42);
  printf ("example:\n");
  printf ("%c = %.1f %c%c\n", 'm', 10.5, 'K', 'g');
  printf ("%c = %.1f %c\n", 'r', 2.5, 'm');
  printf ("I = 10 * 2 ^ 2 = %.2f Kg m ^ 2\n", (10.5*pow(2.5,2)));
 
  return 0;							//tell the comp everything ok (exit status)
}