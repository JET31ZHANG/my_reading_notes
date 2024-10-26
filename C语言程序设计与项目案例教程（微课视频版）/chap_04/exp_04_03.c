/*
*   用 do-while 循环求 1 + 2 + 3 + ... + 100 的值
* 
*   样例输出：sum = 5050
*/

#include <stdio.h>

int main(void)
{
    int i = 1, sum = 0;
    do
    {
        sum += i;
        i++;
    } while (i <= 100);             /* 当 i 小于或等于 100 时执行循环体 */

    printf("sum = %d", sum);

    return 0;
}