/*
*   
*
*   样例输出：main: a = 5, b = 8
*            sub: a = 1, b = 7
*            main: a = 5, b = 8
*/
#include <stdio.h>

int sub();

int main(void)
{
    int a = 5;
    int b = 8;
    printf("main: a = %d, b = %d\n", a, b);
    sub();
    printf("main: a = %d, b = %d\n", a, b);

    return 0;
}

int sub()
{
    int a = 1;
    int b = 7;
    printf("sub: a = %d, b = %d\n", a, b);
    return a, b;
}
