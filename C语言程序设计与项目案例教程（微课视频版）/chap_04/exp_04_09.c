/*
*   
* 
*   样例：
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
    int price = 58;
    while (password != 1234)
    {
        if (i > 3)
        {
            return 0;
        }
        i++;
        printf("请输入密码：");
        scanf("%d", &password);
    }
    i = 0;

    while (number != price)
    {
        do {
            printf("请输入一个整数(1~100):");
            scanf("%d", &number);
            printf("您输入的数是 %d.", number);
        } while (!(number >= 1 && number <= 100));

        if (number >= 90)
        {
            printf("数值太大了，按任意键重试！\n");
        }
        else if (number >= 70 && number < 90)
        {
            printf("数值大了些，按任意键重试！\n");
        }
        else if (number >= 1 && number <= 30)
        {
            printf("数值太小了，按任意键重试！\n");
        }
        else if (number > 30 && number <= 50)
        {
            printf("数值小了些，按任意键重试！\n");
        }
        else
        {
            if (number == price)
            {
                printf("太好了！您猜对了！再见！\n");
            }
            else if (number < price)
            {
                printf("对不起，只小了一点！按任意键重试！\n");
            }
            else if (number > price)
            {
                printf("对不起，只大了一点！按任意键重试！\n");
            }
        }
        getchar();
    }
    return 0;
}