/*
*   用指针法输出数组中的全部元素
*
*   样例输出：a[0] = 0
*            a[1] = 1
*            a[2] = 2
*            a[3] = 3
*            a[4] = 4
*/
#include <stdio.h>

int main(void)
{
    int i;
    int a[5];
    for(i = 0; i < 5; i++)
    {
        *(a + i) = i;
    }
    for(i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, *(a + i));
    }
    return 0;
}
