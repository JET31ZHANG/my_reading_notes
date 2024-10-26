/*
*   输入一组字符串，以输入空串结束输入，找出最大的字符串
*
*   样例输入：
*   样例输出：
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char smax[80];      /* 定义数组 smax */
    char s[80];         /* 定义数组 s */
    smax[0] = '0';      /* 设置数组 smax 为空，也可设置 smax[0] = '0' */

    do
    {
        printf("请输入字符串：");
        gets(s);        /* 读取字符串 */
        if(strcmp(s, smax) > 0)
        {
            strcpy(smax, s);    /* s 比 smax 大的话，把数组 s 赋值给数组 smax */
        }
    } while (s[0] != '0');
    
    printf("最大的字符串是：");
    puts(smax);

    return 0;
}
