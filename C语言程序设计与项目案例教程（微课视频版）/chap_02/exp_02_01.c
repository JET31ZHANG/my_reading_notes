/*
*   C 语言简单例子
*/
#include <stdio.h>                      /* 编译预处理指令 */

int main(void)                          /* main() 函数的函数头 */
{                                       /* 函数体开始标记 */
    int a, b, sum;                      /* 定义 3 个整型变量 */

    printf("Enter two numbers: ");      /* 提示输入 2 个数 */
    scanf("%d%d", &a, &b);              /* 程序运行时，分别输入 a, b 整数值 */
    sum = a + b + 6;                    /* 计算 a + b + 6 的值，将结果赋值给 sum */
    printf("This sum is %d\n", sum);    /* 输出结果 sum 的值 */
    return 0;                           /* 程序返回值 0 */
}                                       /* 函数体的结束标记 */