#include <stdio.h>

char *getStringFromConsoleInput();

int main(int argc, char **argv) {
    char *str = getStringFromConsoleInput();
    int n=0;
    int k=atoi(argv[1]);
    for (n ;n < strlen(str); n++  ) 
    {   
        if( 64<((int)str[n]+k) & ((int)str[n]+k) < 91 || 96<((int)str[n]+k) & ((int)str[n]+k)<123){
            int symb =str[n]+k;
            str[n] =symb;
            printf("%c", symb);
              
        }
        else if(122<((int)str[n]+k)){
            int symb =((int)str[n]+k) % 100 + 74;
            str[n] = symb; 
            printf("%c", symb);
        }
        else if(90<((int)str[n]+k) & ((int)str[n]+k)<97){
            int symb =((int)str[n]+k) % 90 + 64;
            str[n]= symb; 
            printf("%c", symb);
        }
        else{
            int symb=((int)str[n]);
            printf("%c", symb);
        }
      }
}

char *getStringFromConsoleInput() {
    char c;                
    int count;
    char *arr = NULL;
    c = getchar();         
    count = 0;
    while (c != '\n') {
        arr = (char*)realloc(arr, (count + 1) * sizeof(char));
        arr[count]=c;
        ++count;
        c = getchar();      
    }
    return arr;
}