#include <stdio.h>
#include <string.h>
int main()
{
   char password[12];
   int len;
   printf("建立密碼 : ");
   scanf("%s", password);
   len = strlen(password);
   if ( len > 10 )
      printf("密碼長度超出限制\n");
   else if ( len < 6)
      printf("密碼長度太短\n");
   else
      printf("建立密碼 OK\n");

   getchar();
   return 0;
}