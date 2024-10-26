/*
*   
*
*   样例输入：
*   样例输出：
*/

#include <stdio.h>

int main(void)
{
    int year;                                       // 定义表示初几的整型date
    printf("请输入年份：");                          // 输出屏幕提示
    scanf("%d", &year);                             // 从键盘输入日期
    printf("公元 %d 年是：", year);
    switch((year + 9) % 12)                         // switch 语句判断
    {
        case 0: printf("猪年\n"); break;            // 值为 0 时，输出语句并跳出 switch
        case 1: printf("鼠年\n"); break;            // 值为 1 时，输出语句并跳出 switch
        case 2: printf("牛年\n"); break;            // 值为 2 时，输出语句并跳出 switch
        case 3: printf("虎年\n"); break;            // 值为 3 时，输出语句并跳出 switch
        case 4: printf("兔年\n"); break;            // 值为 4 时，输出语句并跳出 switch
        case 5: printf("龙年\n"); break;            // 值为 5 时，输出语句并跳出 switch
        case 6: printf("蛇年\n"); break;            // 值为 6 时，输出语句并跳出 switch
        case 7: printf("马年\n"); break;            // 值为 7 时，输出语句并跳出 switch
        case 8: printf("羊年\n"); break;            // 值为 8 时，输出语句并跳出 switch
        case 9: printf("猴年\n"); break;            // 值为 9 时，输出语句并跳出 switch
        case 10: printf("鸡年\n"); break;           // 值为 10 时，输出语句并跳出 switch
        case 11: printf("狗年\n"); break;           // 值为 11 时，输出语句并跳出 switch
        default: printf("输入错误！\n"); break;     // 其他数值，输出语句并跳出 switch
    }
    return 0;
}