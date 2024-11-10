/*
    输出： 
            97 98
            a b
            A B
            65 66
*/
#include <stdio.h>

int main(void)
{
    int x, y;
    char c1, c2;
    x = 'a';
    y = 'b';
    c1 = 97;
    c2 = 98;

    c1 = c1 - 32;
    c2 = c2 - 32;

    printf("%d %d\n", x, y);
    printf("%c %c\n", x, y);
    printf("%c %c\n", c1, c2);
    printf("%d %d\n", c1, c2);

    return 0;
}