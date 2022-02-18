#include <stdio.h>
#include <string.h>
  
int vvod(){
    int y1=0;
    float y=0;
    int sum, test=0;
    printf("Введите cдачу $ : ");
    test=scanf("%f", &y);
    if (y>0.0 & test==1){
      y=y*100;
      y=roundf(y);
      y1=(int)y;
      while (y1!=0){
       if (y1>=25){
          y1-=25;
          sum+=1;
          printf("-25");
          printf(" Остаток %d\n", y1);
      }
      else if (y1>=10){
              y1-=10.0;
              sum+=1;
              printf("-10");
              printf(" Остаток %d\n", y1);
          }
      else if (y1>=5){
                  y1-=5.0;
                  sum+=1;
                  printf("-5");
                  printf(" Остаток %d\n", y1);
              }    
      else{
          y1-=1.0;
          sum+=1;
          printf("-1");
          printf(" Остаток %d\n", y1);
      }
      }
      printf("конец %d", sum);
    }
    else{
        printf("Запустите программу заново и введите число!");
        // main();
    }
}
   
int main()
{
    
    vvod();
    
}



