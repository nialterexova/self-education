#include <stdio.h>
#include <ctype.h>

void print_FIO(char separator){
  int symbol = toupper(getchar());
  printf("%c", symbol);
  while (symbol != separator) {
    symbol = getchar();
  }
  symbol = toupper(getchar());
  printf("%c\n", symbol);
}
  

int main() {
  print_FIO(' ');
  return 0;
}
 