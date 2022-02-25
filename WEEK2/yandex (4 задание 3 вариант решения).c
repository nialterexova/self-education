#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int i;
    int j;
    
    scanf("%d %d %d", &N, &i, &j);
    
    int Way1 = abs (i - j) - 1;
    int Way2 = N - Way1 - 2;
        
    if (Way1 <= Way2)
    {
        printf("%d", Way1);
    }
    else 
    {
        printf("%d", Way2);
        
    }
        
    return 0;
}
