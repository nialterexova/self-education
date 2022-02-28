#include<stdio.h>
#include<stdbool.h>

int main() 
{
    int students;
    float SumCoordinates;
    int CoordinatHouse;
    int CoordinatSchool;
    float average;
    
    int MaximumStudents[100000];
    
    bool ConditionCompleted = true;
        while (ConditionCompleted)
        {
            scanf("%d", &students);
                if (students > 0 && students < 100001)
                    ConditionCompleted = false;
        }
    
    for (int i = 0; i < students; i++)
    {
        scanf("%d", &CoordinatHouse);
        SumCoordinates = SumCoordinates + CoordinatHouse;
    }
    
    average = (float) SumCoordinates / students;
    CoordinatSchool = average;
    
    if (average - (int) average > 0.5)
    {
        CoordinatSchool = CoordinatSchool + 1;
    }
    
    printf("%d", CoordinatSchool);
    
    return 0;
}