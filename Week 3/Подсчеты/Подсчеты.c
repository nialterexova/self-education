#include <stdio.h>

void print_count_symbols(char separator){
  int symbol = getchar();
  int count_symbols = 0;
  int count_words = 0;
  int count_lines = 0;
  while (symbol != separator) {
    while (symbol != '\n'){
      while (symbol != ' ' && symbol != '\t' && symbol != '\n') {
        printf("%c", symbol);
        count_symbols += 1; 
        symbol = getchar();
      }
      count_words += 1;
      printf("\n");
      while (symbol == ' ' || symbol == '\t'){
        count_symbols += 1;
        symbol = getchar();
      }
    }
    count_lines += 1;
    count_symbols += 1;
    symbol = getchar();
  }  
  printf("\nКоличество символов: %i\n", count_symbols);
  printf("Количество слов: %i\n", count_words);
  printf("Количество строк: %i\n", count_lines);
}
int main() {
  print_count_symbols(EOF);
  return 0;
}
 