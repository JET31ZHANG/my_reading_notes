// 头文件
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

#define LEN 50

typedef struct Student
{
    char sno[10];       // 学号
    char sname[20];     // 姓名
    char gender;        // 性别
    int computer;       // 计算机成绩
    int maths;          // 数学成绩
    int english;        // 英语成绩
    int total;          // 总成绩
} ElemType;

typedef struct SequenceList
{
    ElemType data[LEN];
    int length;
} SqList;

void InitList(SqList * &L);
void Menu();
void CreateList(SqList * &l, ElemType a[], int n);
void DispList(SqList * L);
int ListLength(SqList * L);
bool ListEmpty(SqList * L);
void DestroyList(SqList * &L);
bool GetElemByPos(SqList * L, int i, ElemType &e);
int GetElemByElem(SqList * L, ElemType e);
bool ListInsert(SqList * L, int i, ElemType e);
bool ListDelete(SqList * L, int i, ElemType e);

int main(void)
{
    SqList *sq = NULL;
    int choice;
    int num;
    int i;
    ElemType arr[LEN];
    char confirm[4];
    int pos;
    ElemType elem;

    do 
    {
        Menu();
        scanf("%d", &choice);
        system("cls");
        switch(choice)
        {
            case 1:
                InitList(sq);
                if(sq != NULL)
                {
                    printf("init success!\n");
                }
                else 
                {
                    printf("init failed!\n");
                }
                break;
            case 2:
                printf("pls Enter the number of students: ");
                scanf("%d", &num);
                for(i = 0; i < num; i++)
                {
                    printf("sno: ");
                    scanf("%s", arr[i].sno);
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
                CreateList(sq, arr, num);
                DispList(sq);
                break;
            case 3:
                DispList(sq);
                break;
            case 4:
                printf("the length of seqList is %d\n", ListLength(sq));
                break;
            case 5:
                if(ListEmpty(sq))
                {
                    printf("List is empty!\n");
                }
                else 
                {
                    printf("List is not empty!\n");
                }
                break;
            case 6:
                printf("are you sure? input yes or no: ");
                scanf("%s", confirm);
                if(strcmp(strlwr(confirm), "yes") == 0)
                {
                    DestroyList(sq);
                    if(sq == NULL)
                    {
                        printf("Destroy success!\n");
                    }
                    else 
                    {
                        printf("Destroy failed!\n");
                    }
                }
                break;
            case 7:
                printf("pls Enter position: ");
                scanf("%d", &pos);
                if(GetElemByPos(sq, pos, elem))
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
                    printf("get failed!\n");
                }
                break;
            case 8:
                printf("pls Enter Sname: ");
                getchar();
                gets(elem.sname);
                pos = GetElemByElem(sq, elem);
                if(pos == 0)
                {
                    printf("there is not %s\n", elem.sname);
                }
                else 
                {
                    printf("%s is No. %d student.\n", elem.sname, pos);
                }
                break;
            case 9:
                printf("pls Enter insert position:");
                scanf("%d", &pos);
                printf("pls Enter Student info\n");
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
                if(ListInsert(sq, pos, elem))
                {
                    printf("insert success!\n");
                    DispList(sq);
                }
                else
                {
                    printf("insert failed!\n");
                }
                break;
            case 10:
                printf("pls Enter delete position:");
                scanf("%d", &pos);
                if(ListDelete(sq, pos, elem))
                {
                    printf("delete success!\n");
                    DispList(sq);
                }
                else 
                {
                    printf("delete failed!\n");
                }
                break;
            case 0:
                exit(0);
            default:
                printf("input error!\n");
        }
    }
    while(1);

    return 0;
}

void Menu()
{
    printf("STUDENT INFO MANAGEMENT(顺序表)\n");
	printf("-------------------------------\n");
	printf("1.initial List\n");
	printf("2.Create List\n");
	printf("3.Display List\n");
	printf("4.List Length\n");
	printf("5.List is Empty?\n");
	printf("6.Destroy List\n");
	printf("7.GetElemByPosition\n");
	printf("8.GetElemBySname\n");
	printf("9.List Insert\n");
	printf("10.List Delete\n");
	printf("0.exit\n");
	printf("-------------------------------\n");
	printf("pls Enter your choice:");
}

void InitList(SqList * &L)
{
    L = (SqList *) malloc (sizeof(SqList));
    L -> length = 0;
}

void CreateList(SqList * &L, ElemType a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        L -> data[i] = a[i];
        L -> length++;
    }
}

void DispList(SqList * L)
{
    int i;
    printf("学号\t姓名\t性别\t计算机成绩\t数学成绩\t英语成绩\t总成绩\n");
    printf("----------------------------------------------------\n");
    for(i = 0; i < L -> length; i++)
    {
        printf("%s\t%s\t%c\t%d\t%d\t%d\t%d\n", 
            L -> data[i].sno,
            L -> data[i].sname,
            L -> data[i].gender,
            L -> data[i].computer,
            L -> data[i].maths,
            L -> data[i].english,
            L -> data[i].total
        );
    }
}

int ListLength(SqList * L)
{
    return L -> length;
}

bool ListEmpty(SqList * L)
{
    return L -> length == 0;
}

void DestroyList(SqList * &L)
{
    free(L);
    L = NULL;
}

bool GetElemByPos(SqList * L, int i, ElemType &e)
{
    if(i < 1 || i > L -> length)
    {
        return false;
    }
    e = L -> data[i - 1];
    return true;
}

int GetElemByElem(SqList * L, ElemType e)
{
    int i;
    for(i = 0; i < L -> length; i++)
    {
        if(strcmp(L -> data[i].sname, e.sname) == 0)
        {
            return i + 1;
        }
    }
    return 0;
}

bool ListInsert(SqList * L, int i, ElemType e)
{
    int j;
    if(LEN == L -> length)
    {
        return false;
    }
    if(i < 1 || i > L -> length + 1)
    {
        return false;
    }
    for(j = L -> length; j >= i; j--)
    {
        L -> data[j] = L -> data[j - 1];
    }
    L -> data[i - 1] = e;
    L -> length++;
    return true;
}

bool ListDelete(SqList * L, int i, ElemType e)
{
    int j;
    if(i < 1 || i > L -> length)
    {
        return false;
    }
    e = L -> data[i - 1];
    for(j = i - 1; j < L -> length - 1; j++)
    {
        L -> data[j] = L -> data[j + 1];
    }
    L -> length--;
    return true;
}
