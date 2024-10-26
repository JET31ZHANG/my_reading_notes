/*
*   统计输入整数的个数（输入 -1 时结束，并且 -1 不统计在内）
*   
*   样例输入：1 81 -1
*   样例输出：输入整数的个数是 2
*/

#include <stdio.h>

int main(void)
{
    int i = 0;
    int num;
    do
    {
        scanf("%d", &num);
        i++;
    } while (num != -1);            /* 当输入的 num 不等于 -1 时，执行循环体 */
    
    printf("输入整数的个数是 %d\n", i - 1);

    return 0;
}