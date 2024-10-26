/*
*   斐波那契数列(Fibonacci sequence)又称黄金分割数列、兔子数列
*   形如：1， 1， 2， 3， 5， 8， 13， 21， 34， ... 
*   编写程序，用数组实现 Fibonacci 数列的前 20 项
*
*   样例输出：
*         1         1         2         3
*         5         8        13        21
*        34        55        89       144
*       233       377       610       987
*      1597      2584      4181      6765
*/
#include <stdio.h>

int main(void)
{
    int n;
    int f[20];                          /* 整型数组 f 最多存放 20 个元素 */
    f[0] = 1;
    f[1] = 1;
    for(n = 2; n < 20; n++)
    {
        f[n] = f[n - 1] + f[n - 2];     /* 计算 f[n] 的值 */
    }
    for(n = 0; n < 20; n++)
    {
        if(n % 4 == 0)                  /* 若n能够被4整除 */
        {
            printf("\n");               /* 每输出四个数后换行 */
        }
        printf("%10d", f[n]);           /* 输出数列中所有的值 */
    }
    printf("\n");                       /* 输出换行 */

    return 0;
}
