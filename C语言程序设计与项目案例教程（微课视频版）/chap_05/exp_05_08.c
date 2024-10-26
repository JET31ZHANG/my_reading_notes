/*
*   
*
*   样例输出：1! + 2! + 3! + 4! + ... + 10! = 4.09113e+05
*/
#include <stdio.h>

#define N 10        /* 宏定义 */

int main(void)
{
    float sum(int n);                                                   /* 对 sum() 函数进行声明 */
    printf("1! + 2! + 3! + 4! + ... + 10! = %-12.5le\n", sum(N));       /* 调用 sum() 函数 */

    return 0;
}

/* 定义 sum()函数，求累加 */
float sum(int n)
{
    float fac(int k);           /* 对 fac() 函数进行声明 */
    int i;
    float s = 0;
    for(i = 1; i < n; i++)
        s += fac(i);            /* 调用 fac() 函数 */
    return s;
}

/* 定义 fac() 函数，计算阶乘 */
float fac(int k)
{
    int i;
    float t = 1;
    for(i = 2; i <= k; i++)
        t *= i;
    return t;
}
