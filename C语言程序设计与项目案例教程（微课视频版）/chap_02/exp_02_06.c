/*
*   自动类型转换
*   
*   样例输出： 72.500000
*/

#include <stdio.h>

int main(void)
{
    int a = 5;                      /* 定义整型变量 a */
    float b = 2.5;                  /* 定义单精度变量 b */
    char c = 'A';                   /* 定义字符变量 c */
    printf("%f\n", b + (a + c));    /* 输出 b + (a + c) 的结果 */

    return 0;
}