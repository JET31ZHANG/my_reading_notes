/*
*   
*
*   样例输入：
*   样例输出：
*/

#include <stdio.h>

int main(void)
{
    int a, b, c, max;
    printf("请输入 3 个整数：\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a > b)
    {
        if(a > c)
        {
            max = a;
        }
        else 
        {
            max = c;
        }
    }
    else 
    {
        if(b > c)
        {
            max = b;
        }
        else 
        {
            max = c;
        }
    }

    printf("max = %d\n", max);

    return 0;
}