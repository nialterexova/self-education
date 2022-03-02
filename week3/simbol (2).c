/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void df_char(char y);

int main()
{
    char x;
    printf("Введите обозначение конца ввода");
    scanf("%c",&x);
df_char(x);   
}

void df_char(char y){
    int chet_simbol=0; 
    int chet_sLov=1; 
    int chet_strok=1; 
int c = getchar();
while(c!=y){
    c = getchar(); 
    if ((c!='\n') & (c!=y)){
        chet_simbol+=1;  
    } 
    if ((c==' ') | (c==EOF)){
        chet_sLov+=1;
    }
    if (c=='\n') {
        chet_strok+=1;
    }
        }
printf("%s%i%s%i%s%i","слов = ",chet_sLov," символов = ",chet_simbol," строк = ",chet_strok);
            }