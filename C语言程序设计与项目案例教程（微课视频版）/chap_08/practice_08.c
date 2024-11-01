/*
*   结构体与共用体应用实战
*
*   实战背景：“一带一路” (The Belt and Road, B&R)
*   
*   实战目的：
*           1）掌握结构体数组的定义和使用
*           2）掌握结构体指针的定义和使用
*
*   实战内容：编程实现输入 “一带一路” 中线城市编号、城市名称、城市面积和城市简介，并在屏幕上显示该信息
*
*   样例输入：请输入中线城市个数：2
*            请输入中线城市编号、城市名称、城市面积（平方千米）、城市简介
*            1 北京 16410.54 是中华人民共和国首都，政治、经济、文化中心
*            请输入中线城市编号、城市名称、城市面积（平方千米）、城市简介
*            2 西安 10108 是西部中心城市
*
*   样例输出：   城市编号        城市名称        城市面积        城市简介
*               1               北京            16410.54        是中华人民共和国首都，政治、经济、文化中心
*               2               西安            10108.00        是西部中心城市
*/
#include <stdio.h>
#include <malloc.h>

struct introduction
{
    int num;
    float area;
    char name[10];
    char city[200];
    struct introduction *next;
};

struct introduction *create(int n)
{
    struct introduction *head, *pf, *pb;
    int i;
    for(i = 0; i < n; i++)
    {
        pb = (struct introduction *) malloc (sizeof(struct introduction));
        printf("请输入中线城市编号、城市名称、城市面积（平方千米）、城市简介\n");
        scanf("%d%s%f%s", &pb -> num, &pb -> name, &pb -> area, &pb -> city);

        if(i == 0)
        {
            pf = head = pb;
        }
        else 
        {
            pf -> next = pb;
        }

        pb -> next = NULL;
        pf = pb;
    }
    return (head);
}

void print(struct introduction *head)
{
    printf("城市编号\t城市名称\t城市面积\t城市简介\n");
    while(head != NULL)
    {
        printf("%d\t\t%s\t\t%4.2f\t%s\n", head -> num, head -> name, head -> area, head -> city);
        head = head -> next;
    }
}

int main(void)
{
    struct introduction *head;
    int n;

    printf("请输入中线城市个数：");
    scanf("%d", &n);

    head = create(n);
    print(head);

    return 0;
}
