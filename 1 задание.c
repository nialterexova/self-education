#include <stdio.h>
#include <math.h>



int main()
{
    int x1;
    float a,b,c, x, x2;
    printf("Введите a, b, c: \n");
    scanf("%f %f %f", &a, &b, &c);
    if(a == 0)
    {
        if(b == 0)
        {
            if(c == 0)
            {
                printf("x - любое число\n");
            }
            else
            {
                printf("корней нет!\n");
            }
        }
        else
        {
            x=-c/b;
            printf ("x = %g\n", -c/b);
            if ((int)x==x){
                x1=(int)x;
                    if ( (int)x1 % 2 == 0){
                      printf("Число четное"); 
                    }
                    else{
                       printf("Число нечетное");
                    }
                    
                }
                else{
                    printf("X1 дробное\n");
                
                }
        }
    }
    else
    {
        float d, x1, x2;
        d = b * b - 4 * a * c;
        if(d < 0)
        {
            printf("корней нет!\n");
        }
        else
        {
            if(d == 0)
            {
                x=-b/(2*a);
                printf("x= %g\n", -b/(2*a));
                if ((int)x==x){
                x1=(int)x;
                    if ( (int)x1 % 2 == 0){
                      printf("Число четное\n"); 
                    }
                    else{
                       printf("Число нечетное\n");
                    }
                    
                }
                else{
                    printf("X1 дробное\n");
                
                }
            }
            else
            {
                x=(-b+sqrt(d))/(2*a);
                x2=(-b-sqrt(d))/(2*a);
                printf("x1= %g, x2= %g\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
                if ((int)x==x){
                x1=(int)x;
                    if ( (int)x1 % 2 == 0){
                      printf("Число четное\n"); 
                    }
                    else{
                       printf("Число нечетное\n");
                    }
                    
                }
                else{
                    printf("X1 дробное\n");
                
                }
                if ((int)x2==x2){
                x1=(int)x2;
                    if ( (int)x1 % 2 == 0){
                      printf("Число четное"); 
                    }
                    else{
                       printf("Число нечетное");
                    }
                    
                }
                else{
                    printf("X2 дробное\n");
                
                }
        
    }
            }
        }
    }
    



