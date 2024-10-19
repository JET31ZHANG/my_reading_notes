/*
*   自增与自减运算符的使用方法
*
*   样例输出：a = 4, b = 5, c = 15
*            a = 5, b = 5, c = 25
*/

#include <stdio.h>

int main(void)
{
    int a = 2;
    int b = 4;
    int c = 0;

    a++;
    ++b;
    /*
    *   这样的写法是不好的，自增运算单独写在一行，不要将自增与赋值运算写在一起，避免歧义。
    */
    c = (a++) * b;
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    c = (++a) * b;
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}