/*
*   文件综合应用实战
*
*   实战背景：
*   
*   实战目的：
*           1）掌握用 fopen() 函数打开文件的操作
*           2）掌握用 fgetc() 函数、fputc() 函数、fgets() 函数、
*               fputs() 函数、fscanf() 函数和fprintf() 函数等不同的方式，
*               在屏幕上显示文件的内容
*
*   实战内容：
*           1)将上面的文字内容，用文件名"中国诗词大会.txt"存放在计算机的 D 盘上
*           2)用 fopen() 函数打开"中国诗词大会.txt"文件
*           3)在屏幕上显示"中国诗词大会.txt"内容
*
*   样例输入：
*
*   样例输出：
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char ch, str1[100], str2[100];

    if((fp = fopen("d:\\中国诗词大会.txt", "r")) == NULL)   /* 打开文件失败 */
    {
        printf("文件读取失败!");
        exit(0);    /* 退出程序 */
    }

    ch = fgetc(fp);
    while(ch != EOF)
    {
        putchar(ch);
        ch = fgetc(fp);
    }

    fclose(fp);
    printf("\n\n");

    if((fp = fopen("d:\\中国诗词大会.txt", "rt")) == NULL)  /* 打开文件失败 */
    {
        printf("文件读取失败!");
        exit(0);    /* 退出程序 */
    }

    while(!feof(fp))
    {
        fgets(str1, 100, fp);
        printf("%s", str1);
    }

    fclose(fp);
    printf("\n\n");

    if((fp = fopen("d:\\中国诗词大会.txt", "rt")) == NULL)  /* 打开文件失败 */
    {
        printf("文件读取失败!");
        exit(0);    /* 退出程序 */
    }

    while(!feof(fp))
    {
        fscanf(fp, "%s", str2);
        printf("%s", str2);
    }

    fclose(fp);
    printf("\n\n");

    return 0;
}
