/*
*   指针综合应用实战
*
*   实战背景：
*   
*   实战目的：
*           1）能够编写形参为指针的函数
*           2）能够分析形参为指针，实参为一维数组的函数中指针与数据之间的指向关系
*
*   实战内容： 编写程序，对班级同学 “思想品德” 课程成绩进行查找，
*             找到最高分的同学，输出其学号和分数
*
*   样例输入：请输入学生人数：3
*            请输入学生学号和《思想品德》课程成绩：
*            202201 94
*            202202 89
*            202203 97
*
*   样例输出：《思想品德》课程最高分是：97
*            《思想品德》课程最高分的学号是：202203
*/
#include <stdio.h>

#define N 35

void FindMax(int *p, long *q, int n, int *pMaxScore, long * pMaxNum);

int main(void)
{
    long num[N], maxNum;
    int score[N], maxScore;
    int n, i;

    printf("请输入学生人数：");
    scanf("%d", &n);
    printf("请输入学生学号和《思想品德》课程成绩：\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d%d", &num[i], &score[i]);
    }

    FindMax(score, num, n, &maxScore, &maxNum);

    printf("《思想品德》课程最高分是：%d\n", maxScore);
    printf("《思想品德》课程最高分的学号是：%d\n", maxNum);

    return 0;
}

void FindMax(int *p, long *q, int n, int *pMaxScore, long *pMaxNum)
{
    int i;
    *pMaxScore = *p;
    *pMaxNum = *q;

    for(i = 1; i < n; i++)
    {
        p++;
        q++;
        if(*p > *pMaxScore)
        {
            *pMaxScore = *p;
            *pMaxNum = *q;
        }
    }
}