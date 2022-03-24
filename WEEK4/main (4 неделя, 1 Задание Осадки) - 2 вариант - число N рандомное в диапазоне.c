#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int year = 0;
    int sum = 0;
    srand(time(NULL));
    int N = (1 + rand()%(21));
    printf("Рандомное число N = %d лет \n", N);
    for (int i = 0; i < N; i++){
        srand(time(NULL)+i);
        year = ((400 + rand()%(800 - 399))/10)*10;
        sum = sum + year;
        printf("%d год - %d мм\n", i + 1, year);
    }
    int average = 0;
    int moreAverage = 0;
    int lessAverage = 0;
    for (int i = 0; i < N; i++){
        srand(time(NULL)+i);
        year = ((400 + rand()%(800 - 399))/10)*10;
        average = sum / N;
        int deviations =  year - average;
        if(average < year)
            moreAverage = moreAverage + 1;
        else if(average > year)
            lessAverage = lessAverage + 1;  
        printf("%d год - Отклонение от среднего: %d мм\n", i + 1, deviations);
    }
    printf("Среднее кол-во осадков - %d мм\nКол-во лет больше среднего - %d лет\nКол-во лет меньше среднего - %d лет\n", average, moreAverage,lessAverage);
    return 0;
}