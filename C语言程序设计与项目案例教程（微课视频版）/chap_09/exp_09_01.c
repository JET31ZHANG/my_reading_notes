/*
*   
*
*   样例输入：
*   样例输出：
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char ch[100], *p = ch;                          /* 字符个数不超过100个 */
    if((fp = fopen("d:\\file.txt", "w")) == NULL)   /* 若打开文件失败 */
    {
        printf("\nerror:fail in opening myfile!");
        exit(0);                                    /* 退出程序 */
    }
    printf("请输入一个字符串：");
    gets(p);                                        /* 输入字符串 */
    while(*p != '\0')                               /* 逐个字符输出到文件 */
    {
        fputc(*p, fp);
        p++;                                        /* 指针指向下一个字符 */
    }
    fclose(fp);                                     /* 关闭文件 */
    return 0;
}