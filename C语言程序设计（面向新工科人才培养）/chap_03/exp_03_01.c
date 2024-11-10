/*
    输入： 3
    输出： c = 18.849556, s = 28.274333
*/

#include <stdio.h>
#define PI 3.1415926

int main(void)
{
    double r, s, c;
    scanf("%lf", &r);
    c = 2 * PI * r;
    s = PI * r * r;
    printf("c = %lf, s = %lf", c, s);
    return 0;
}