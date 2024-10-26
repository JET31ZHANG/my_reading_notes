/*
*   计算满足条件的最大整数 i，使得 1 + 2 + 3 + ... + i <= 10000
* 
*   样例输出：最大整数 i 为 140, 使得 1 + 2 + 3 + ... + i <= 10000
*/

#include <stdio.h>

int main(void)
{
    int i = 0;
    int sum = 0;
    for(i = 1;; i++)
    {
        sum += i;
        if(sum > 10000)         /* 当 sum > 10000 时跳出循环 */
        {
            break;
        }
    }
    printf("最大整数 i 为 %d, 使得 1 + 2 + 3 + ... + i <= 10000\n", i - 1);

    return 0;
}