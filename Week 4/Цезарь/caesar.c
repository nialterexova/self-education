#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
#include <string.h>

char *getStringFromConsoleInput();

int main(int argc, char **argv) {
  if (argc != 2){
    printf("Перезапустите программу и введите корректное число\n");
    return 1;
  }
  int displacement = atoi(argv[1]);
  char *str = getStringFromConsoleInput();
  int numbers = 0;
  for (numbers; numbers <= strlen(str); numbers++){
    if (str[numbers] >= 65 && str[numbers] <= 90){
      int symbol = str[numbers] + displacement;
      if (symbol <= 90){
        printf("%c", symbol);
      }
      else{
        symbol = symbol - 26;
        printf("%c", symbol);
      }
    }
    else if (str[numbers] >= 97 && str[numbers] <= 122){
      int symbol = str[numbers] + displacement;
      if (symbol <= 122){
        printf("%c", symbol);
      }
      else{
        symbol = symbol - 26;
        printf("%c", symbol);
      }
    }
    else{
      printf("%c", str[numbers]);
    }
  }
  return 0;
}

char *getStringFromConsoleInput() {
  char c;                
  int count;
  char *arr = NULL;
  c = getchar();         
  count = 0;
  while (c != '\n') {
    arr = (char*)realloc(arr, (count + 1) * sizeof(char));
    arr[count] = c;
    ++count;
    c = getchar();
    }
  return arr;
}