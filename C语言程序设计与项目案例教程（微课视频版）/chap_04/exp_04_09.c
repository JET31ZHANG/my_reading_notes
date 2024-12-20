/*
*   编写程序首先输入正确的密码进入游戏， 如果密码输入 3 次错误则退出程序。
*   密码通过后，每次输入一个数字，系统会给出相应的提示，
*   如“数值太小了”、“数值太大了”、“对不起，只大了一点！”、“对不起，只小了一点！” 等信息
*   提示用户输入下一个数字范围，当输入的数值正确时，结束程序。
*
*   样例：
*       ======这是一个猜数字游戏！======
*       请输入密码：1234
*       请输入一个整数(1~100):30
*       您输入的数是 30.数值太小了，按任意键重试！
*       请输入一个整数(1~100):40
*       您输入的数是 40.数值小了些，按任意键重试！
*       请输入一个整数(1~100):50
*       您输入的数是 50.数值小了些，按任意键重试！
*       请输入一个整数(1~100):70
*       您输入的数是 70.数值大了些，按任意键重试！
*       请输入一个整数(1~100):60
*       您输入的数是 60.对不起，只大了一点！按任意键重试！
*       请输入一个整数(1~100):55
*       您输入的数是 55.对不起，只小了一点！按任意键重试！
*       请输入一个整数(1~100):56
*       您输入的数是 56.对不起，只小了一点！按任意键重试！
*       请输入一个整数(1~100):57
*       您输入的数是 57.对不起，只小了一点！按任意键重试！
*       请输入一个整数(1~100):58
*       您输入的数是 58.太好了！您猜对了！再见！
*/

#include <stdio.h>

int main(void)
{
    int i = 0;
    int password = 0;
    int number = 0;
    int price = 58;             /* price 为给定的数字 */
    printf("\n======这是一个猜数字游戏！======\n");
    while (password != 1234)    /* 判断密码是否正确 */
    {
        if (i > 3)              /* 输入次数超过 3 次，程序退出 */
        {
            return 0;
        }
        i++;
        printf("请输入密码：");
        scanf("%d", &password);
    }
    i = 0;

    while (number != price)     /* 当所猜数字 number 不等于给定数字 price 时 */
    {
        do {
            printf("请输入一个整数(1~100):");
            scanf("%d", &number);
            printf("您输入的数是 %d.", number);
        } while (!(number >= 1 && number <= 100));  /* 数字在 1 到 100 之间正确范围时 */

        if (number >= 90)                           /* 输入数值太大 */
        {
            printf("数值太大了，按任意键重试！\n");
        }
        else if (number >= 70 && number < 90)       /* 输入数值大一些 */
        {
            printf("数值大了些，按任意键重试！\n");
        }
        else if (number >= 1 && number <= 30)       /* 输入数值太小 */
        {
            printf("数值太小了，按任意键重试！\n");
        }
        else if (number > 30 && number <= 50)       /* 输入数值小一些 */
        {
            printf("数值小了些，按任意键重试！\n");
        }
        else
        {
            if (number == price)                    /*输入数值等于给定数字 */
            {
                printf("太好了！您猜对了！再见！\n");
            }
            else if (number < price)                /* 输入数值只小一点了 */
            {
                printf("对不起，只小了一点！按任意键重试！\n");
            }
            else if (number > price)                /* 输入数值只大一点了 */
            {
                printf("对不起，只大了一点！按任意键重试！\n");
            }
        }
        getchar();                                  /* 读取下一个字符 */
    }
    return 0;
}