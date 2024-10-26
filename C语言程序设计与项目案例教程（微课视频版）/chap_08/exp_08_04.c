/*
*   建立同学通讯录
*   样例输入：   input name：
*               王丽
*               input phone：
*               189xxxx0001
*               input name：
*               李刚
*               input phone：
*               189xxxx0002
*               input name：
*               王峰
*               input phone：
*               189xxxx0003
*   样例输出：  name                    phone
*
*               王丽                    189xxxx0001李刚
*               李刚                    189xxxx0002王峰
*               王峰                    189xxxx0003
*                
*/
#include <stdio.h>

#define NUM 3

struct mem 
{
    char name[20];
    char phone[11];
};

int main(void)
{
    struct mem man[NUM];
    int i;
    for(i = 0; i < NUM; i++)
    {
        printf("input name:\n");
        gets(man[i].name);
        printf("input phone:\n");
        gets(man[i].phone);
    }
    printf("name\t\t\tphone\n\n");
    for(i = 0; i < NUM; i++)
    {
        printf("%s\t\t\t%s\n", man[i].name, man[i].phone);
    }

    return 0;
}