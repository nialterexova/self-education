#include <stdio.h>
int main()
{
    int god, *mas, i, sred, otklonenie, godb, godm;
    sred=0;
    godm=0;
    printf("введите количество лет");
    scanf("%d/n",&god);
    for (i = 0; i < god; i++) {
        mas[i] =400 + rand() %401;
        sred+=mas[i] / sizeof(mas[i]);
        printf("%d\n", mas[i]);
    }
    printf("среднее количество осадков = %d\n", sred);
    for (i = 0; i < god; i++) {
        if (mas[i]>sred)
        {
           otklonenie = mas[i] - sred;
           godb+=1;
           printf("год %d отклонение от среднего = %d\n",i+1, otklonenie);
        }
        if (mas[i]<sred)
        {
           otklonenie = mas[i] - sred;
           godm+=1;
           printf("год %d отклонение от среднего = %d\n",i+1, otklonenie);
        }
    }
    printf("количество лет превышающее среднее = %d\n",godb);
    printf("количество лет меньше среднего = %d\n",godm);
    return 0;

}