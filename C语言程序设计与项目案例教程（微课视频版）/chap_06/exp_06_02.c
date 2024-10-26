/*
*   一维数组的输入与输出
*
*   样例输入：
*   样例输出：
*/
#include <stdio.h>
int main()
{
    int a[5];                               /* 整型数组 a 最多存放 5 个元素 */
    int i;
    printf("输入数组 a (共5个整数):");
    for(i = 0; i < 5; i++)                  /* 循环 4 次 */
    {
        scanf("%d", &a[i]);                 /* 数组引用，给数组元素赋值 */
    }
    printf("\n输出数组a:\n");
    for(i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);    /* 数组引用，输出数组中每个元素 */
    }
    return 0;
}