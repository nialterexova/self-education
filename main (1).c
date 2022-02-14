#include <stdio.h>
#include <math.h>
float df(float y)
{
    printf("%f\n",y);
    if ((int)y==y && (int)y % 2==0)
    printf("целое четное\n");
    else if ((int)y==y && (int)y % 2 != 0)
    printf("целое нечетноеое\n"); 
    else printf("нецелое\n");
}
int main(void) 
{
 float a,b,c;
 scanf ("%f%f%f", &a, &b, &c);
 printf("%f\n%f\n%f\n",a,b,c);
  float d = (b*b)-(4*a*c);
 printf("Дискриминант = %f\n",d);
 if  (d > 0)
  {
    float x1=(-(b) + sqrt(d))/(2 * a);
    df(x1);
    float x2=(-(b) - sqrt(d))/(2 * a);
    df(x2);
  }
 if  (d == 0)
  {
    float x=(-(b)/(2*a));
    df(x);
  }
 if (d < 0)
  {
    printf("корней нет");
  } 
}