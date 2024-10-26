/*
*   用 for 循环求 1 + 2 + 3 + ... + 100 的值
* 
*   样例输出：sum = 5050
*/

#include <stdio.h>

int main(void)
{
    int i = 0;
    int sum = 0;
    for(i = 1; i <= 100; i++)       /* 当 i 小于等于 100 时执行循环体 */
    {
        sum += i;                   /* 循环体语句 */
    }
    printf("sum = %d", sum);

    return 0;
}