/*
*   
*
*   样例输入：
*   样例输出：
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    int i = 0;
    char s[80];             /* 定义数组 s */
    printf("请输入字符串：");
    gets(s);                /* 读取字符串 */
    while(s[i])             /* s[i] = '\0' 时条件才为假 */
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;     /* 把大写字母转化为小写字母 */
        }
        i++;
    }
    printf("变换后的字符串是：");
    puts(s);

    return 0;
}
