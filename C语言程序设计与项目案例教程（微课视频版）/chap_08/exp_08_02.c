/*
*   结构体变量成员的赋值、输入和输出
*
*   样例输入：   input month and day
*               7 6
*   样例输出：   日期为：2022.7.6
*/
#include <stdio.h>
int main(void)
{
    struct date {
        int year;
        int month;
        int day;
    } date1, date2;

    date1.year = 2022;
    printf("input month and day\n");
    scanf("%d%d", &date1.month, &date1.day);
    date2 = date1;  /* 同类型的结构体变量可以整体赋值 */
    printf("日期为：%d.%d.%d\n", 
        date2.year, date2.month, date2.day);

    return 0;
}
