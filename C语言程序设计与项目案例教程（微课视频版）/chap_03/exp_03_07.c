/*
*   
*
*   样例输入：
*   样例输出：
*/

#include <stdio.h>

int main(void)
{
    int date;                                       /*  */
    printf("今天初几啊？\n");                        /*  */
    scanf("%d", &date);                             /*  */
    switch(date)                                    /*  */
    {
        case 1: printf("吃饺子\n"); break;          /*  */
        case 2: printf("吃面条\n"); break;          /*  */
        case 3: printf("吃合子\n"); break;          /*  */
        case 4: printf("烙饼炒鸡蛋\n"); break;      /*  */
        case 5:                                    /*  */
        case 6: printf("捏面团\n"); break;
        case 7:                                    /*  */
        case 8: printf("吃炒年糕\n"); break;
        case 9:                                    /*  */
        case 10: printf("吃白米饭\n"); break;
        case 11:                                   /*  */
        case 12: printf("吃八宝粥\n"); break;
        case 13:                                   /*  */
        case 14: printf("氽汤丸\n"); break;
        case 15: printf("吃元宵\n"); break;        /*  */
        default: printf("年过完了，撸起袖子加油干！\n"); break;     /*  */
    }

    return 0;
}