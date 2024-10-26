/*
*   
*   样例输入：I love China!
*   样例输出：13
*/

#include <stdio.h>

int main(void)
{
    int n = 0;
    printf("input a string: \n");       /* 提示信息 */
    while(getchar() != '\n')            /* 循环条件是当输入的字符不是回车符时执行循环体语句 */
    {
        n++;
    }
    printf("%d", n);                    /* 当循环结束后，输出变量 n 的值 */

    return 0;
}