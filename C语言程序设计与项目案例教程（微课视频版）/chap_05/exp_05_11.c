/*
*   
*
*   样例输出：main() 函数初始：s = 30, x = 5, y = 3, z = 1952063493
*           程序块中：s = 30, x = 1, y = 20, z = 21
*           main() 函数修改：s = 18, x = 5, y = 3, z = 8
*/
#include <stdio.h>

/* 定义全局变量 s 和 x，作用域为从定义到程序末尾 */
int s = 30;
int x = 12;

int add(int x, int y)
{
    return x + y;       /* 形参 x、y 作用域为子函数 add 内部 */
}

int main(void)
{
    int x = 5;          /* 定义局部变量x、y、z作用域为 main() 函数内部，屏蔽全局变量 x */
    int y = 3;
    int z = 0;  

    printf("main() 函数初始：s = %d, x = %d, y = %d, z = %d\n", s, x, y);

    {
        int x = 1;      /* 定义块内的局部变量 x，屏蔽 main() 函数的变量 x 和全局变量 x */
        int y = 20;     /* 修改 mian() 函数中定义的局部变量 y 值 */
        z = add(x, y);
        printf("程序块中：s = %d, x = %d, y = %d, z = %d\n", s, x, y, z);
    }

    z = add(x, y);
    s = 18;             /* 在 mian() 函数中直接修改全部变量 s */

    printf("main() 函数修改：s = %d, x = %d, y = %d, z = %d\n", s, x, y, z);

    return 0;
}
