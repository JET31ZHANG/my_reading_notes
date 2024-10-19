/*
*   
*
*   样例输入：
*   样例输出：
*/

#include <stdio.h>

int main(void)
{
    int s;                              /*  */
    printf("请输入信号灯的值：");        /*  */
    scanf("%d", &s);                    /*  */

    if (s == 1)                         /*  */
    {
        printf("请车辆有序通行！\n");    /*  */
    }
    else                               /*  */
    {
        printf("请及时停车！\n");       /*  */
    }

    return 0;                          /*  */
}