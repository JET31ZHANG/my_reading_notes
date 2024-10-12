/*
*   字符型数据与整型数据赋值
*
*   样例输出：   c1 = a c2 = b a = 97
*/

#include <stdio.h>

int main(void)
{
    char c1, c2;                                    /* 定义字符变量 c1, c2 */
    int a;
    c1 = 'a', c2 = 98;                              /* 'a' 赋值给 c1, 98 赋值给 c2 */
    a = 'a';                                        /* 'a' 赋值给变量 a */
    printf("c1 = %c c2 = %c a = %d", c1, c2, a);    /* 分别输出 c1, c2, a 的值 */

    return 0;
}