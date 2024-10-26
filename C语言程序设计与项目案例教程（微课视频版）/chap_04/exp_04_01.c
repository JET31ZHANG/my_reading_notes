/*
*   对自然数 1 到 100 的求和
*
*   样例输出：sum = 5050
*/

#include <stdio.h>

int main(void)
{
    int i = 1;
    int sum = 0;                /* 存储和的变量 sum 一般要初始化为 0 */
    while(i <= 100)             /* 当满足条件 i <= 100 时，程序将不断执行下面的复合循环体语句 */
    {
        sum += i;               /* 将当前的 i 值加到 sum 中 */
        i++;                    /* 将变量 i 自增 1 */
    }
    printf("sum = %d", sum);

    return 0;
}