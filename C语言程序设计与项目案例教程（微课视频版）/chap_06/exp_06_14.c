/*
*   
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
        scanf("%c", &a[i]);         /* 用格式化 scanf() 函数对字符数组进行赋值 */
    }

    for(i = 0; i < 18; i++)
    {
        printf("%c", a[i]);         /* 用格式化 printf() 函数输出字符数组中的内容 */
    }
    printf("\n");

    return 0;
}
