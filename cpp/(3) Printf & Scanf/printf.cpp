/* printf example */
#include <stdio.h>

int main()
{
   printf ("Characters: %i %c \n", 'a', 65);						
   printf ("Decimals: %d %ld\n", 1977, 650000L);
   printf ("Preceding with blanks: %10d \n", 1977);
   printf ("Preceding with zeros: %010d \n", 1977);
   printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
   printf ("floats: %.10f %+.0e %E \n", (22.0/7.0), 3.1416, 3.1416);
   printf ("Width trick: %*d \n", 5, 10);
   printf ("%s \n", "A string");
   return 0;
}

/* 	\n"= newline  %c = char
   	65 = table ASCII

   	%c = char
	%d = decimal
	%i = integer (real number)
	%f = float

   	#000000 = black
   	#ffffff = white 

	signed = can be minus
	unsigned = can be plus

	8 bit = 2^8 = 256
	16 bit = 64000

	int not enough uses long
	float not enough use double
	
	
*/