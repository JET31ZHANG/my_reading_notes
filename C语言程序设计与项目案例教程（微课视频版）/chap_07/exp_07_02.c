/*
*   输入 a 和 b 两个整数，按从大到小的顺序输出两个数
*
*   样例输入：3 7
*   样例输出：a = 3, b = 7
*            max = 7, min = 3
*/
#include <stdio.h>

int main(void)
{
    int a, b, *p, *p1, *p2;

    scanf("%d%d", &a, &b);
    p1 = &a;            /* 为指针变量赋值 */
    p2 = &b;

    if(a < b)
    {
        p = p1;
        p1 = p2;
        p2 = p;
    }
    /* 直接访问变量 i, j */
    printf("a = %d, b = %d\n", a, b);
    /* 间接访问变量 i, j */
    printf("max = %d, min = %d\n", *p1, *p2);

    return 0;
}
