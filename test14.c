#include <stdio.h>
#include <string.h>

int main()
{
    char code[] = "Ming52Chi";
    printf("原始驗證碼 = %s\n", code);
    strupr(code);
    printf("大寫驗證碼 = %s\n", code);
    strlwr(code);
    printf("小寫驗證碼 = %s\n", code);
    getchar();  
    return 0;
}
