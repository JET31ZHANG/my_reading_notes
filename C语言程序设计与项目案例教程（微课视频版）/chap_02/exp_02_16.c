/*
*   条件运算的运用
*
*   样例输入：3, 4, 5
*   样例输出：a = 3, b = 4, c = 5, max = 5
*/

#include <stdio.h>

int main(void)
{
    int a, b, c, max;
    scanf("%d, %d, %d", &a, &b, &c);
    /*
    *   三目运算符
    */
    max = a > (b > c ? b : c)? a : (b > c ? b : c);

    printf("a = %d, b = %d, c = %d, max = %d\n", a, b, c, max);
    return 0;
}