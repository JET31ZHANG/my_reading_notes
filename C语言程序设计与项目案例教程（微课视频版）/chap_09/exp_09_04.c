/*
*   
*
*   样例输入：
*   样例输出：
*/

#include <stdio.h>
#include <stdlib.h>

#define N 6

/* 从文件读取数据函数 */
void read_data(int a[], int n)  
{
    int i;
    FILE *fp;
    if((fp = fopen("d:\\9-4.txt", "r")) == NULL)        /* 打开文件失败 */
    {
        printf("文件读取失败！");
        exit(0);            /* 退出程序 */
    }
    for(i = 0; i < n; i++)
    {
        fscanf(fp, "%3d", &a[i]);                       /* 格式化读取文件数据 */
    }
    fclose(fp);
}

/* 计算平均值函数 */
float Ave(int a[])
{
    int i;
    float ave = 0.0;

    for(i = 0; i < N; i++)
    {
        ave += a[i];
    }
    printf("计算成功，请打开文件查看！\n");
    return ave / 6;
}

/* 写数据函数 */
void write_data(int a[], float ave)
{
    FILE *fp;
    if((fp = fopen("d:\\9-4.txt", "a")) == NULL)    /* 打开文件失败 */
    {
        printf("文件读取失败!");
        exit(0);
    }
    fprintf(fp, "\n\n 这些数的平均值为: ");          /* 输出两行空行 */
    fprintf(fp, "%4.2f", ave);                      /* 输出平均值 ave，保留两位小数 */
    fclose(fp);
}

int main(void)
{
    int a[N];
    float ave;
    read_data(a, N);                /* 读取文件 */
    ave = Ave(a);                   /* 计算平均值 */
    write_data(a, ave);             /* 把平均值回写文件中 */
    return 0;
}