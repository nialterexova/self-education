/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int uch = 0, res = 0;
  int home[100001];
  scanf ("%i", & uch);

  for (int i = 0; i <= (uch - 1) / 2; i++)
    {
      scanf ("%i", & home[i]);
      res = home[i];
    }
  printf ("%i", res);

  return 0;
}
