/* scanf example */
#include <stdio.h>

int main ()
{
  char car [80];
  char color [20];
  int i;

  printf ("WELCOME TO GARAGE INC.\n");
  printf ("Price = $1000/each car \n");
  printf ("Please enter your order \n");
  printf ("Car: ");
  scanf ("%79s",car);  
  printf ("Color: ");
  scanf ("%19s",color);
  printf ("Quantity: ");
  scanf ("%d",&i);
  printf ("Your order: \n %s car \n %s color \n for %d car.\n",car,color,i);
  printf ("Your total order would be $%d\n", (1000*i));
  printf ("Your car will be delivered in 3 days \n Thank you %c%c", 58, 41);

  
  return 0;
}