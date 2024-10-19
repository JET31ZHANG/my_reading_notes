/*
*   
* 
*   样例输出：sum = 5050
*/

#include <stdio.h>

int main(void)
{
    int i = 0;
    int sum = 0;
    for(i = 1; i <= 100; i++)       /*  */
    {
        sum += i;                   /*  */
    }
    printf("sum = %d", sum);

    return 0;
}