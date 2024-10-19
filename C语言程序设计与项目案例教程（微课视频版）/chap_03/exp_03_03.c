/*
*   编程实现，输入两个整数，输出这两个数中较大的数（用 if-else 语句实现）
*
*   样例输入：
*   样例输出：
*/

#include <stdio.h>

int main(void)
{
    int a, b;
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        printf("max = %d", a);
    }
    else
    {
        printf("max = %d", b);
    }
    
    return 0;
}