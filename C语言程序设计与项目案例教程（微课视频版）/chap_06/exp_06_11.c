/*
*   求一个 3 x 3 矩阵的两条对角线元素之和（两条对角线交叉点处的元素只计算一次）
*
*   样例输入：
*   样例输出：
*/
#include <stdio.h>

int main(void)
{
    int a[3][3];                        /* 定义 3 * 3 的矩阵 */
    int i = 0;
    int j = 0;
    int sum = 0;
    int result1 = 0;
    int result2 = 0;

    for(i = 0; i < 3; i++)
    {
        printf("输入一行: ");
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);      /* 逐行输入矩阵 */
            if(i == j)                  /* 若下标相同，则累加到 result1 */
            {
                result1 += a[i][j];
            }

            if(i + j == 2 && i != j)    /* 若下标不同且和为 2，则累加到 result2 */
            {
                result2 += a[i][j];
            }
        }
    }

    sum  = result1 + result2;
    printf("sum = %d\n", sum);

    return 0;
}
