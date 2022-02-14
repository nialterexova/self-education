#include <stdio.h>
#include <stdlib.h> //Для abs
#include <math.h>

int function(float x)
{
  if ((int)x == x) {
    int mod = (int)x % 2;
    if (mod == 0){
      printf("(четное)\n");
    }
    else {
      printf("(нечетное)\n");
    }
  } else {
    printf("(дробное)\n");
  }
  return 0;
}


int main(void) {
  printf("start\n");
  float a = 0; float b = 0; float c = 0;
  float D = 0; 
  float x1 = 0; float x2 = 0;

  scanf("%f%f%f", &a, &b, &c);

  if (a == 0) {
    if (b == 0) {
      if (c == 0) {
        printf("Бесконечность\n");
      } else {
        printf("Пустое множество\n");
      }
    } else {
      x1 = -1 * c / b;
      printf("Один корень = %.1f\n", x1);
      function(x1);
    }
  } else {
    D = b*b-4*a*c;
    printf("D = %.1f\n", D);

    if (D == 0) {
      x1 = -1 * b / (2 * a);
      printf("Один корень = %.1f\n", x1);
      function(x1);
    } else {
      printf("Два корня\n");
      if (D>0) {
        x1 = (-1 * b + sqrt(D)) / (2 * a);
        x2 = (-1 * b - sqrt(D)) / (2 * a);
        printf("%.1f\n", x1);
        function(x1);
        printf("%.1f\n", x2);
        function(x2);
      } else {
        x1 = -1 * b / (2 * a);
        x2 = sqrt(-D) / (2 * a);
        printf("%.1f+i%.1f\n%.1f-i%.1f\n", x1, x2, x1, x2);
      }
    }
  }

  printf("end\n");
  return 0;
}