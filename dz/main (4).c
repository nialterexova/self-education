#include <stdio.h>
#include <stdlib.h>
int main()
{
 int a,i,x,y,j;
 printf("Введите высоту пирамидки в диапазоне от 0 до 23:");
 scanf ("%d", &a);
 if (a<0 | a>23)
 {
     printf("Введите число в диапазоне от 0 до 23");
     exit(1);
 }

 for (i=2;i<=a+1; i++)
 {
     y=a+1-i;
     for (j=0;j<y;j++)
     printf(" ");
     x=0;
     while (x<i)
     {
     printf("#");
     x++;
     }
     printf("\n"); 
 }
}


