#include <stdio.h>
#include <ctype.h>

void print_FIO(char separator){
  int symbol = toupper(getchar());
  printf("%c", symbol);
  while (symbol != '\n'){
    while (symbol != separator && symbol != '\n') {
      symbol = getchar();
    }
    while (symbol == separator || symbol == '\n'){
      symbol = getchar();
    }
    symbol = toupper(symbol);
    printf("%c", symbol);
  }
  printf("\n");
}
  
int main() {
  print_FIO(' ');
  return 0;
}
 