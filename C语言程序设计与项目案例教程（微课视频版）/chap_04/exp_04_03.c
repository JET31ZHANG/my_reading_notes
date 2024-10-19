/*
*   
* 
*   样例输出：sum = 5050
*/

#include <stdio.h>

int main(void)
{
    int i = 1, sum = 0;
    do
    {
        sum += i;
        i++;
    } while (i <= 100);             /*  */

    printf("sum = %d", sum);

    return 0;
}