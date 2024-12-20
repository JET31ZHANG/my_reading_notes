/*
*   韩信点兵与中国剩余原理
* 
*   样例输出：韩信统御的士兵最少有 45002 名.
*/

#include <stdio.h>

int main(void)
{
    int i;
    long x = 1;
    for(i = 1; ; i++)           /* 省略表达式 2 循环条件判断 */
    {
        if(x % 3 == 1 && 
        x % 5 == 2 && 
        x % 7 == 4 && 
        x % 13 == 6 && 
        x % 17 == 2 && 
        x % 19 == 10)
        {
            break;
        }
        else 
        {
            x++;
        }
    }
    printf("韩信统御的士兵最少有 %ld 名.\n", x);

    return 0;
}