#include <stdio.h>
#include <math.h>
int main()
{
    float x;
    int i=0;
    printf("сколько сдачи нужно выдать?");
    scanf ("%f",&x);
    x = x*100;
   x=round(x);
int c[] = {25,10,5,1};
while(x>0)
{
    if (x>=c[0]) x=x-c[0];
    else if (x>=c[1]) x=x-c[1];
    else if (x>=c[2]) x=x-c[2];
    else if (x>=c[3]) x=x-c[3];
    i++;
    printf("%g\n",x);
    
}
printf("Количество монет = %i",i);
}


