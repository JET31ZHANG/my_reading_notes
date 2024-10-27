/*
*   循环结构程序设计应用实战
*
*   实战背景：“光盘行动”
*   
*   实战目的：
*           1）掌握 for 语句实现循环结构程序设计的方法
*           2）理解多分支选择结构和 for 语句的执行过程
*
*   实战内容：“光盘行动餐饮系统”
*
*   样例输出：
            欢迎光临<<节约光荣, 浪费可耻>>餐馆, 本餐馆实行'光盘行动', 请大家遵守以下规则：
            1. 根据人数进行点餐, 每人限点餐 1 份。
            2. 进餐时间为人数 * 15分钟。
            3. 根据剩余食品克数进行收费：
            ****如果总剩余量小于或等于50g, 则总餐费打七折****
            ****如果总剩余量小于或等于100g, 则总餐费打八折****
            ****如果总剩余量小于或等于150g, 则总餐费打九折****
            ****如果总剩余量大于150g, 则总餐费为应付餐费的1.5倍。
            光盘行动, 从我做起!
            请输入进餐人数: 3
            请点餐 3 份, 注意荤素搭配!
            请输入您的第 1 份餐品: 糖醋里脊
            请服务员报价: 34
            请输入您的第 2 份餐品: 古老肉
            请服务员报价: 40
            请输入您的第 3 份餐品: 松鼠鱼
            请服务员报价: 120
            您一共消费 194.0 元
            现在是您的用餐时间, 时间为 45 分钟。
            ====== 进餐中 ======
            现在请AI机器人扫描您盘中剩余食物:
            请AI机器人报剩余食物克数: 80
            您最终需要支付 155.2 元
            感谢您为光盘行动做的贡献, 欢迎下次光临!
*/

#include <stdio.h>

int main(void)
{
    int num = 0;
    int i = 0;
    char food[50];
    float price = 0;
    float total = 0;
    int time = 0;
    int residus = 0;
    float pay = 0;

    printf("欢迎光临<<节约光荣, 浪费可耻>>餐馆, 本餐馆实行'光盘行动', 请大家遵守以下规则：\n");
    printf("1. 根据人数进行点餐, 每人限点餐 1 份。\n");
    printf("2. 进餐时间为人数 * 15分钟。\n");
    printf("3. 根据剩余食品克数进行收费：\n");
    printf("****如果总剩余量小于或等于50g, 则总餐费打七折****\n");
    printf("****如果总剩余量小于或等于100g, 则总餐费打八折****\n");
    printf("****如果总剩余量小于或等于150g, 则总餐费打九折****\n");
    printf("****如果总剩余量大于150g, 则总餐费为应付餐费的1.5倍。\n");
    printf("光盘行动, 从我做起!\n");

    printf("请输入进餐人数: ");
    scanf("%d", &num);
    printf("请点餐 %d 份, 注意荤素搭配!\n", num);
    for(i = 1; i <= num; i++)
    {
        printf("请输入您的第 %d 份餐品", i);
        scanf("%s", &food);
        printf("请服务员报价: \n");
        scanf("%f", &price);
        total += price;
    }
    printf("您一共消费 %.1f 元\n", total);

    time = num * 15;
    printf("现在是您的用餐时间, 时间为 %d 分钟。\n", time);
    printf("====== 进餐中 ======\n");
    printf("现在请AI机器人扫描您盘中剩余食物: \n");
    printf("请AI机器人报剩余食物克数: ");
    scanf("%d", &residus);
    
    if(residus >= 0 && residus <= 50)
        pay = total * 0.7;
    else if(residus > 50 && residus <= 100)
        pay = total * 0.8;
    else if(residus > 100 && residus <= 150)
        pay = total * 0.9;
    else if(residus > 150)
        pay = total * 1.5;
    printf("您最终需要支付 %.1f 元\n", pay);
    printf("感谢您为光盘行动做的贡献, 欢迎下次光临!");

    return 0;
}