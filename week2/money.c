 #include <stdio.h>
 #include <math.h>
 
int change = 0;
int count = 0;

float get_float(void) {
    int response = 0;
    float x = 0;
    response = scanf("%f",  & x);
    if (response == 1)
        return x;
    else {
        printf("Введите число и перезапустите программу\n");
        exit(1);
    }
}

void coin_counter(int value){
    if (change>=value) {
        int money = change/value;
        count+=money;
        change=change % value;
        printf("Выдать 25 * %i\n", money);
    }
}

int main(void) {
    do {
        printf("\nВведите сколько сдачи требуется в долларах ");
        change = round(100 * get_float());
    } while (change < 0);

    printf("Требуется выдать сдачу %i центов\n", change);
    
    coin_counter(25);
    coin_counter(10);
    coin_counter(5);
    coin_counter(1);
    
    printf("Потрачено %i монет\n", count);
    return 0;
}
