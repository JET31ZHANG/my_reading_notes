/*
*   输出函数的用法
*
*   样例输入：96 91 93
*   样例输出：92.90
*/

#include <stdio.h>

int main(void)
{
    float a, b, c;
    double score;
    printf("请按顺序输入你的德育、智育和能力素质成绩：\n");
    scanf("%f%f%f", &a, &b, &c);                            /* 输入变量 a, b, c 的值 */
    score = 0.3 * a + 0.5 * b + 0.2 * c;
    printf("你的综合素质测评成绩为：%5.2f\n", score);

    return 0;
}