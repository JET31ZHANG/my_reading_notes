/*
*   对自然数 1 到 100 的求和
*
*   样例输出：sum = 5050
*/

#include <stdio.h>

int main(void)
{
    int i = 1;
    int sum = 0;                /*  */
    while(i <= 100)             /*  */
    {
        sum += i;               /*  */
        i++;                    /*  */
    }
    printf("sum = %d", sum);

    return 0;
}