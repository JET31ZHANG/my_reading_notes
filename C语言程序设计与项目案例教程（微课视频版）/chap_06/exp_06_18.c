/*
*   编写程序，求字符串长度
*
*   样例输出：字符串长度为：18
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    int k;                              /* 变量 k 存放字符串的长度 */
    char s[] = "i love my country!";    /* 初始化字符串 s */
    k = strlen(s);                      /* 调用 strlen() 函数求字符串 s 的长度 */
    printf("字符串长度为：%d\n", k);

    return 0;
}
