/*
*   使用格式化输入输出函数，将整个字符串一次输入输出
*
*   样例输入：
*   样例输出：
*/
#include <stdio.h>

int main(void)
{
    char a[6];
    scanf("%s", a);         /* 用 scanf() 函数对字符串数组进行赋值 */
    printf("%s", a);        /* 用 printf() 函数输出字符数组中的内容 */
    
    return 0;
}
