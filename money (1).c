#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
int a=25;
int b=10;
int c=5;
int f=1;
int s,x,y;
printf ("Сколько сдачи нужно дать?\n"); //вводим сумму сдачи
scanf("%i",&s);
x=0;
while (s>0)      //пока не дадим все монеты
    {if (s>=a)   //если сдача больше 25 
        {while (s>=a)
        {s=s-a;  //выдаем монеты по 25
        x=x+1;}}  //считаем монеты по 25
    if (s>=b&&s<a)  //если сдача меньше 25,но больше 10
        {while (s>=b)
        {s=s-b;
        x=x+1;}}
    if (s>=c&&s<b)
        {while (s>=c)
        {s=s-c;
        x=x+1;}}
    if (s<c&&s>0)
        {while (s>0)
        {s=s-f;
        x=x+1;}}}

printf ("Кол-во монет=%i> ;",&x);
return 0;
}