/*
*   
*
*   样例输入：
*   样例输出：
*/

#include <stdio.h>

int main(void)
{
    int s;
    printf("请输入信号灯 s 的值：");
    scanf("%d", &s);
    if(s == 1)
    {
        printf("请车辆有序通行！\n");
    }
    else if(s == 0) 
    {
        printf("请及时停车！\n");
    }
    else 
    {
        printf("黄灯亮，请准备停车。\n");
    }
    
    return 0;
}