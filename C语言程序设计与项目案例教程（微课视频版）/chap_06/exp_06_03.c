/*
*   求数组元素中的最大值 max 和最小值 min
*
*   样例输入：
*   样例输出：
*/
#include <stdio.h>
int main()
{
    int a[8];                   /* 整型数组 a 最多存放 8 个元素 */
    int i, max, min;
    printf("请输入 8 个整数：");

    for(i = 0; i < 8; i++)      /* 循环 4 次 */
    {
        scanf("%d", &a[i]);     /* 数组引用，给数组元素赋值 */
    }
    max = a[0];     /* 将第1个元素 a[0] 作为参照物，把 a[0] 的值赋给变量 max 和 min，当作初值 */
    min = a[0];
    for(i = 1; i < 8; i++)
    {
        if(a[i] < min)
            min = a[i];
        if(a[i] > max)
            max = a[i];
    }
    printf("最大值 max 为 %d\n", max);  /* 数组引用，输出数组中最大元素 */
    printf("最小值 min 为 %d\n", min);  /* 数组引用，输出数组中最小元素 */

    return 0;
}