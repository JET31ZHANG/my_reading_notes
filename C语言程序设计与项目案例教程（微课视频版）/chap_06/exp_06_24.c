/*
*   在使用计算机的过程中，需要输入正确的用户名和密码才可以进入系统，否则就不允许进入系统。
*   编写程序，模拟计算机系统登陆，提示用户输入用户名和密码，模拟登录，输入 3 次错误则退出程序。
*
*   样例输入：
*   样例输出：
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[30];          /* 定义数组存储用户名 */
    char password[30];      /* 定义数组存储密码 */
    int count = 0;          /* 定义 count 统计输入错误次数 */
    int flag = 0;           /* 定义 flag 记录输入正确 */
    while(1)
    {
        printf("请输入用户名\n");
        gets(name);
        printf("请输入密码\n");
        gets(password);
        
        if(strcmp(name, "china") == 0 && strcmp(password, "pass133") == 0)
        {
            flag = 1;       /* 输入用户名和密码正确, 退出循环 */
            break;
        }
        else 
        {
            printf("输入错误!请再次输入用户名和密码\n");
        }
        count++;
        if(count == 3)
        {
            break;
        }
    }
    if(flag == 1)
    {
        printf("登陆成功\n");
    }
    else 
    {
        printf("请三天后再次尝试\n");
    }
    return 0;
}
