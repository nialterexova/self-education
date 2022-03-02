#include <stdio.h>
#include <string.h>

// aA 97 65
// bB 98 66
// zZ 122 90

int dec_char_to_upper_case(char letter);

int main()
{
    char c=0;
    int in_word=0;
    int in_first=0;
    while ((c = getchar())!='\n'){
        if (c==' ') {
            in_word=0;
        } else if (in_word==0) {
            in_word=1;
            printf("%c", dec_char_to_upper_case(c));
        }
    }
    printf("\n");
    return 1;
}

// функция перевода буквы в DEC с/с из lowerCase в upperCase
int dec_char_to_upper_case(char letter){
    if ((letter>=65) && (letter<=90)) return letter;
    if ((letter>=97) && (letter<=122)) return letter-32;
    return -1;
}