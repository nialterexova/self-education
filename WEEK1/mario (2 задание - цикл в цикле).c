#include<stdio.h>
#include<stdbool.h>

int main() 
{
    int SelectedHeight;
    int NewLine;
    int Hashtag;
    int Space;
    
    bool ConditionCompleted = true;
        while (ConditionCompleted)    
        {
            printf("Задайте высоту полупирамиды с помощью неотрицательного целого числа от 0 до 23: \n");
            scanf("%d", &SelectedHeight);
                if (SelectedHeight >= 0 && SelectedHeight <= 23)
                    ConditionCompleted = false;
        }
                        for (NewLine = 0; NewLine < SelectedHeight; NewLine++)
                        {
                            for (Space = 0; Space < SelectedHeight - NewLine; Space++)
                            {
                                printf(" ");
                            }
                            for (Hashtag = -1; Hashtag < NewLine; Hashtag++)
                            {   
                                printf("#");
                            }    
                            printf("\n");
                        }
    

    return 0;
}