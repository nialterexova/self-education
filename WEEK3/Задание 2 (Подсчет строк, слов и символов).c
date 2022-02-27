#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) 
{
    char FIO[50];
    fgets(FIO, 50, stdin);
    
    int letter = 0;
    int words = 1;
    int line = 1;
    
    for(int i = 0; i < strlen(FIO); i++)
    {
        if(FIO[i] > 65 || FIO[i] > 90 && FIO[i] < 97 || FIO[i] > 122)
            letter++;
    }
    
    for(int i = 0; i < strlen(FIO); i++)
    {
        if(FIO[i] == 32 || FIO[i] == 9 || FIO[i] == 182)
            words++;
    }
    
    for(int i = 0; i < strlen(FIO); i++)
    {
        if(FIO[i] == 182)
            line++;
    }
    printf("Количество букв - %d\nКоличество слов - %d\nКоличество строк - %d\n", letter, words, line);
    
    for(int i = 0; i < strlen(FIO); i++)
    {
        if(FIO[i] == 9 || FIO[i] == 32 ||FIO[i] == 182)
            FIO [i] = '\n';
    }
    puts (FIO);
    
    return 0;
}