 # include < stdio.h >

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

int main(void) {
    int high = 0;

    do {
		printf("\nВведите высоту пирамиды ");
        high = get_int();
    } while (high < 1);

    for (int i = 2; i <= high + 1; i++) {
        for (int j = high + 1; j > 0; j--) {
            if (i >= j)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
