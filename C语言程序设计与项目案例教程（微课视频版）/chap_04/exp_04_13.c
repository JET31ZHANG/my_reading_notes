/*
*   
*   样例输入：请输入n的值: 10
*   样例输出：s = 55
*/

#include <stdio.h>

int main(void)
{
    int i = 1;
    int n = 0;
    int sum = 0;

    printf("请输入n的值: ");
	scanf("%d",&n);

    loop: if(i <= n)
    {
        sum += i;
        i++;
        goto loop;
    }
    printf("s = %d\n", sum);

    return 0;
}