/*
*   
*
*   样例输入：
*   样例输出：
*/

#include <stdio.h>

int main(void)
{
    int a, b, c, max;               /* 定义变量 */
    printf("请输入 3 个整数：\n");   /* 输出提示信息 */
    scanf("%d%d%d", &a, &b, &c);    /* 输出提示信息 */
    if(a > b)                       /* a > b */
    {
        if(a > c)                   /* a > b 并且 a > c, 最大值为 a */
        {
            max = a;
        }
        else                        /* a > b 并且 c > a, 最大值为 c */
        {
            max = c;
        }
    }
    else                            /* a < b */
    {
        if(b > c)                   /* b > a 并且 b > c, 最大值为 b */
        {
            max = b;
        }
        else                        /* b > a 并且 c > b, 最大值为 c */
        {
            max = c;
        }
    }

    printf("max = %d\n", max);      /* 输出最大值 max */

    return 0;                       /* 函数返回值 */
}