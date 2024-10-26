/*
*   输入一行字母字符，根据需要设置条件编译，使之能将字母全改为大写输出或全改为小写输出
*
*   样例输入：
*   样例输出：String is: I Love my country China
*            Change String is: I LOVE MY COUNTRY CHINA
*/
#include <stdio.h>
#define LETTER 1

int main(void)
{
    int i = 0;
    char c;
    char str[25] = "I Love my country China";
    printf("String is: %s\n", str);
    printf("Change String is: ");

    while((c = str[i]) != '\0')
    {
        i++;
        #if LETTER
            if(c >= 'a' && c <= 'z')
            {
                c = c - 32;
            }
        #else
            if(c >= 'A' && c <= 'Z')
            {
                c = c + 32;
            } 
        #endif
        printf("%c", c);
    }
    printf("\n");
    return 0;
}
