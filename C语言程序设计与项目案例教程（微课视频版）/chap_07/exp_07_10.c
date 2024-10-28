/*
*   字符指针的应用
*
*   样例输出：I Love China!
*/
#include <stdio.h>

int main(void)
{
    /*
    *   其含义相当于：
    *               char a[] = "I Love China!"
    *               * s;
    *               s = a;
    *   数组a 是由 C 语言环境隐含给出的
    */
    char *s = "I Love China!";
    printf("%s\n", s);

    return 0;
}
