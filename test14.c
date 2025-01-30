#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "This is a good book for C";
    char str2[] = "Introduction to C";

    puts("呼叫 strcpy 前");
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);
    strcpy(str1,str2);
    puts("呼叫 strcpy 後");
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);
 getchar();  
 return 0;
}
