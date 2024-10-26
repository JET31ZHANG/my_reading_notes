/*
*   比较两个字符串的大小，并输出结果
*
*   样例输入：
*   样例输出：
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    int k;
    char s1[20];                /* 定义变量 k 存放 strcmp() 函数返回值 */
    char s2[15];                /* 定义字符串 s1、s2 并为 s2 赋初值 */
    
    printf("请输入第一个字符串：");
    gets(s1);

    printf("请输入第二个字符串：");
    gets(s2);

    k = strcmp(s1, s2);
    if(k == 0)                  /* 返回值为 0，字符串 s1 = 字符串 s2 */
    {
        printf("s1 == s2\n");
    }

    if(k > 0)                   /* 返回值 > 0，字符串 s1 > 字符串 s2 */
    {
        printf("s1 > s2\n");
    }

    if(k < 0)                   /* 返回值 < 0，字符串 s1 < 字符串 s2 */
    {
        printf("s1 < s2\n");
    }
    return 0;
}
