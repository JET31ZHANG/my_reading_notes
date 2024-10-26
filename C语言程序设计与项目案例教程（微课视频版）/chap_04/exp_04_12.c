/*
*   输出 1 ~ 50 中能被 6 整除的数
* 
*   样例输出：  6 12 18 24 30 36 42 48
*/

#include <stdio.h>

int main(void)
{
    int n;
    for(n = 1; n <= 50; n++)
    {
        if(n % 6 != 0)          /* 判断 n 能否被 6 整除 */
        {
            continue;           /* 当 n 不能被 6 整除时跳出本次循环 */
        }
        printf("%3d", n);       /* 格式 3d 表示输出值占 3 个宽度 */
    }
    return 0;
}