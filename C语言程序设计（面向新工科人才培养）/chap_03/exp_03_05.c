/*
    输出： 
        x = 6
        x = 7, y = 7
        x = 6, y = 7
*/
#include <stdio.h>

int main(void)
{
    int x = 6, y;
    printf("x = %d\n", x);
    y = ++x;
    printf("x = %d, y = %d\n", x, y);
    y = x--;
    printf("x = %d, y = %d\n", x, y);

    return 0;
}