#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>


char *getStringFromConsoleInput();
char *cipher();


int main(int argc, char **argv) {
  if (argc != 2){
    printf("Перезапустите программу и введите корректный шифр\n");
    return 1;
    }
  for (int i = 0; i < strlen(argv[1]); i++){
    if (isalpha(argv[1][i]) == 0){
    printf("Перезапустите программу и введите корректный шифр\n");
    return 1;
    }
  }
  char *code = cipher();
  return 0;
}


char *cipher(int argc, char **argv){
  char *str = getStringFromConsoleInput();
  int place = 0;
  int displacement = 0;
  int symbol = 0;
  for (int numbers = 0; numbers <= strlen(str); numbers++){
    if (str[numbers] >= 65 && str[numbers] <= 90){
      if ((int)(argv[1][place]) >= 65 && (int)(argv[1][place]) <= 90){
        displacement = (int)(argv[1][place]) - 65;
      }
      else{
        displacement = (int)(argv[1][place]) - 65 - 32;
      }
      symbol = str[numbers] + displacement;
      place += 1;
      if (symbol <= 90){
        printf("%c", symbol);
      }
      else{
        symbol = symbol - 26;
        printf("%c", symbol);
      }
    }
    else if (str[numbers] >= 97 && str[numbers] <= 122){
      if ((int)(argv[1][place]) >= 65 && (int)(argv[1][place]) <= 90){
        displacement = (int)(argv[1][place]) - 65;
      }
      else{
        displacement = (int)(argv[1][place]) - 65 - 32;
      }
      symbol = str[numbers] + displacement;
      place += 1;
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
    if (place % strlen(argv[1]) == 0){
      place = 0;
    }
  }
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