#include <stdio.h>
#include <string.h>
int main()
{
   char fruit[][10] = {"Apple",
                        "Banana",
                        "Grapes"};
   int i;
   for ( i = 0; i < 3; i++ )
   {
      printf("字串內容 %s\n",fruit[i]);
      printf("字串位址 %x\n",fruit[i]);
   }

   getchar();
   return 0;
}