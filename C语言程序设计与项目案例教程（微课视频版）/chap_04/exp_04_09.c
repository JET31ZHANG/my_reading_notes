/*
*   
* 
*   样例输出：
*/

#include <stdio.h>

int main(void)
{
    int i = 0;
    int password = 0;
    int number = 0;
    int price = 58;
    while(password != 1234) 
    {
        if(i > 3)
        {
            return 0;
        }
        i++;
        printf("请输入密码：");
        scanf("%d", &password);
    }
    i = 0;

    while(number != price)
    {
        do {
            printf("请输入一个整数(1~100):");
            scanf("%d", &number);
            printf("您输入的数是 %d.", number);
        } while(!(number >= 1 && number <= 100));

        if(number >= 90)
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
            if(number == price)
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
    }
    getchar();
    return 0;
}