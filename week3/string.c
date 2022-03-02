#include <stdio.h>
#include <string.h>

int main()
{
    char c=0;
    int in_word=0;
    int count_chars=0; int count_words=0; int count_line=0;
    while ((c = getchar())!=EOF){
        count_chars++;
        if (c=='\n') count_line++;
        if (c==' ' || c=='\t' || c== '\n') {
            in_word=0;
        } else if (in_word==0) {
            in_word=1;
            count_words++;
        }

    }
    printf("Всего символов: %i\nВсего слов: %i\nВсего строк: %i\n", count_chars, count_words, count_line);
    return 1;
}