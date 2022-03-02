#include <stdio.h>
int main()
{
    char FIO;
    int ReallyCondition = 1;
    while (FIO = getchar())
    {   
        if (ReallyCondition == 1)
        {
            if (FIO > 96)
            {
                FIO = FIO - 32;
            }
        printf("%c", FIO);
        }
        
        ReallyCondition = 0;
        if (FIO == 32)
            ReallyCondition = 1;
    }
    return 0;
}