#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float get_float(void)
{
 int response = 0;
 float k = 0;
 response = scanf("%f", &k);
 if (response == 1) return k; else {
   printf("Перезапустите программу и введите корректное число\n");
   exit(1);
   }
}

int main(void) {
  printf("Какая сумма Вам нужна для сдачи? Введите сумму в долларах.\n");
  float sum = get_float();
  while (sum < 0) {
    printf("Вы ввели отрицательное число. Сумма сдачи должна быть неотрицательной. Введите корректное число.\n");
    sum = get_float();
  }
  float x = round (sum * 100);
  int y = 0;

  while (x > 0) {
    int z = 0;
    if(x >= 25) {
      y = x / 25;
      z = x / 25;
      x = x - z * 25;
    }
    else if (x >= 10) {
      y = y + x / 10;
      z = x / 10;
      x = x - z * 10;
    }
    else if (x >= 5) {
      y = y + x / 5;
      z = x / 5;
      x = x - z * 5;
    }
    else if (x >= 1) {
      y = y + x;
      z = x;
      x = x - z;
    }
    else {
      y = y;
      x = 0;
    }
  }

  printf("Для сдачи Вам потребуется %i монет(а,ы).", y);
}