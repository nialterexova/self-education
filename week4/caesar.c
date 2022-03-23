#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

//A=65 Z=90 a=97 z=122

char *getStringFromConsoleInput();
char deposition_caesar(int letter, int key, int upper_case_start, int upper_case_end, int lower_case_start, int lower_case_end);

int main(int argc, char **argv) {
    if (argc != 2) return 1;
    for (int i=0; i < strlen(argv[1]); i++){
      if (isdigit(argv[1][i])==0) {
        printf("Ошибка входных параметров");
        return 1;
      }
    }
    int k = atoi(argv[1]);  //коэффициент смещения шифра Цезаря
    char *str = getStringFromConsoleInput();  //строка для обработки
    int len = strlen(str);  //длина строка для обработки

    for (int i=0; i<len; i++){
        printf("%c", deposition_caesar(str[i], k, 65, 90, 97, 122));
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


char deposition_caesar(int letter, int key, int upper_case_start, int upper_case_end, int lower_case_start, int lower_case_end){
    if ((upper_case_end - upper_case_start + 1) == (lower_case_end - lower_case_start + 1)){
        int size_alpa = upper_case_end - upper_case_start + 1;
        int bottom = 0;
        if (letter>=upper_case_start && letter<=upper_case_end) bottom = upper_case_start;
        if (letter>=lower_case_start && letter<=lower_case_end) bottom = lower_case_start;
        
        if (bottom != 0) return ((letter - bottom + key) % size_alpa) + bottom;
        else return letter;
    }
    else return -1;
}
