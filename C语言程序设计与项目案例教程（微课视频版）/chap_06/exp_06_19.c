/*
*   
*
*   样例输出：I love my country -- China!
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    int k;                              /* 变量 k 存放字符串的长度 */
    char s1[30] = "I love my country ";  /* 初始化字符串 s1 */
    char s2[] = "-- China!";             /* 初始化字符串 s2 */

    strcat(s1, s2);                     /* 调用 strcat() 函数 */
    puts(s1);

    return 0;
}
