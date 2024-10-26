/*
*   
*
*   样例输入：
*   样例输出：
*/

#include <stdio.h>

int main(void)
{
    int s;                              /* 定义整型变量 s 表示交通信号灯 */
    printf("请输入信号灯的值：");         /* 输出屏幕提示 */
    scanf("%d", &s);                    /* 从键盘输入 s 的值 */

    if (s == 1)                         /* s == 1, 表示绿灯亮 */
    {
        printf("请车辆有序通行！\n");    /* 输出结果 */
    }
    else                               /* s 输入其他值, 表示红灯亮 */
    {
        printf("请及时停车！\n");       /* 输出结果 */
    }

    return 0;                          /* 函数返回值 0 */
}