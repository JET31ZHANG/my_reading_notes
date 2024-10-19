/*
*   运算符 "/" 和 "%" 的用法
*
*   样例输出：a = 1, b = 2, c = 1.666667
*/

#include <stdio.h>

int main(void)
{
    int a = 5 / 3;
    int b = 5 % 3;      /* 运算符 % 要求操作数必须为整型 */
    float c = 5 / 3.0;

    printf("a = %d, b = %d, c = %f", a, b, c);
    return 0;
}