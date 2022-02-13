#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
float a;
int b,e,d,s,k;
START:
printf ("Введите целое число\n");
scanf ("%f",&a);
if (a==0)
{printf ("a не может быть равно 0!");
goto START;
}
k=2;
{
Draw:
d=1;
s=1;
if (k<=a)
{
b=a-k;
e=a-b;
Stroka:
if (d<=b)
{
printf (" ");
d=d+1;
goto Stroka;}
else if (d>=b)
{
stroka2:
if (s<=e)
{printf ("%c#");
s=s+1;
goto stroka2;
}
else
{printf ("\n");
}
}
{k=k+1;
goto Draw;}}
else
{
printf ("\n");
return 0;}
}}