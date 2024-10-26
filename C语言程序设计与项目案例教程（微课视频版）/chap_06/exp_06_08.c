/*
*   
*
*   样例输入：
*   样例输出：
*/
#include <stdio.h>

int main(void)
{
    int i, j;
    int a[3][5];                        /* 整型二维数组 a 最多存放 3 * 5 = 15 个元素 */

    printf("请输入 3 * 5 的数组：\n");
    for(i = 0; i < 3; i++)              /* 控制行数 */
    {
        for(j = 0; j < 5; j++)          /* 控制每行输出的个数 */
        {
            scanf("%d", &a[i][j]);      /* 数组引用，给数组元素赋值 */
        }
    }

    printf("输出后的数组为：\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);    /* 数组引用，输出数组中每个元素 */
        }
        printf("\n");                   /* 每行输出结束后换行 */
    }
    return 0;
}
