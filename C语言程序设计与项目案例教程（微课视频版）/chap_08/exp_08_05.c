/*
*   通过指向结构体变量的指针变量输出结构体变量中成员的信息
*
*   样例输出：   学号：202207 姓名：wangli 性别：M 年龄：18 成绩：85.0
*               学号：202207 姓名：wangli 性别：M 年龄：18 成绩：85.0
*/
#include <stdio.h>
#include <string.h>

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
    struct stu s1;              /* 定义 struct stu 类型的变量 */
    struct stu *p;              /* 定义指向 struct stu 类型变量的指针 */
    p = &s1;                    /* 指针变量 p 指向结构体变量 s1 */
    s1.num = 202207;            /* 给结构体变量 s1 中的 num 成员赋值 */
    strcpy(s1.name, "wangli");  /* 给结构体变量 s1 中的 name 成员赋值 */
    s1.sex = 'M';               /* 给结构体变量 s1 中的 sex 成员赋值 */
    s1.age = 18;                /* 给结构体变量 s1 中的 age 成员赋值 */
    s1.score = 85;              /* 给结构体变量 s1 中的 score 成员赋值 */
    /* 使用指向运算符访问结构体成员 */
    printf("学号：%d 姓名：%s 性别：%c 年龄：%d 成绩：%0.1f\n", 
            p -> num, p -> name, p -> sex, p -> age, p -> score);
    /* 使用成员运算符访问结构体成员 */
    printf("学号：%d 姓名：%s 性别：%c 年龄：%d 成绩：%0.1f\n",
         (*p).num, (*p).name, (*p).sex, (*p).age, (*p).score);

    return 0;
}