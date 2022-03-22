#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

char* getStringFromConsoleInput() {
    char c;                
    int count;
    char* arr = NULL;
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

int main(int argc, char* argv[]) {
    if(argc != 2) return 1;

    int inMore;
    int k = atoi(argv[1]);
    if (k >= 0){
        if (k > 26 ){
            inMore = k / 26;
            k = k - (26 * inMore);
        }    
    }
    printf("Get string: ");
    char* str = getStringFromConsoleInput();
    int dlina = strlen(str);
    char* str2 = malloc(dlina);
    char* str3 = malloc(dlina);

    for(int i = 0; i != dlina; i++) {
        if(str[i] != 0) {
            if(((str[i] >= 65) && (str[i] <= 90)) || ((str[i] >= 97) && (str[i] <= 122))){ 
                if ((str[i] + k) > 122)
                    str[i] = (95 + ((str[i] + k) - 122));
                if ((str[i] + k) > 90 && (str[i] + k) < 97)
                    str[i] = (63 + ((str[i] + k) - 90));
            
            str2[i] = str[i] + k;
            }
            else str2[i] = str[i];
        }
    }
    printf("Put string: %s\n", str2);

    free(str2);
    return 0;
}
