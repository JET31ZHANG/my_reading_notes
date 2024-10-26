/*
*   利用结构体数组计算 3 个学生的平均成绩
*
*   样例输出： 平均分： 87.3
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
    int i;
    float sum = 0.0;
    /* 对结构体数组初始化 */
    struct stu s[30] = {
        {202201, "Wangyan", 'M', 18, 89},
        {202202, "Lishan", "M", 18, 95},
        {202203, "Zhanghai", "F", 18, 78},
    };

    for(i = 0; i < 3; i++)
    {
        sum += s[i].score;
    }
    printf("平均分：%5.1f\n", sum / 3.0);

    return 0;
}