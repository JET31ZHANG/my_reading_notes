/*
*   
*
*   样例输入：
*   样例输出：
*/

#include <stdio.h>

int main(void)
{
    int year;                                       //
    printf("请输入年份：");                          //
    scanf("%d", &year);                             //
    printf("公元 %d 年是：", year);
    switch((year + 9) % 12)                         //
    {
        case 0: printf("猪年\n"); break;            //
        case 1: printf("鼠年\n"); break;            //
        case 2: printf("牛年\n"); break;            //
        case 3: printf("虎年\n"); break;            //
        case 4: printf("兔年\n"); break;            //
        case 5: printf("龙年\n"); break;            //
        case 6: printf("蛇年\n"); break;            //
        case 7: printf("马年\n"); break;            //
        case 8: printf("羊年\n"); break;            //
        case 9: printf("猴年\n"); break;            //
        case 10: printf("鸡年\n"); break;           //
        case 11: printf("狗年\n"); break;           //
        default: printf("输入错误！\n"); break;     //
    }
    return 0;
}