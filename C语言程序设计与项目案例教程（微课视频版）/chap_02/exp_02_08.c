/*
*   输出格式符的用法
*
*   样例输出：a
*            I Love China!
*/

#include <stdio.h>

int main(void)
{
    char b;
    b = 97;                         /* 将 97 的字符赋值给变量 b */
    printf("%c\n", b);              /* 输出变量 b 后换行 */
    printf("%s", "I Love China!");  /* 输出字符串常量 */
    return 0;
}