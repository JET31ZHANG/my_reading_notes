/*
*   分组实现函数功能应用实战
*
*   实战背景：
*   
*   实战目的：
*           1）掌握函数定义及调用方式
*           2）具备将较复杂的问题进行抽象分解成若干功能块的能力，并能编写相应的功能函数
*
*   实战内容：将班级的学生分成 3 组，对输入不超过 50 个整数，
*           分别负责编写数据输入函数、数据排序函数和数据输出函数
*
*   样例输入：
*           请输入数据个数 (1 ~ 50): 5
*           请输入第 1 个数：5
*           请输入第 2 个数：3
*           请输入第 3 个数：2
*           请输入第 4 个数：6
*           请输入第 5 个数：1
*
*   样例输出：
*           排序前的数据为:
*           5 3 2 6 1
*           排序后的数据为:
*           1 2 3 5 6
*
*/
#include <stdio.h>

/* 数据输入函数 */
void inputdata(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("请输入第 %d 个数：", i + 1);
        scanf("%d", &a[i]);
    }
}

/* 数据输出函数 */
void outputdata(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

/* 数据排序函数 */
void sort(int a[], int n)
{
    int i;
    int j;
    int k;
    int temp;
    for(i = 0; i < n - 1; i++)
    {
        k = i;
        for(j = i + 1; j < n; j++)
        {
            if(a[k] > a[j])
            {
                k = j;
            }
        }
        if(k != i)
        {
            temp = a[i];
            a[i] = a[k];
            a[k] = temp;
        }
    }
}

int main(void)
{
    int data[50];
    int num;
    printf("请输入数据个数 (1 ~ 50): ");
    scanf("%d", &num);

    inputdata(data, num);
    printf("排序前的数据为: \n");
    outputdata(data, num);

    sort(data, num);
    printf("排序后的数据为: \n");
    outputdata(data, num);

    return 0;
}
