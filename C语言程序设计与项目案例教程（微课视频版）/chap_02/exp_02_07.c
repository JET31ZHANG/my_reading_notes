/*
*   强制类型转换
*
*   样例输出：c = 6, d = 7, e = 6
*/

#include <stdio.h>

int main(void)
{
    float a = 3.6, b = 3.7;                         /* 定义单精度变量 a, b */
    int c, d, e;                                    /* 定义整型变量 c, d, e */
    c = (int)a + (int)b;                            /* 计算变量 c 的值 */
    d = (int)(a + b);                               /* 计算变量 d 的值 */
    e = (int)(a)+b;                                 /* 计算变量 e 的值 */

    printf("c = %d, d = %d, e = %d\n", c, d, e);    /* 输出变量 c, d, e 的值 */

    return 0;
}