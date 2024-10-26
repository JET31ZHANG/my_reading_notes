/*
*   使用枚举类型，从键盘中输入 1 ~ 7 的整数，并把它转换为星期一到星期日显示
*
*   样例输入：请输入一个整数: 4
*   样例输出：请输入数字4, 对应的是星期四。
*/
#include <stdio.h>

int main(void)
{
    int i;
    /* 声明枚举类型 */
    enum week {
        SUN = 7,
        MON = 1,
        TUE,
        WED,
        THU,
        FRI,
        SAT,
    };

    enum week day;
    printf("请输入一个整数: ");
    scanf("%d", &i);
    /* 将整数 i 转换成枚举类型赋给 day */
    day = (enum week)i;
    switch (day)
    {
        case MON: printf("请输入数字%d, 对应的是星期一。\n", i); break;
        case TUE: printf("请输入数字%d, 对应的是星期二。\n", i); break;
        case WED: printf("请输入数字%d, 对应的是星期三。\n", i); break;
        case THU: printf("请输入数字%d, 对应的是星期四。\n", i); break;
        case FRI: printf("请输入数字%d, 对应的是星期五。\n", i); break;
        case SAT: printf("请输入数字%d, 对应的是星期六。\n", i); break;
        case SUN: printf("请输入数字%d, 对应的是星期日。\n", i); break;
        default: printf("输入数字错误，请重新输入！"); break;
    }
    return 0;
}