#include <stdio.h>
#include <string.h>
int main()
{
   char time[][50] = {"09:00 - 10:00",
                      "10:00 - 10:50",
                      "11:00 - 11:50"};
   char course[][50] = {"AI 數學",
                        "Python",
                        "現代物理"};
   int i, len;
   len = sizeof(time) / sizeof(time[0]);
   for ( i = 0; i < len; i++ )
      strcat(time[i],course[i]);
   printf("我今天的課表\n");
   for ( i = 0; i < len; i++ )
      printf("%s\n",time[i]);
   getchar();
   return 0;
}