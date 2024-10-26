/*
*   
*
*   样例输入：请输入两个整数：4 6
*   样例输出：4和6的较大值是6!
*/
#include <stdio.h>

/* 子函数 max 的声明语句 */
int max(int a, int b);

int main(void)
{
    int x, y, z;
    printf("请输入两个整数：");
    scanf("%d%d", &x, &y);
    z = max(x, y);      /* 子函数 max 在 main() 函数中的调用语句 */
    printf("%d和%d的较大值是%d!", x, y, z);

    return 0;
}

/* 子函数 max 的函数头，其中变量 a、变量 b 是形参 */
int max(int a, int b)
{
    int m;              /* 定义函数内部变量 m */
    if(a > b)
        m = a;
    else
        m = b;
    return m;           /* 子函数返回语句 */
}