/*
*   分析程序的运行结果
*
*   样例输出：2 4 6 8 10
*            2 4 6 8 10
*            2 4 6 8 10
*/
#include <stdio.h>

int main(void)
{
    int i;
    int *p;
    int a[5] = {2, 4, 6, 8, 10};
    
    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", *(a + i));
    }
    printf("\n");

    /* 指针变量赋值为数组首地址 */
    for( p = a; p < a + 5; p++)
    {
        printf("%d ", *p);
    }
    printf("\n");

    return 0;
}
