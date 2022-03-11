#include <stdio.h>
 
int main() {
    char ch;
    char word[512];
    int c=0;
    int w=0;
    int n=0; 
    printf("Введите текст, для завершения нажмите Alt+D\n");
    while ((ch = getchar()) != EOF) 
    {
        if (ch == '\n')
        { 
            n++;
        }
        else {
            printf("%c", ch);
            c++; 
        }
        if (ch == ' ' || ch == '\n') 
        {
            // snprintf(word, sizeof word, "%s%s", word, ch);
            printf("\n");
            w++; 
        }
    }
    printf("\nСимволы: %d\n", c);
    printf("  Слова: %d\n", w);
    printf(" Строки: %d\n", n);
    // printf(" 2: %c\n", word);
}
