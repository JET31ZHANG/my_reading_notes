/*
*   利用冒泡排序法对 10 个整数进行排序
*
*   样例输出：
*           3       10      18      19      25      27      33      56      78      88
*/
#include <stdio.h>
#define N 10

int main(void)
{
    int a[N] = {3, 18, 25, 33, 10, 19, 27, 56, 78, 88};	        /* 数组 a 存放 10 个整型数据 */
    int i, j, t;
    for(i = 0; i < N - 1; i++)              /* i 控制循环比较次数 */
    {
        for(j = N - 1; j > i; j--)          /* j 控制本轮比较次数 */
        {
            if(a[j - 1] > a[j])             /* 若后者大于前者交换数据 */
            {
                t = a[j - 1];
                a[j - 1] = a[j];
                a[j] = t;
            }
        }
    }
    printf("\n");
    for(i = 0; i < N; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
