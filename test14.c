#include <stdio.h>
int main()
{
    char str[80] = "Ming-Chi Institute of Technology";

    printf("字串輸出如下 \n");
    puts(str);
    puts(str+4);
    puts(&str[4]);
 getchar();  
 return 0;
}
