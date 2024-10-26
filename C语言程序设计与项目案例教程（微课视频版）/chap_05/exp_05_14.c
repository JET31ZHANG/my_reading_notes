/*
*   求 100 以内所有奇数的和
*
*   样例输出：sum = 4950
*/
#include <stdio.h>

#define N 100

int main(void)
{
    int i = 0;
    int sum = 0;
    for(i = 1; i < N; i++)
        sum += i;
    printf("sum = %d\n", sum);

    return 0;
}
