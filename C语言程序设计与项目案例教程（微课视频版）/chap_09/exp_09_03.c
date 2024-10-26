/*
*   
*
*   样例输入：
*   样例输出：
*/

#include <stdio.h>
#include <stdlib.h>

struct date         /* 定义结构体类型 date */
{
    int day;        /* 定义成员 day */
    int month;      /* 定义成员 month */
    int year;       /* 定义成员 year */
};

int main(void)
{
    FILE *fp;
    struct date date1[3], date2[3];
    int i;

    if((fp = fopen("d:\\9-3.txt", "w+")) == NULL)
    {
        printf("\nerror:fail in opening myfile!");
        exit(0);            /* 退出程序 */
    }

    printf("请输入3个日期, 年、月、日以空格隔开: \n");
    for(i = 0; i < 3; i++)
    {
        scanf("%d%d%d", &date1[i].year, &date1[i].month, &date1[i].day);    /* 分别输入结构体变量 date1 的值 */
    }
    
    fwrite(date1, sizeof(struct date), 3, fp);                              /* 将 date1 的值写入文件中 */
    rewind(fp);                                                             /* 将文件内部指针移至文件头 */
    fread(date2, sizeof(struct date), 3, fp);                               /* 将文件中的 3 个日期读出赋给 date2 */
    
    printf("9-3.txt 文件中的数据为：\n");
    for(i = 0; i < 3; i++)
    {
        printf("%d %d %d\n", date2[i].year, date2[i].month, date2[i].day);
    }
    fclose(fp);             /* 关闭文件 */

    return 0;
}