/*
*   编程实现删除有序数组中重复元素
*
*   样例输出：  1 2 3 4 4 4 5 6 6 7
*              1 2 3 4 5 6 7
*/
#include <stdio.h>

/* Del() 函数用于实现删除重复元素 */
int Del(int b[], int n)
{
    int c, *p, *q, *p1;                 /* 定义指针变量 */
    for(p = b; p < b + n; p++)              /* 访问数组 b 中每个元素 */
    {
        q = p + 1;
        c = 0;
        while(*q == *p && q < b + n)    /* 统计相同元素个数 */
        {
            q++;
            c++;
        }
        if(q <= b + n)
        {
            for(p1 = p + 1; q < b + n; p1++, q++)   /* 删除 c 个元素 */
                *p1 = *q;
            n -= c;                     /* 元素个数减少 c 个 */
        }
    }
    return n;
}

int main(void)
{
    int a[10] = {1, 2, 3, 4, 4, 4, 5, 6, 6, 7};     /* 定义并初始化数组 a */
    int i, n;                           /* 定义指针变量指向数组 a */
    int *p = a;

    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);             /* 输出数组 a 的元素 */
    }
    printf("\n");

    n = Del(a, 10);
    for(p = a; p < a + n; p++)          /* 输出删除重复元素后的数组 a */
    {
        printf("%d ", *p);
    }
    printf("\n");

    return 0;
}