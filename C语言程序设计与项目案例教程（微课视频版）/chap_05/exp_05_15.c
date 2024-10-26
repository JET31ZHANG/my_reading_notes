/*
*   带参数的宏定义，求两个数的和
*
*   样例输出：两数之和为：8
*/
#include <stdio.h>

#define SUM(a, b)(a + b)

int main(void)
{
    printf("两数之和为：%d", SUM(3, 5));
    return 0;
}
