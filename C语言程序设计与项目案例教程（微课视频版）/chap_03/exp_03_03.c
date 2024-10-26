/*
*   编程实现，输入两个整数，输出这两个数中较大的数（用 if-else 语句实现）
*
*   样例输入：
*   样例输出：
*/

#include <stdio.h>

int main(void)
{
    int a, b;                       /* 定义整型变量 a、b */
    printf("请输入两个整数：");      /* 输出屏幕提示 */
    scanf("%d %d", &a, &b);         /* 从键盘输入 a 和 b 的值 */
    if(a > b)                       /* 若 a 大于 b，输出 a */
    {
        printf("max = %d", a);
    }
    else                            /* 否则输出 b */
    {
        printf("max = %d", b);
    }
    
    return 0;                       /* 函数返回值 0 */
}