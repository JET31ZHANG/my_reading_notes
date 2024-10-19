/*
*   getchar() 函数的用法
*
*   样例输入：a
*   样例输出：a对应的大写字母是:A
*/

#include <stdio.h>

int main(void)
{
    char a;
    printf("请输入一个小写字母: ");
    a = getchar();                          /* 接收到的字符存储在变量 a 中 */
    putchar(a);                             /* 输出变量 a 的内容 */
    printf("对应的大写字母是:%c", a - 32);   /* 输出 a - 32 的值 */

    return 0;
}