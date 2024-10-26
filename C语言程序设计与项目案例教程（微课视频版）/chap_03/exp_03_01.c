/*
*   
*
*   样例输入：请输入两个整数: 5 23
*   样例输出：两数中较大的数为: 23
*/

#include <stdio.h>

int main(void)
{
    int a, b, max;                         /* 定义整型变量 a, b 和 max */
    printf("请输入两个整数: ");             /* 输出屏幕提示 */
    scanf("%d %d", &a, &b);                /* 从键盘输入 a, b 的值 */
    max = a;                               /* 假设 a 是较大的并赋值给 max */
    if (a < b)                             /* 若 a 比 b 小，将 b 赋给 max */
    {
        max = b;
    }
    printf("两数中较大的数为: %d\n", max);  /* 输出结果 */

    return 0;                             /* 函数返回值 0 */
}