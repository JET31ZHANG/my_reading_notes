/*
*   
*
*   样例输出：   1.80 和  2.60 的平均值是： 2.20
*               1.80 和  4.40 的平均值是： 3.10
*               2.0 和 4.0 的平均值是： 3.00
*               平均值是:  2.00
*/
#include <stdio.h>

/* 定义函数用于计算两数的平均值，x 和 y 为形参 */
float average(float x, float y)
{
    float av;
    av = (x + y) / 2.0;     /* 定义变量 av 用于存放平均值 */
    return av;              /* 返回 av 的值*/
}

int main(void)
{
    float a = 1.8;
    float b = 2.6;
    float c;

    c = average(a, b);                  /* 实参为确定值的变量 */
    printf("%5.2f 和 %5.2f 的平均值是：%5.2f\n", a, b, c);
    c = average(a, a + b);              /* 实参为表达式 */
    printf("%5.2f 和 %5.2f 的平均值是：%5.2f\n", a, a+b, c);
    c = average(2.0, 4.0);              /* 实参为常量 */
    printf("2.0 和 4.0 的平均值是：%5.2f\n", c);
    c = average(a, average(a, b));      /* 实参为函数调用 */
    printf("平均值是: %5.2f\n", c);

    return 0;
}
