/*
*   多分支选择结构程序设计应用实战
*
*   实战背景：华山景区向全国游客实行门票优惠政策：
*           对身高 120cm 及以下儿童实行门票免费；
*           对身高 120 ~ 150cm 的儿童实行门票半价优惠。
*
*   实战目的：
*           1）变量的定义和使用
*           2）多分支 if-else if-else 语句的应用
*   
*   实战内容：编写一个C语言程序，输入不同身高，计算输出需要支付的门票价格
*
*   样例输入：请输入身高(cm): 110
*   样例输出：您的身高是 110 cm, 您需要支付 0 元
*
*   样例输入：请输入身高(cm): 135
*   样例输出：您的身高是 135 cm, 您需要支付 10 元
*
*   样例输入：请输入身高(cm): 170
*   样例输出：您的身高是 170 cm, 您需要支付 20 元
*/

#include <stdio.h>

int main(void)
{
    int height, price;
    printf("请输入身高(cm): ");
    scanf("%d", &height);

    if(height >= 150)
    {
        price = 20;
    }
    else if(height >= 120 && height <= 150)
    {
        price = 10;
    }
    else 
    {
        price = 0;
    }
    printf("您的身高是 %d cm, 您需要支付 %d 元\n", height, price);

    return 0;
}