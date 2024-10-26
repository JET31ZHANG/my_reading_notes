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
    char filename[51], str[100];                    /* filename 存放文件名，str 存放输入的字符串 */
    printf("请输入文件名：");
    scanf("%s", filename);                          /* 输入文件名 */
    if((fp = fopen(filename, "wb+")) == NULL)       /* 按二进制读写方式创建并打开指定的文件 */
    {
        printf("文件打开失败!");
        exit(0);
    }
    printf("请输入一句话: \n");
    getchar();
    gets(str);              /* 从终端输入字符串 */
    fputs(str, fp);         /* 将字符串输入文件 */
    fseek(fp, 7L, 0);       /* 移到从头开始的第 7 个字符处 */
    fgets(str, 7, fp);      /* 读取 7 个字符给 str */
    puts(str);              /* 将 str 输出到终端 */
    fclose(fp);
    return 0;
}