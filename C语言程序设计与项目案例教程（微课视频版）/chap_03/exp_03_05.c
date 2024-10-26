/*
*   
*
*   样例输入：请输入学生成绩: 95
*   样例输出：优秀
*/

#include <stdio.h>

int main(void)
{
    int score;                              /* 定义表示成绩整型 score */
    printf("请输入学生成绩:");               /* 输出屏幕提示 */
    scanf("%d", &score);                    /* 从键盘输入百分制成绩 */

    if(score > 100 || score < 0)            /* 输入分数不合理时提示错误信息 */
    {
        printf("您输入的成绩不正确！\n");
    }
    else if (score >= 90)                   /* 这里的 else 表示 0 =< score && score <= 100 */
    {
        printf("优秀\n");
    }
    else if (score >= 80)                   /* 这里的 else 表示 0 =<score && score <= 90 */
    {
        printf("良好\n");
    }
    else if (score >= 70)                   /* 这里的 else 表示 0 =<score && score <= 80 */
    {
        printf("中等\n");
    }
    else if(score >= 60)                    /* 这里的 else 表示 0 =<score && score <= 70 */
    {
        printf("及格\n");
    }
    else                                    /* 这里的 else 表示 0 =<score && score <= 60 */
    {
        printf("不及格\n");
    }

    return 0;                               /* 函数返回值*/
}