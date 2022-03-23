#include <stdio.h>
#include <time.h>

int get_int(void);

int main()
{
    int array_size = get_int();
    int sum_downfall = 0;
    int array_avg = 0;
    int count_larger = 0;
    int count_smaller = 0;
    srand(time(NULL));
    
    int downfall[array_size];
    
    for (int i=0; i<array_size; i++){
        downfall[i] = (40 + rand()%(80-40+1))*10;
        sum_downfall += downfall[i];
        printf("%i ", downfall[i]);
    }
    
    array_avg = round((float)sum_downfall/array_size);
    printf("\nСреднее = %i\n", array_avg);
    
    for (int i=0; i<array_size; i++){
        printf("%i ", downfall[i]-array_avg);
        if (downfall[i] > array_avg) count_larger++;
        if (downfall[i] < array_avg) count_smaller++;
    }
    
    printf("\nМеньше среднего = %i \nБольше среднего = %i", count_smaller, count_larger);

    return 0;
}


int get_int(void) {
    int response = 0;
    int x = 0;
    response = scanf("%i",  & x);
    if (response == 1)
        return x;
    else {
        printf("Введите целое число и перезапустите программу\n");
        exit(1);
    }
}