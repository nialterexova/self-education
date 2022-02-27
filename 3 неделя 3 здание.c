#include <stdio.h>
#include <string.h>
int main()
{
    printf("введите имя и фамилию: ");
    char str [40];
    char sep [2]=" ";
    char *istr;
    char itog[10]="   ";
    fgets(str, 40, stdin);
    istr = strtok (str,sep);
    itog[0]=istr[0];
    istr = strtok (NULL,sep);
    itog[1]=istr[0];
    printf("%s\n", itog);
    return 0;
}
