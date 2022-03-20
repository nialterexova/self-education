#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int key = 0;
    int inMore;
    bool CorrectInput = true;
    while (CorrectInput){
        printf("Введите ключ: \n");
        scanf("%d", &key);
        if (key >= 0){
            if (key > 26 ){
                inMore = key / 26;
                key = key - (26 * inMore);
                }
            CorrectInput = false;
            }
    }
    printf("Введите текст для шифра: ");
    char text;
    int ReallyCondition = 1;
    while (text = getchar()){   
        if (ReallyCondition == 1){
            if (text > 64 && text < 123 || text > 127 && text < 176 || text > 223 && text < 242){
                text = text + key;
            }
        printf("%c", text);
        }
        ReallyCondition = 1;
    }
    return 0;
}


