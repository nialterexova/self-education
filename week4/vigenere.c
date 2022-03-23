#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>

//A=65 Z=90 a=97 z=122

char *getStringFromConsoleInput();
char deposition_caesar(int letter, int key, int upper_case_start, int upper_case_end, int lower_case_start, int lower_case_end);

int main(int argc, char **argv) {
    if (argc != 2) return 1;
    //for (int i=0; i < argc; i++)
    //    printf("%s", argv[i]);
    char *str = getStringFromConsoleInput();  //строка для обработки
    int len_str = strlen(str);  //длина строка для обработки
    int len_code = strlen(argv[1]);  //длина кода

    int code_count = 0;

    for (int i=0; i<len_str; i++){
        int code_letter = argv[1][code_count%len_code];
        if (isalpha(str[i])) {
            if (code_letter>=97) code_letter-=97;
            if (code_letter>=65) code_letter-=65;
            printf("%c", deposition_caesar(str[i], code_letter, 65, 90, 97, 122));
            code_count++;
        }
        else printf("%c", str[i]);
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
