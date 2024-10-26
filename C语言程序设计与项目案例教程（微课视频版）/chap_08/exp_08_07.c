/*
*   有一组学生的信息包括学号、姓名和成绩，成绩又包括平时成绩、期中成绩、期末成绩和总成绩。
*   编程实现按照“总成绩 = 0.3 * 平时成绩 + 0.1 * 期中成绩 + 0.6 * 期末成绩” 的公式计算总成绩，并输出所有学生的全部信息。
*
*   样例输出：   学号:202201     姓名:Wangyan    平时成绩:85.0   期中成绩:90.0   期末成绩:84.0   总成绩:84.9
*               学号:202202     姓名:Lishan     平时成绩:86.0   期中成绩:80.0   期末成绩:78.0   总成绩:80.6
*               学号:202203     姓名:Zhanghai   平时成绩:75.0   期中成绩:72.0   期末成绩:70.0   总成绩:71.7
*/
#include <stdio.h>

struct score                        /* 定义结构体数据类型 struct score */
{
    float regular;
    float midterm;
    float final;
    float total;
};

struct student                      /* 定义结构体数据类型 struct student */
{
    int num;
    char name[20];
    struct score grade;             /* 用数据类型 struct score 定义变量 grade */
};

int cal (struct student stu[])      /* 定义 cal() 函数计算总成绩 */
{
    struct student *q;              /* 定义指向 struct student 类型变量的指针 */
    for(q = stu; q < stu + 3; q++)  /* 循环计算每个学生的总成绩 */
    {
        q -> grade.total = 0.3 * q -> grade.regular + 0.1 * q -> grade.midterm + 0.6 * q -> grade.final;
    }
    return 0;
}

int main(void)
{
    /* 结构体数组进行初始化 */
    struct student s[3] = {
        {202201,"Wangyan",85,90,84},
        {202202,"Lishan",86,80,78},
        {202203,"Zhanghai",75,72,70},
    };

    /* 定义指向指针变量并指向 s 的首地址 */
    struct student *p = s;
    cal(p);
    while(p < s + 3)
    {
        /* 输出学生的信息 */
        printf("学号:%d\t姓名:%s\t平时成绩:%0.1f\t期中成绩:%0.1f\t期末成绩:%0.1f\t总成绩:%0.1f\n",p->num,p->name,
	        p -> grade.regular, p -> grade.midterm, p -> grade.final, p -> grade.total);
        p++;         /* 使 p 指向结构体数组的下一个元素 */
    }
    return 0;
}
