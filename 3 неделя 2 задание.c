#include <stdio.h>
#include <string.h>
int main()
{
   char str [50];
   char sep [10]=" ";
   char *istr;
   int i=0;
    gets(str);
   printf ("Рузультат работы:\n\a");

   istr = strtok (str,sep);

   while (istr != NULL)
   {
      printf ("%s\n",istr);
      istr = strtok (NULL,sep);
      i++;
   }
   printf ("Всего слов:\n");
   printf("%d", i);
    return 0;
}
