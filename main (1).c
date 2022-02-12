#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
float a,b,c,d,x1,x2,y;
int k;
START:
printf ("Введите коэффициент a:\n");
scanf ("%f", &a);
if (a==0)
{printf ("a не может быть равно 0!");
goto START;
}
printf ("Введите коэффициент b:\n");
scanf ("%f", &b);
printf ("Введите коэффициент c:\n");
scanf ("%f", &c);
d=b*b-4*a*c;
printf ("%f\n",d);

if (d<0)
{
printf ("Нет решения\n");
return 0;
}
else if (d==0)
{
x1=-b/(2*a);
printf ("Одно решение:%f\n", x1);
k=1;
}
else 
{
x1=-b/(2*a)-(sqrt (d))/(2*a);
x2=-b/(2*a)+(sqrt (d))/(2*a);
printf ("Корни уравнения:\nx1=%f\nx2=%f\n",x1,x2);
k=2;
printf ("%f", x1);
}

float y1=x1-(int)x1;
int y2=(int)x1;
printf ("%i\n", y1);
if (y1==0)
{
printf ("x1 целое число\n");
float x3=x1/2;
if (x3==round(x3))
{
printf ("x1 чётное число\n");
}
else 
{printf("x1 Нечетное число\n");}
}
else
{
printf ("x1 не целое\n");
}
if (k==2)
{
if (x2==round(x2))
{
printf ("x2 целое\n");
float x5=x2/2;
if (x5==round(x5))
{
printf ("x2 чётное число\n");
}
}
else 
{
printf ("x2 не целое");
}
}
else
{
printf ("x2 не целое\n");
}
getchar();
return 0;
}

