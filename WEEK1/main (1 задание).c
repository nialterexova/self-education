#include <stdio.h>
#include <math.h>

int main(){
    printf("Рассчитаем квадратное уравнение a*x* + b*x + c\n Для начала найдем Дискриминант (d)\nd = b*b - 4*a*c\n");
    long double a, b, c, d, x1, x2;
    int z1, z2;
    printf("Введите любое число a от - 1.7E-308 до 1.7E+308: "); scanf("%Lf", &a);
    printf("Введите любое число b от - 1.7E-308 до 1.7E+308: "); scanf("%Lf", &b);
    printf("Введите любое число c от - 1.7E-308 до 1.7E+308: "); scanf("%Lf", &c);
    d = b*b - 4*a*c;
    printf("Дискриминант = %Lf\n", d);
    
    
    if (d < 0.0) 
    { 
    printf("Уравнение не имеет вещественных корней.");
    }    
    else if (d > 0.0)    
    {       
    x1 = (-b + sqrtl(d)) / (2*a);
    x2 = (-b - sqrtl(d)) / (2*a); 
    printf("Уравнение имеет 2 корня:\nx1 = %Lf\nx2 = %Lf", x1, x2);
    
    
    z1 = x1;
    if (z1 % 2 == 0)  
    { 
    printf("\nx1 - четное"); 
    }
    else
    {
    printf("\nx1 - нечетное");
    }
    
    
    z2 = x2;
    if (z2 % 2 == 0)  
    { 
    printf("\nx2 - четное");
    }
    else{
    printf("\nx2 - нечетное");
    }  
    }
    
    
    else     
    {     
    x1 = (-b / 2*a);
    x2 = (-b / 2*a);
    printf("Уравнение имеет 2 одинаковых корня:\nx1 = %Lf\nx2 = %Lf", x1, x2);
    
    
    z1 = x1;
    if (z1 % 2 == 0)  
    { 
    printf("\nx1 - четное");
    }
    else
    {
    printf("\nx1 - нечетное");
    }
        
        
    } 
   
    /*x1 = z1;
    if (z1 % 2 == 0)  
    { 
    printf("\n x1 - четное");
    }
    else{
    printf("\n x1 - нечетное");
    }
    x2 = z2;
    if (z2 % 2 == 0)  
    { 
    printf("\n x2 - четное");
    }
    else{
    printf("\n x2 - нечетное");
    }
    */

    /*printf("\nПроверяем получившийся корень по теореме Виета:\n");
    if (c == x1 * x2 && -b == x1 + x2)
    printf("Проверка по теореме Виета успешная.");
    else
    printf("Данные неверные.");*/
    
    return 0;
}

