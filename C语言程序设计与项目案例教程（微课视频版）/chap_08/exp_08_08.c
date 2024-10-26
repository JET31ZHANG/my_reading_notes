/*
*   设计一个教师与学生通用的结构体类型，教师信息有姓名、年龄、职业、教研室 4 项；
*   学生信息有姓名、年龄、职业、班级 4 项。输入一个教师或学生信息，然后显示处理。
*
*   样例输入：  请输入 1 个人的信息：
*               请输入姓名、年龄、职业(“学生” 或 “教师”)和部门(班级号或教研室名):
*               lester 18 学生 22022
*               请输入 2 个人的信息：
*               请输入姓名、年龄、职业(“学生” 或 “教师”)和部门(班级号或教研室名):
*               mike 33 教师 IT
*
*   样例输出：  这两个人的相关信息为：
*               姓 名   年龄    职业    部门
*               lester   18     学生    班 级：22022
*               mike     33     教师    教研室：IT
*/

#include <stdio.h>
#include <string.h>

union depart                /* 共用体类型部门 */
{
    char Class[20];         /* 学生的班级 */
    char office[20];        /* 教师的教研室 */
};

struct person               /* 结构体类型人员 */
{
    char name[10];          /* 姓名 */
    int age;                /* 年龄 */
    char job[5];            /* 职业 */
    union depart depa;      /* 部门，可选班级或教研室 */ 
};

int main(void)
{
    int i;
    struct person per[2];
    for(i = 0; i < 2; i++)
    {
        printf("请输入 %d 个人的信息：\n", i + 1);
        printf("请输入姓名、年龄、职业(“学生” 或 “教师”)和部门(班级号或教研室名):\n");
        scanf("%s%d%s", &per[i].name, &per[i].age, &per[i].job);
        if(strcmp(per[i].job, "学生") == 0)     /* 当输入的职业是“学生”时 */ 
        {
            scanf("%s", &per[i].depa.Class);
        }
        else 
        {
            scanf("%s", &per[i].depa.office);
        }
    }

    printf("\n 这两个人的相关信息为：\n");
    printf("姓 名\t年龄\t职业\t部门\n");

    for(i = 0; i < 2; i++)
    {
        if(strcmp(per[i].job, "学生") == 0)     /* 当该数组元素的职业是“学生”时 */
        {
            printf("%s\t%3d\t%s\t班 级：%s\n", per[i].name, per[i].age, per[i].job, per[i].depa.Class);
        }
        else 
        {
            printf("%s\t%3d\t%s\t教研室：%s\n", per[i].name, per[i].age, per[i].job, per[i].depa.office);
        }
    }
    return 0;
}
