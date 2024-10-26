/*
*   使用 fopen() 函数以只读方式打开 “d:\\9-2.txt” 文件，
*   用 fgetc() 函数从文件中逐个读取字符并输出到屏幕上
*
*   样例输入：
*   样例输出：
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char ch;
    if((fp = fopen("d:\\9-2.txt", "r")) == NULL)        /* 若打开文件失败 */
    {
        printf("\nerror:fail in opening myfile!");
        exit(0);                                        /* 退出程序 */
    }

    ch = fgetc(fp);                                     /* 读取第 1 个字符 */
    while(ch != EOF)                                    /* 判断是否到文件结束位置 */
    {
        putchar(ch);                                    /* 输出字符到终端 */
        ch = fgetc(fp);
    }
    fclose(fp);                                         /* 关闭文件 */
    printf("\n");

    return 0;
}