#include <stdio.h>
#include <math.h>
#include <stdbool.h>

float get_float(void);
bool is_integer(float x);
bool is_even(int x);
void even_message(float x);

int main(void) {
  printf("start\n");
  float a = get_float(); float b = get_float(); float c = get_float();
  float D = 0; 
  float x1 = 0; float x2 = 0;

  if (a == 0 && b == 0 && c==0) {
      printf("Бесконечность\n");
  }
  else if (a == 0 && b == 0){
      printf("Пустое множество\n");
  }
  else if (a == 0){
      x1 = -1 * c / b;
      printf("Один корень = %.1f\n", x1);
      even_message(x1);
  }
  else {
    D = b*b-4*a*c;
    printf("D = %.1f\n", D);

    if (D == 0) {
      x1 = -1 * b / (2 * a);
      printf("Один корень = %.1f\n", x1);
      even_message(x1);
    } else {
      printf("Два корня\n");
      if (D>0) {
        x1 = (-1 * b + sqrt(D)) / (2 * a);
        x2 = (-1 * b - sqrt(D)) / (2 * a);
        printf("%.1f\n", x1);
        even_message(x1);
        printf("%.1f\n", x2);
        even_message(x2);
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

// запросить и пользователя дробное число с клавиатуры
float get_float(void)
{
 int response = 0;
 float x = 0;
 response = scanf("%f", &x);
 if (response == 1) return x; else {
   printf("Введите числовые значения и перезапустите программу\n");
   exit(1);
   }
}

// проверка на целое
bool is_integer(float x)
{
  return ((int)x == x);
}

// проверка на четность
bool is_even(int x)
{
  int mod = (int)x % 2;
  if (mod == 0){
      return true;
  }
  else return false;
}

// сообщение о четности
void even_message(float x) 
{
  if (is_integer(x)) {
    if (is_even((int)x)) printf("(четное)\n");
    else printf("(не четное)\n");
  }
}