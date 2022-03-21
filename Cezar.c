#include <stdio.h>
#include <string.h>

char *getStringFromConsoleInput();

int main(int argc, char **argv) {
  int k=atoi(argv[1]);
  if(argc==2){
    char *str = getStringFromConsoleInput(k);
  }
  else{
    printf('Vi vveli huinu');
  }
  return 0;
}

char *getStringFromConsoleInput(k) {
  printf("%d\n", k);
  char c;
  int count;
  char *arr = NULL;
  c = getchar();
  count = 0;
  while (c != '\n') {
    arr = (char *)realloc(arr, (count + 1) * sizeof(char));
    if (64 < ((int)(c) + k) & ((int)(c) + k) < 91 ||
        96 < ((int)(c) + k) & ((int)(c) + k) < 123) {
      int tr = (int)(c) + k;
      printf("%d\n", tr);
      arr[count] = tr;
    } else if (122 < ((int)(c) + k)) {
      int tr = ((int)(c) + k) % 122 + 64;
      printf("%d\n", tr);
      arr[count] = tr;
    } else if (90 < ((int)(c) + k) & ((int)(c) + k) < 97) {
      int tr = ((int)(c) + k) % 97 + 96;
      printf("%d\n", tr);
      arr[count] = tr;
    } else {
      arr[count] = c;
    }
    ++count;
    c = getchar();
  }
  printf("  %s", arr);
  return arr;
}
