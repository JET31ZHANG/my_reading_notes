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
    char s1[20];
    char s2[] = "Chinese power!";
    strcpy(s1, s2);     /*调用strcpy()函数*/
    puts(s1);

    return 0;
}
