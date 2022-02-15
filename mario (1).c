#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{int a,b,e,d,s,k;
printf ("Введите целое число\n");
scanf ("%i",&a);
if (a>0 && a<24)
  {printf ("OK\n");}
else 
 {printf ("Пожалуйста, введите целое число от 0 до 23\n");}
k=2;
  while (k<=a)
  {d=1;
  s=1;
  b=a-k; 
  e=a-b;
      while (d<=b)
      {printf (" ");
      d++;}
        while (d>=b&&s<=e)
        {printf ("#");
         s++;}
      {printf ("\n");}
  k=k+1;
  printf ("\n");}
return 0;}