#include<stdio.h>
#include<stdbool.h>
#include <math.h>

int main() 
{
    float Change;
    int TwentyFiveCent;
    int TenCent;
    int FiveCent;
    int OneCent;
    int IntChange;
    
    float CorrectInput = true;
        while (CorrectInput)    
        {
            printf("Сколько сдачи нужно выдать в $?\n");
            scanf("%f", &Change);
                if (Change >= 0.00)
                    CorrectInput = false;
        }
                IntChange = Change*100;
                TenCent = IntChange % 25;
                FiveCent = TenCent % 10;
                OneCent = FiveCent % 5;
                
                TwentyFiveCent = IntChange / 25;
                TenCent = TenCent / 10;
                FiveCent = FiveCent / 5;
                OneCent = OneCent / 1;
                    printf("%d номиналом 25 центов\n%d номиналом 10 центов\n%d номиналом 5 центов\n%d номиналом 1 центов\n", TwentyFiveCent, TenCent, FiveCent, OneCent);
        
return 0;
}
