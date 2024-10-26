/*
*   输入一行字符（不超过 100 个），统计其中大写字母、小写字母、数字、空格及其他字符的个数
*
*   样例输入：请输入一个字符串（不要超过 100 个字符）：
*            Winter Dream - Emblem of the Olympic Winter Games Beijing 2022
*   样例输出：   该字符串中大写字母个数为：7
*               该字符串中小写字母个数为：40
*               该字符串中数字个数为：4
*               该字符串中空格个数为：10
*               该字符串中其他字符个数为：1
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    char *p;
    /* 各计数变量赋初值0 */
    int upper = 0;
    int lower = 0; 
    int number = 0;
    int space = 0;
    int other = 0;

    printf("请输入一个字符串（不要超过 100 个字符）：\n");
    gets(str);                              /* 读入可带空格的一行字符串 */
    p = str;                                /* 指针 p 指向字符串首地址 */
    while(*p != '\0')
    {
        if (*p >= 'A' && *p < 'Z')          /* 若字符为大写字母，则计数增1 */
        {
            upper++;
        }
        else if (*p >= 'a' && *p <= 'z')    /* 若字符为小写字母，则计数增1 */
        {
            lower++;
        }
        else if (*p >= '0' && *p <= '9')    /* 若字符为数字，则计数增1 */
        {
            number++;
        }
        else if (* p== ' ')                 /* 若字符为空格，则计数增1 */
        {
            space++;
        }
        else                                /* 若字符为其他字符，则计数增1 */
        {
            other++;
        }
        p++;                                /* 指针 p 后移，指向下一个字符 */
    }

    printf("该字符串中大写字母个数为：%d\n", upper);
    printf("该字符串中小写字母个数为：%d\n", lower);
    printf("该字符串中数字个数为：%d\n", number);
    printf("该字符串中空格个数为：%d\n", space);
    printf("该字符串中其他字符个数为：%d\n", other);

    return 0;
}
