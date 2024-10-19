/*
*   关系运算符的运用
*
*   样例输出：0, 0, 1, 1, 0, 1
*/

#include <stdio.h>

int main(void)
{
    int a = 3;
    int b = 2;
    printf("%d, %d, %d, %d, %d, %d", 
        a < b, 
        a <= b,
        a > b,
        a >= b,
        a == b,
        a != b);

    return 0;
}