/*
*   用字符指针指向一个字符串
*
*   样例输出：I Love China!
*            I Love China!
*/
#include <stdio.h>

int main(void)
{
    char string[] = "I Love China!";
    char *p;
    p = string;
    printf("%s\n", string);
    printf("%s\n", p);

    return 0;
}