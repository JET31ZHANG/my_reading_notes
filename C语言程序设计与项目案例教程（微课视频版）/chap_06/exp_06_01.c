/*
*   
*
*   样例输入：
*   样例输出：
*/
#include <stdio.h>
int main()
{
    int a[5];                   
    int i, min;
    for(i = 0; i < 5; i++)      /* 循环 4 次 */
    {
        scanf("%d", &a[i]);     /* 数组引用，给数组元素赋值 */
    }

    min = a[0];                 /* 数组引用，给 min 变量赋初值 */
    for(i = 0; i < 5; i++)
    {
        if(min > a[i])          /* 数组引用，若 min 大于 a[i] */
        {
            min = a[i];         /* 数组引用，将较小的赋值给 min */
        }
    }
    printf("最小值为：%d\n", min);  /* 输出最小值 min */
    return 0;
}