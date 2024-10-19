/*
*   
*   样例输入：I love China!
*   样例输出：13
*/

#include <stdio.h>

int main(void)
{
    int n = 0;
    printf("input a string: \n");       /*  */
    while(getchar() != '\n')            /*  */
    {
        n++;
    }
    printf("%d", n);                    /*  */

    return 0;
}