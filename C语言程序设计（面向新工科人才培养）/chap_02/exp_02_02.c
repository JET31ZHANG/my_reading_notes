/* 输入两个整数输出最大整数 */
#include "stdio.h"

// 输出最大值
int max(int a, int b)
{
    int m;
    m = a > b ? a : b;
    return m; 
}

int main(void)
{
    int a, b, m;
    scanf("%d %d", &a, &b);
    m = max(a, b);
    printf("%d\n", m);
    
    return 0;
}