#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
float a,b,c,d,x1,x2,p;
int k;
START:
printf("a=");scanf("%f",&a);
if(a==0)
{printf("a не может быть равно 0!");
goto START;
}
printf("b=");scanf("%f",&b);
printf("c=");scanf("%f",&c);
d=b*b-4*a*c;
if (d>0)
{
x1=(-b + (sqrt (d)))/(2*a); 
x2=(-b - (sqrt (d)))/(2*a);  
printf("Корни уравнения: x1=%f;x2=%f\n", x1, x2);
k=2;
}
else  if (d==0)
{
x1=-b/(2*a);
printf("Одно решение:%f\n",x1);
k=1;
}
else 
{
printf("Корней нет.\n");
}


float p1=x1-(int)x1;
int p2=(int)x1;

if (p1==0)
{
printf("x1 целое число; ");
float x3=x1/2;
if (x3==round(x3))
{
printf("х1 четное число\n");
}
else 
{
  printf("x1 нечетное число\n");
}
}
if (k==1)
{return 0;}
else if (k==2)
{
if (x2==round(x2))
{
printf("x2 целое число; ");
float x4=x2/2;
if (x4==round(x4))
{
printf("х2 четное число\n");
}
}
else 
{
  printf("x2 нечетное число\n");
}
}
else 
{
  printf("х2 не целое\n");
}
return 0;
}