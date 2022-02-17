#include <stdio.h>
#include <string.h>
   
int main()
{
    int y, test=0;
    
    printf("Введите высоту(0-23): ");
    test=scanf("%i", &y);
    if (y>0 & y<24 & test==1)
    {
       printf("Высота=%d\n", y);
        char str[23]=" ";
        for(int i=1; i<=y; i++)
      {
        str[i]=' ';
      }
      str[y]='#';
      str[y+1]='#';
       for(int i=y; i>=1; i--)
      {
        str[i]='#';
        printf("%s\n", str);
      }
    //   main();
    }
    else{
        printf("Ты че читаешь плоxо?\n");
        // main();
    }
    return 0;
}
