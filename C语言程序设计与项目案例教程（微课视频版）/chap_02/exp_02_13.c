/*
*   赋值运算的结合性
*
*   样例输出：a = 16
*/

#include <stdio.h>

int main(void)
{
    int a = 1;
    /*
    *   这种写法是炫技，是不好的，不易懂。
    *   它的原意是：
    *   1）a -= 5 : a = a - 5， 则 a 变为 -4
    *   2）a *= a : a = a * a = (-4) * (-4)，则 a 为 16
    */
    a *= a -= 5;

    printf("a = %d", a);

    return 0;
}