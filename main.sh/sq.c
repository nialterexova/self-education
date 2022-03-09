#include <stdio.h>
#include <locale.h>
#include <math.h>
//a*x*x+b*x+c=0  
int main ()
{
  setlocale (LC_ALL, "Russian");
  double a,b,c;
  a=-1, b=6, c=-1;
  double d = b*b-4*a*c;
  if (d<0)
  {
      printf("Корней нет\n");
  }
  else if (d>0)
  {
    d= sqrt (d);
    double x1=(-b+d)/(2*a);
    double x2=(-b-d)/(2*a);
    printf ("x1=%lf x2=%lf\n", x1, x2);
    }
  else
    {
      double x1;
      x1=(-b+sqrt(d))/(2*a);
      printf("x1=x2=%f", x1);
  }
  }
  