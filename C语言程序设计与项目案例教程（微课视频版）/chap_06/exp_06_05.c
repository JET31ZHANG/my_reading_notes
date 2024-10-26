/*
*   
*
*   样例输入：请输入需要查找的数字：7
*   样例输出：7 在数组中, 是 a[3]。
*
*   样例输入：请输入需要查找的数字：22
*   样例输出：数组中没有找到 22。
*/
#include <stdio.h>
#define temp 10

int main(void)
{
    int a[temp] = {2, 3, 5, 7, 12, 21, 99, 8, 7, 11};   /* 数组a存放 10 个整型数据 */
    int x = 0;
    int i = 0;
    /* flag 用来判断查找是否成功，flag = 1 表示查找成功，flag = 0 表示查找失败，初值为 0 */
    int flag = 0;
    printf("请输入需要查找的数字：");
    scanf("%d", &x);

    for(i = 0; i < 10; i++)
    {
        if(x == a[i])
        {
            flag = 1;
            break;              /* 若找到 x，退出循环 */
        }
    }

    if(flag == 1)               /* 查找成功 */
    {
        printf("%d 在数组中, 是 a[%d]。", x, i);        /* 输出位置 */
    }
    else 
    {
        printf("数组中没有找到 %d。\n", x);
    }

    return 0;
}
