/*
*   结构体与共用体应用实战
*
*   实战背景：“一带一路” (The Belt and Road, B&R)
*   
*   实战目的：
*           1）掌握结构体数组的定义和使用
*           2）掌握结构体指针的定义和使用
*
*   实战内容：编程实现输入 “一带一路” 中线城市编号、城市名称、城市面积和城市简介，并在屏幕上显示该信息
*
*   样例输入：
*
*   样例输出：
*/
#include <stdio.h>

struct introduction
{
    int num;
    float area;
    char name[10];
    char city[200];
    struct introduction *next;
};

int main(void)
{

    return 0;
}
