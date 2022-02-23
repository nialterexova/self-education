#include <stdio.h>

void print_count_symbols(char separator){
  int symbol = getchar();
  int count_symbols = 0;
  int count_words = 0;
  int count_lines = 0;
  while (symbol != separator) {
    if (symbol == '\n'){
      count_lines += 1;
      }
    if (symbol == ' ' || symbol == '\n') {
      count_words += 1;
    }
    if (symbol != '\n' && symbol != ' '){
      printf("%c", symbol);
      }
    else{
      printf("\n");
    }
    symbol = getchar();
    count_symbols += 1;
  }
  printf("\nКоличество символов: %i\n", count_symbols);
  printf("Количество слов: %i\n", count_words);
  printf("Количество строк: %i\n", count_lines);
}
  
int main() {
  print_count_symbols(EOF);
  return 0;
}
 