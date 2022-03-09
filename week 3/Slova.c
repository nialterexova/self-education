/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int letter = getchar();
    int slov = 0, n = 0, simv = 0;
    
    while (letter != EOF) {
        printf ("%c", letter);
        letter = getchar();
        simv += 1;
        if (letter == ' ') {
            slov += 1;
            letter = getchar();
            printf ("\n");
        }
        if (letter == '\n') {
            n += 1;
        }
    }
    printf ("\nKol-vo simvolov: %i\n", simv);
    printf ("Kol-vo slov: %i\n", slov);
    printf ("Kol-vo strok: %i", n);
    return 0;
}
 