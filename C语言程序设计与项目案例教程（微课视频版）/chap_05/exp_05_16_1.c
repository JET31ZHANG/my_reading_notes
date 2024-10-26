/*
*   
*
*   样例输入：
*   样例输出：
*/
#include <stdio.h>
#include "exp_05_16_2.c"
#include "exp_05_16_3.c"

int main(void)
{
    int a, b, c, s, m;
    printf("\n a, b, c = ?");
    scanf("%d, %d, %d", &a, &b, &c);
    s = sum(a, b, c);
    m = mul(a, b, c);
    printf("The sum is %d\n", s);
    printf("The mul is %d\n", m);
    
    return 0;
}
