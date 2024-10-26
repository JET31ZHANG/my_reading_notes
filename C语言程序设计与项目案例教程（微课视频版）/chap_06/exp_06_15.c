/*
*   使用字符输入输出函数，编程实现从键盘输入一个字符串，并将该字符串用数组输出
*
*   样例输入：
*   样例输出：
*/
#include <stdio.h>

int main(void)
{
    char a[18];
    int i;
    for(i = 0; i < 18; i++)
    {
        a[i] = getchar();           /* 用 getchar() 函数对字符数组进行赋值 */
    }

    for(i = 0; i < 18; i++)
    {
		putchar(a[i]);			    /* 用 putchar() 函数输出字符数组中的内容 */
    }
    printf("\n");

    return 0;
}