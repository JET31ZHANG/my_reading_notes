/*
*   静态变量
*
*   样例输出： 第一次调用子函数后结果为 8。
*             第二次调用子函数后结果为 17。
*/
#include <stdio.h>

int func(int a, int b);

int main(void)
{
    int k = 4;
    int m = 1;
    int p;

    p = func(k, m);
    printf("第一次调用子函数后结果为 %d。", p);
    p = func(k, m);
    printf("\n第二次调用子函数后结果为 %d。", p);

    return 0;
}

int func(int a, int b)
{
    /* 定义静态变量 m 和 i，从第二次起每次调用时初值为上次调用结果 */
    static int m = 0;
    static int i = 2;

    i += m + 1;
    m = i + a + b;
    return(m);      /* 在 mian() 函数中直接修改全部变量 s */
}