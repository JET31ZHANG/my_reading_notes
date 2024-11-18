/*
*   用单链表实现学生成绩管理信息系统
*/
// 头文件
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

#define LEN 50

typedef struct Student
{
    char sno[10];
    char sname[20];
    char gender;
    int computer;
    int maths;
    int english;
    int total;
} ElemType;

typedef struct LNode
{
    ElemType data;
    struct LNode * next;
} LinkNode;

void Menu();
void InitList(LinkNode * &L);
void CreateListByHead(LinkNode * &L, ElemType a[], int n);
void CreateListByTail(LinkNode * &L, ElemType a[], int n);
void DispList(LinkNode * L);
int LengthList(LinkNode * L);
bool ListEmpty(LinkNode * L);
void DestroyList(LinkNode * &L);
bool GetElemByPos(LinkNode * L, int i, ElemType &e);
int GetElemBySno(LinkNode * L, ElemType e);
bool ListInsert(LinkNode * &L, int i, ElemType e);
bool ListDelete(LinkNode * &L, int i, ElemType &e);

int main()
{
    LinkNode * head = NULL;
    int choice;
    int num;
    ElemType arr[LEN];
    int i;
    int pos;
    ElemType elem;
    do
    {
        Menu();
        printf("pls Enter your choice: ");
        scanf("%d", &choice);
        system("cls");
        switch(choice)
        {
            case 1: 
                InitList(head);
                if(head != NULL)
                {
                    printf("init success!\n");
                }
                else 
                {
                    printf("init failed!\n");
                }
                break;
            case 2: 
                printf("1. CreateListByHead\n");
                printf("2. CreateListByTail\n");
                scanf("%d", &choice);
                system("cls");
                printf("pls Enter the number of students: ");
                scanf("%d", &num);
                for(i = 0; i < num; i++)
                {
                    printf("sno: ");
                    scanf("%s", &arr[i].sno);
                    getchar();
                    printf("sname: ");
                    gets(arr[i].sname);
                    printf("gender: ");
                    scanf("%c", &arr[i].gender);
                    printf("computer: ");
                    scanf("%d", &arr[i].computer);
                    printf("maths: ");
                    scanf("%d", &arr[i].maths);
                    printf("english: ");
                    scanf("%d", &arr[i].english);
                    arr[i].total = arr[i].computer + arr[i].maths + arr[i].english;
                }

                if(choice == 1)
                {
                    CreateListByHead(head, arr, num);
                }
                else 
                {
                    CreateListByTail(head, arr, num);
                }
                DispList(head);
                break;
            case 3: 
                DispList(head);
                break;
            case 4: 
                printf("the length of LinkList is %d\n", LengthList(head));
                break;
            case 5: 
                if(ListEmpty(head))
                {
                    printf("List is empty.\n");
                }
                else 
                {
                    printf("List is not empty.\n");
                }
                break;
            case 6:
                DestroyList(head);
                if(head == NULL)
                {
                    printf("destroy successful.\n");
                }
                else 
                {
                    printf("destroy failed.\n");
                }
                break;
            case 7: 
                printf("pls Enter position: ");
                scanf("%d", &pos);
                if(GetElemByPos(head, pos, elem))
                {
                    printf("the No. %d student is %s, %s, %c, %d, %d, %d, %d\n", 
                            pos,
                            elem.sno,
                            elem.sname,
                            elem.gender,
                            elem.computer,
                            elem.maths,
                            elem.english,
                            elem.total
                    );
                }
                else 
                {
                    printf("failed!\n");
                }
                break;
            case 8: 
                printf("pls Enter sno: ");
                scanf("%s", &elem.sno);
                pos = GetElemBySno(head, elem);
                if(pos != 0)
                {
                    printf("%s is No. %d student.\n", elem.sno, pos);
                }
                else 
                {
                    printf("there is not %s\n", elem.sno);
                }
                break;
            case 9: 
                printf("pls Enter insert position: ");
                scanf("%d", &pos);
                printf("pls Enter student info.\n");
                printf("sno: ");
                scanf("%s", elem.sno);
                printf("sname: ");
                getchar();
                gets(elem.sname);
                printf("gender: ");
                scanf("%c", &elem.gender);
                printf("computer: ");
                scanf("%d", &elem.computer);
                printf("maths: ");
                scanf("%d", &elem.maths);
                printf("english: ");
                scanf("%d", &elem.english);
                elem.total = elem.computer + elem.maths + elem.english;
                if(ListInsert(head, pos, elem))
                {
                    printf("insert success!\n");
                    DispList(head);
                }
                else 
                {
                    printf("insert failed!\n");
                }
                break;
            case 10:
                printf("pls Enter delete position: ");
                scanf("%d", &pos);
                if(ListDelete(head, pos, elem))
                {
                    printf("delete success!\n");
                    DispList(head);
                }
                else 
                {
                    printf("delete failed!\n");
                }
                break;
            case 0: 
                exit(0);
            default: 
                printf("input Error!\n");
        }
    } while (1);
    return 0;    
}

