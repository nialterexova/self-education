/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main ()
{

  int letter = getchar ();
  letter += 'A' - 'a';
  printf ("%c", letter);

  while (letter != EOF)
    {
      if (letter == ' ')
	{
	  letter = getchar ();
	  letter += 'A' - 'a';
	  printf ("%c", letter);
	}
      else
	{
	  letter = getchar ();
	}
    }
  return 0;
}
