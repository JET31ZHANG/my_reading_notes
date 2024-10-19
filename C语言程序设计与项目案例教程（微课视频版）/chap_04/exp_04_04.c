/*
*   
*   样例输入：1 81 -1
*   样例输出：输入整数的个数是 2
*/

#include <stdio.h>

int main(void)
{
    int i = 0;
    int num;
    do
    {
        scanf("%d", &num);
        i++;
    } while (num != -1);            /*  */
    
    printf("输入整数的个数是 %d\n", i - 1);

    return 0;
}