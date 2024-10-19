/*
*   putchar() 函数的用法
*
*   样例输出：I LOVE CHINA
*/

#include <stdio.h>

int main(void)
{
    char a = 'C';
    char b = 'H';
    char c = 'I';
    char d = 'N';
    char e = 'A';

    printf("%s", "I LOVE ");        /* 输出字符串常量 */ 

    /* 依次输出字符变量 a, b, c, d, e 的值 */
    putchar(a);
    putchar(b);
    putchar(c);
    putchar(d);
    putchar(e);

    return 0;
}