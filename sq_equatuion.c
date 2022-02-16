//
// Created by Blados on 14.02.2022.
//
#include "stdio.h"
#include "math.h"

int main() {
    float a, b, c, d, x, x1, x2;
    scanf("%f %f %f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if ((a == 0) && (b == 0)) {
        printf("нет корней");
    } else {
        if (a == 0) {
            x = -c / b;
            printf("%f", x);
        } else {
            if (d < 0) {
                printf("дискриминант < 0, корней нет, сорри");
            } else {
                x1 = (-b + sqrt(d)) / (2 * a);
                x2 = (-b - sqrt(d)) / (2 * a);
                if (d == 0) {
                    printf("%f", x1);

                } else {
                    printf("%f %f", x1, x2);
                }
            }
            return 0;
        }
    }
}