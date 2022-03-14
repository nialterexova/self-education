#include <stdio.h>
#include <math.h>
// gcc main.c -lm -o main

//2 5 2
//2 7 2 проверка на четность (будет 1 четное 1 нет)
//1 -6 9 проверка на 0
//1 -6 9 проверка на 0

int main(void) {
  printf("Решим квадратное уравнение вида: ax2 - bx + c = 0");
  
  int a, b, c;
  printf("\nВведите переменные: a, b, с\n");
  scanf("%d%d%d", &a, &b, &c); printf("Введенные переменные: %d %d %d", a, b, c); 
  
  printf("\n\n\nНайдем дискриминант:\n");
 
 int d = pow(b, 2) - 4*a*c;
 printf("Дискриминант равен: %d", d); 

 if (d < 0)
    {printf("\n Корней нет\n");}
 else if (d == 0)
    {printf("\n Есть один корень\n");
    double x_1 = ((b + sqrt(d)) / (2*a));
    int y_1 = x_1;
    printf(" x_1 равен: %f", x_1);
    if (y_1%2 == 0)
       printf(" \n x_1 четное ");
    else
       printf(" \n x_1 не четное ");}
 else
    {printf("\n Есть два различных корня\n");
    double x_1 = ((b + sqrt(d)) / (2*a));
    double x_2 = ((b - sqrt(d)) / (2*a));
    printf(" x_1 равен: %f", x_1);
    printf("\n x_2 равен: %f", x_2);
    int y_1 = x_1;
    int y_2 = x_2; 
    if ((y_1%2 == 0) && (y_2%2 == 0))
       printf(" \n x_1 и x_2 четные");
     else if ((y_1%2 != 0) && (y_2%2 == 0))
       printf(" \n x_1 нечетное,   x_2 четное");
     else if ((y_1%2 == 0) && (y_2%2 != 0))
       printf(" \n x_1 четное,   x_2 нечетное");
     else
       printf(" \n x_1 и x_2 нечетные");}
}