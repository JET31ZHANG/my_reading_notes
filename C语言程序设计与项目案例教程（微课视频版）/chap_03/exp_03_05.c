/*
*   
*
*   样例输入：请输入学生成绩: 95
*   样例输出：优秀
*/

#include <stdio.h>

int main(void)
{
    int score;
    printf("请输入学生成绩:");
    scanf("%d", &score);

    if(score > 100 || score < 0)
    {
        printf("您输入的成绩不正确！\n");
    }
    else if (score >= 90)
    {
        printf("优秀\n");
    }
    else if (score >= 80)
    {
        printf("良好\n");
    }
    else if (score >= 70)
    {
        printf("中等\n");
    }
    else if(score >= 60)
    {
        printf("及格\n");
    }
    else 
    {
        printf("不及格\n");
    }

    return 0;
}