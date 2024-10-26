/*
*   
*
*   样例输入：
*   样例输出：
*/

#include <stdio.h>

int main(void)
{
    int date;                                       /* 定义表示初几的整型 date */
    printf("今天初几啊？\n");                        /* 输出屏幕提示 */
    scanf("%d", &date);                             /* 从键盘输入日期 */
    switch(date)                                    /* switch 语句判断 */
    {
        case 1: printf("吃饺子\n"); break;          /* date 值为 1 时，输出语句并跳出 switch */
        case 2: printf("吃面条\n"); break;          /* date 值为 2 时，输出语句并跳出 switch */
        case 3: printf("吃合子\n"); break;          /* date 值为 3 时，输出语句并跳出 switch */
        case 4: printf("烙饼炒鸡蛋\n"); break;      /* date 值为 4 时，输出语句并跳出 switch */
        case 5:                                    /* date 值为 5、6 时，输出语句并跳出 switch */
        case 6: printf("捏面团\n"); break;
        case 7:                                    /* date 值为 7、8 时，输出语句并跳出 switch */
        case 8: printf("吃炒年糕\n"); break;
        case 9:                                    /* date 值为 9、10 时，输出语句并跳出 switch */
        case 10: printf("吃白米饭\n"); break;
        case 11:                                   /* date 值为 11、12 时，输出语句并跳出 switch */
        case 12: printf("吃八宝粥\n"); break;
        case 13:                                   /* date 值为 13、14 时，输出语句并跳出 switch */
        case 14: printf("氽汤丸\n"); break;
        case 15: printf("吃元宵\n"); break;        /* date 值为 15 时，输出语句并跳出 switch */
        default: printf("年过完了，撸起袖子加油干！\n"); break;     /* date 值为其他时，输出语句并跳出 switch */
    }

    return 0;
}