/*
*   源程序5-13-1
*
*   样例输入：
*   样例输出：
*/
#include <stdio.h>
#include "exp_05_13_2.c"
int a;
extern void fun();

int main(void)
{
    a = 35;
    printf("main() 函数中 a = %d\n", a);
    fun();
    printf("调用 fun() 函数后. main() 函数中 a = %d\n", a);
    return 0;
}
