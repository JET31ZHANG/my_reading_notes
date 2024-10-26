/*
*   
*
*   样例输入：
*   样例输出：
*/
#include <stdio.h>

int main(void)
{
    int num;

    /* 初始化元素个数是 6 的字符数组 a，下标对应申请书的编号 0 - 5，值为 Y 或 N */
    char a[7]={'Y','Y','N','Y','Y','N'};

    printf("请输入申请书的编号（0-5）：");
    scanf("%d", &num);

    if(a[num] == 'Y')
    {
        printf("这份入党申请书已审核！\n");
    }
    else 
    {
        printf("这份入党申请书未审核！\n");
    }
    return 0;
}
