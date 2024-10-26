/*
*   
*
*   样例输入：请输入杨辉三角的行数：6
*   样例输出：
*           1
*           1       1
*           1       2       1
*           1       3       3       1
*           1       4       6       4       1
*           1       5       10      10      5       1
*/
#include <stdio.h>

#define N 20        /* 行数最大值 */ 

int main(void)
{
    int i = 0;
    int j = 0;
    int n;
    int a[N][N];

    printf("请输入杨辉三角的行数：");
    scanf("%d", &n);
    for(i = 0; i < n; i++)                  /* 杨辉三角垂直和对角线上元素赋初值为1 */
    {
        a[i][i] = 1;
        a[i][0] = 1;
    }
    for(i = 2; i < n; i++)                  /* 中间每个元素值都为其上面和上面前一个元素值之和 */
    {
        for(j = 1; j < i; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }

    for(i = 0; i < n; i++)                  /* 输出杨辉三角形 */
    {
        for(j = 0; j <= i; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
