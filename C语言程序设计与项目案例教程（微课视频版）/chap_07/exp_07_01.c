/*
*   验证运算符 * 和 & 的作用
*
*   样例输出：52, 10
*            52, 10
*            60ff24, 60ff20
*            60ff24, 60ff20
*/
#include <stdio.h>

int main(void)
{
    int i = 52;
    int j = 10;

    int *pi, *pj;                   /* 指针变量定义 */
    pi = &i;                        /* 使指针变量 pi 指向 i */
    pj = &j;                        /* 使指针变量 pj 指向 j */

    printf("%d, %d\n", i, j);       /* 直接访问变量 i, j */
    printf("%d, %d\n", *pi, *pj);   /* 间接访问变量 i, j */
    printf("%x, %x\n", &i, &j);     /* %x 是十六进制的输出格式 */
    printf("%x, %x\n", pi, pj);

    return 0;
}