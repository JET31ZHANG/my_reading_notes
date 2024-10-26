/*
*   使用字符串输入输出函数，将整个字符串一次输入输出
*
*   样例输入：
*   样例输出：
*/
#include <stdio.h>

int main(void)
{
    char a[20];
    gets(a);            /* 用 gets() 函数对字符串数组进行赋值 */
    puts(a);            /* 用 puts() 函数输出字符数组中的内容 */

    return 0;
}
