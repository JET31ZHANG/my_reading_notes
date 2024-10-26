/*
*   输入 a, b 和 c 3个数，按由大到小的顺序输出
*
*   样例输入：78 17 33
*   样例输出：78 33 17
*/
#include <stdio.h>

/* 实现两个数的比较和交换 */
void swap (int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

/* 实现三个数交换和排序 */
void exchange (int *q1, int *q2, int *q3)
{
    /* 当满足条件时调用 swap() 函数排序 */
    if(*q1 < *q2)           
        swap(q1, q2);
    if(*q1 < *q3)
        swap(q1, q3);
    if(*q2 < *q3)
        swap(q2, q3);
}

int main(void)
{
    int a, b, c, *p11, *p22, *p33;
    scanf("%d%d%d", &a, &b, &c);

    /* 指针变量赋值 */
    p11 = &a;
    p22 = &b;
    p33 = &c;

    /* exchange() 函数实现排序 */
    exchange(p11, p22, p33);
    printf("%d %d %d\n", a, b, c);

    return 0;
}
