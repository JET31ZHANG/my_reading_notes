/*
*   
*
*   样例输入：请输入两个整数: 5 23
*   样例输出：两数中较大的数为: 23
*/

#include <stdio.h>

int main(void)
{
    int a, b, max;                          /*  */
    printf("请输入两个整数: ");              /*  */
    scanf("%d %d", &a, &b);                /*  */
    max = a;                               /*  */
    if (a < b)                             /*  */
    {
        max = b;
    }
    printf("两数中较大的数为: %d\n", max);  /*  */

    return 0;                             /*  */
}