void Menu()
{
    printf("STUDENT INFO MANAGEMENT(单链表)\n");
    printf("--------------------------------------------\n");
    printf("1. initial List\n");
    printf("2. Create List\n");
    printf("3. Display List\n");
    printf("4. List Length\n");
    printf("5. List isEmpty\n");
    printf("6. Destroy List\n");
    printf("7. GetElemByPos\n");
    printf("8. GetElemBySno\n");
    printf("9. List Insert\n");
    printf("10. ListDelete\n");
    printf("0. exit\n");
    printf("--------------------------------------------\n");
}

void InitList(LinkNode * &L)
{
    L = (LinkNode *) malloc (sizeof(LinkNode));
    L -> next = NULL;
}

void CreateListByHead(LinkNode * &L, ElemType a[], int n)
{
    LinkNode * s;
    int i;
    for(i = 0; i < n; i++)
    {
        s = (LinkNode *) malloc (sizeof(LinkNode));
        s -> data = a[i];
        s -> next = L -> next;
        L -> next = s;
    }
}

void CreateListByTail(LinkNode * &L, ElemType a[], int n)
{
    LinkNode * s, * r;
    int i;
    r = L;
    for(i = 0; i < n; i++)
    {
        s = (LinkNode *) malloc (sizeof(LinkNode));
        s -> data = a[i];
        s -> next = NULL;
        r -> next = s;
        r = s;
    }
}

void DispList(LinkNode * L)
{
    LinkNode * p = L -> next;
    printf("学号\t姓名\t性别\t计算机成绩\t数学成绩\t英语成绩\t总成绩\n");
    printf("----------------------------------------------------\n");
    while(p != NULL)
    {
        printf("%s\t%s\t%c\t%d\t%d\t%d\t%d\n", 
            p -> data.sno,
            p -> data.sname,
            p -> data.gender,
            p -> data.computer,
            p -> data.maths,
            p -> data.english,
            p -> data.total
        );
        p = p -> next;
    }
}

int LengthList(LinkNode * L)
{
    LinkNode * p = L -> next;
    int cnt = 0;
    while(p != NULL)
    {
        cnt++;
        p = p -> next;
    }
    return cnt;
}

bool ListEmpty(LinkNode * L)
{
    return L -> next == NULL;
}

void DestroyList(LinkNode * &L)
{
    LinkNode * p = L -> next;
    while(p != NULL)
    {
        p = p -> next;
        free(L -> next);
        L -> next = p;
    }
    free(L);
    L = NULL;
}

bool GetElemByPos(LinkNode * L, int i, ElemType &e)
{
    LinkNode * p = L;
    int cnt = 0;
    while(p != NULL)
    {
        if(cnt == i)
            break;
        cnt++;
        p = p -> next;
    }
    if(p == NULL)
	{
    	return false;
    }
        
    else 
    {
        e = p -> data;
        return true;
    }
}

int GetElemBySno(LinkNode * L, ElemType e)
{
    LinkNode * p = L -> next;
    int cnt = 1;
    while(p != NULL && strcmp(p -> data.sno, e.sno) != 0)
    {
        cnt++;
        p = p -> next;
    }
    if(p == NULL)
        return 0;
    else
        return cnt;
}

bool ListInsert(LinkNode * &L, int i, ElemType e)
{
    LinkNode * p = L;
    int cnt = 0;
    LinkNode * s;
    while(p != NULL && cnt < i - 1)
    {
        cnt++;
        p = p -> next;
    }
    if(p != NULL)
    {
        s = (LinkNode *) malloc (sizeof(LinkNode));
        s -> data = e;
        s -> next = p -> next;
        p -> next = s;
        return true;
    }
    else 
    {
        return false;
    }
}

bool ListDelete(LinkNode * &L, int i, ElemType &e)
{
    LinkNode * p = L;
    int cnt = 0;
    LinkNode * q;
    while(p != NULL && cnt < i - 1)
    {
        cnt++;
        p = p -> next;
    }
    if(p != NULL)
    {
        q = p -> next;
        if(q == NULL)
            return false;
        e = q -> data;
        p -> next = q -> next;
        free(q);
        return true;
    }
    else
    {
    	return false;
    }
}