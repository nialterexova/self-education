#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float get_float(void)
{
 int response = 0;
 float k = 0;
 response = scanf("%f", &k);
 if (response == 1) return k; else {
   printf("Введите числовые значения и перезапустите программу\n");
   exit(1);
   }
}

int main(void) {
  float a = get_float();
  float b = get_float();
  float c = get_float();
  float D = pow(b, 2) - 4*a*c;
  if (a == 0)
    printf("a = 0. Делить на 0 нельзя! Перезапустите программу и введите коэффициенты, где a не равно 0.\n");
  else
  if (D > 0) {
    float x1 = (- b + sqrt(D)) / 2 /a; 
    float x2 = (- b - sqrt(D)) / 2 / a; 
    printf("Квадратное уравнение имеет 2 корня:\n\nx1 = %f\n", x1); 
    float y1 = x1 - (int)x1;
    int z1 = (int) x1 % 2; 
    if (y1 != 0)
       printf("Корень квадратного уравнения дробный\n");
    else if (z1 == 0)
      printf("Корень квадратного уравнения четный\n");
    else 
      printf("Корень квадратного уравнения нечетный\n");
    printf("\nx2 = %f\n", x2); 
    float y2 = x2 - (int)x2;
    int z2 = (int) x2 % 2;
    if (y2 != 0)
       printf("Корень квадратного уравнения дробный\n");
    else if (z2 == 0)
      printf("Корень квадратного уравнения четный\n");
    else 
      printf("Корень квадратного уравнения нечетный\n");
    }
  else if (D == 0) {
    float x3 = (- b) / 2 / a; 
    printf("Квадратное уравнение имеет 1 корень:\n\nx = %f\n", x3);
    float y3 = x3 - (int)x3;
    int z3 = (int) x3 % 2;
    if (y3 != 0)
       printf("Корень квадратного уравнения дробный");
    else if (z3 == 0)
      printf("Корень квадратного уравнения четный");
    else 
      printf("Корень квадратного уравнения нечетный");
    }
  else {
    printf("Квадратное уравнение корней не имеет");
    }
}
