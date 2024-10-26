/*
*   有 3 名学生信息放在结构体数组中，要求输出 3 名学生的信息
*
*   样例输出：   学号:202201     姓名:Wangyan    性别:M  年龄:18 成绩:89.0
*               学号:202202     姓名:Lishan     性别:M  年龄:18 成绩:95.0
*               学号:202203     姓名:Zhanghai   性别:F  年龄:18 成绩:78.0
*/
#include <stdio.h>

struct stu
{
    int num;
    char name[20];
    char sex;
    int age;
    float score;
};

int main(void)
{
    /* 结构体数组进行初始化 */
    struct stu s[3] = {
        {202201, "Wangyan", 'M', 18, 89},
        {202202, "Lishan", 'M', 18, 95},
        {202203, "Zhanghai", 'F', 18, 78},
    };

    struct stu *p;          /* 定义指向 struct stu 类型变量的指针 */
    p = s;                  /* 指针变量 p 指向结构体变量 s */
    while (p < s + 3)
    {
        printf("学号:%d\t姓名:%s\t性别:%c\t年龄:%d\t成绩:%0.1f\n",
        p->num, p->name, p->sex, p->age, p->score);	/* 使用指向运算符访问结构体成员 */
        p++;
    }
    return 0;
}
