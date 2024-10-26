/*
*   采用 “选择法” 对任意输入的 10 个整数由大到小排序
*
*   样例输入：   请输入 10 个数：
*               2 98 33 87 21 1 75 130 22 10
*   样例输出：   排序后的顺序是：
*                    1    2   10   21   22   33   75   87   98  130
*/
#include <stdio.h>

int main(void)
{
    int i, j, t, a[11];                 /* 定义变量及数组为基本整型 */
    printf("请输入 10 个数：\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);             /* 从键盘中输入要排序的 10 个数字 */
    }

    /* 冒泡排序 */
    for(i = 0; i < 10; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(a[i] > a[j])             /* 如果前一个数比后一个数大，使用变量 t 实现两值互换 */
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    
    printf("排序后的顺序是：\n");
    for(i = 0; i < 10; i++)
    {
        printf("%5d", a[i]);            /* 输出排序后的数组 */
    }
    printf("\n");

    return 0;
}
