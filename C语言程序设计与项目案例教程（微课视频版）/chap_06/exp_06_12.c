/*
*   编写程序，将字符串 "I Love China!" 中的字符存放在一堆数组中并输出
*
*   样例输入：
*   样例输出：
*/
#include <stdio.h>

int main(void)
{
    int i;
    char a[] = {'I',' ','L','o','v','e', ' ','C','H','I','N','A','!'};  /* 初始化字符数组 */

    for(i = 0; i < 13; i++)                                             /* 输出字符数组 a 中每个元素的值 */
    {
        printf("%c", a[i]);                                             /* 输出字符用 %c */
    }
    printf("\n");

    return 0;
}
