/*
*   使用指针参数将改变带回到调用函数
*
*   样例输出：before calling: i = 133, j = 58
*            in the function swap: *a = 58 *b = 133
*            after calling: i = 58, j = 133
*/
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("in the function swap: *a = %d *b = %d\n", *a, *b);
}

int main(void)
{
    int i = 133;
    int j = 58;

    printf("before calling: i = %d, j = %d\n", i, j);
    swap(&i, &j);
    printf("after calling: i = %d, j = %d\n", i, j);

    return 0;
}
