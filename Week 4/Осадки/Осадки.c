#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int get_int(void){
  int response = 0;
  int years = 0;
   response = scanf("%i", &years);
   if (response == 1) return years; else {
   printf("Перезапустите программу и введите корректное число\n");
   exit(1);
   }
}

int main(void) {
  printf("За какой период Вы хотите увидеть статистику? Введите количество лет.\n");
  int numbers = get_int();
  int sum = 0;
  srand(time(NULL));
  int precipitation [numbers];
  for (int count = 0; count < numbers; count++){
    int mm = (400 + rand()%401);
    precipitation[count] = mm - (mm%10);
    printf("%i\n", precipitation[count]);
    sum = sum + precipitation[count];
    }
  int mean = round (sum / numbers);
  printf("\nСреднее количество выпавших осадков (мм) за выбранный период составляет: %i", mean);
  printf("\n\nНиже выводятся отклонения от среднегодовых выпавших осадков за выбранный период для каждого года соответственно (мм):\n");
  int less = 0;
  int more = 0;
  int count = 0;
  for (count; count < numbers; count++){
    if (precipitation[count] > mean){
      more += 1;
    }
    if (precipitation[count] < mean){
      less += 1;
    }
    int deviation = (precipitation [count] - mean);
    printf("%i\n", deviation);
  }
  printf("Количество лет с осадками выше среднего: %i\n", more);
  printf("Количество лет с осадками ниже среднего: %i\n", less);
}