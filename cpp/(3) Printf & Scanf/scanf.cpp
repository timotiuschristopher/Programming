/* scanf example */
#include <stdio.h>

int main ()
{
  char name [40];
  char major [40];
  char age [40];
  int i;

  printf ("Enter your name: ");
  scanf ("%39s",name);  
  printf ("Enter major: ");
  scanf ("%39s",major);
  printf ("Enter age: ");
  scanf ("%d", &i);
  printf ("Mr. %s , %s, %d years old \n",name,major,i);
  printf ("Congratulations, you have been accepted to be an electrical engineer lecturer.\n",i);

  return 0;
}


// for int must be & infront ==> &int
// cheese burger

