#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int get_int(void)
{
 int response = 0;
 int k = 0;
 response = scanf("%i", &k);
 if (response == 1) return k; else {
   printf("Перезапустите программу и введите целое число от 0 до 23\n");
   exit(1);
   }
}

int main(void) {
  printf("Введите высоту пирамиды в формате целого числа от 0 до 23\n");
  int x = get_int();
  if (x < 0 || x > 23)
    printf("Введенная Вами информация не удовлетворяет обозначенным выше критериям. Перезапустите программу и введите целое число от 0 до 23\n");
  else {
    int y = x;
    while (y > 0){
      int i = 1;
      int n = x + 2;
      while (i < y){
        printf(" ");
        i += 1;
        }
      while (n - y > 0){
        printf("#");
        n -= 1;
      }
      y -= 1;
      printf("\n");
    }
  }
}