/*
*   结构体变量的初始化
*
*   样例输出： 日期为：2022.7.6
*/
#include <stdio.h>
struct date 
{
    int year;
    int month;
    int day;
} date = {2022, 7, 6}; /* 对变量 date 的各个成员进行赋值 */

int main(void)
{
    printf("日期为：%d.%d.%d\n", date.year, date.month, date.day);

    return 0;
}