#include <stdio.h>
#include <malloc.h>


typedef struct SequenceList
{
    ElemType data[MAXSIZE];
    int length;
} SqList;

// 初始化顺序表
void InitList(SqList * &L)
{
    // 动态申请内存空间，并返回空间的首地址，强制类型转换后赋给指针 L
    L = (SqList *) malloc (sizeof(SqList));
    L -> length = 0;    // 设置顺序表为空 
}

// 创建顺序表
void CreateList(SqList * &L, ElemType a[], int n)
{
    int i;
    // 通过循环语句，将数组 a 中的元素值，依次赋值给顺序表的 data 数组
    for(i = 0; i < n; i++)
    {
        L -> data[i] = a[i];
        L -> length++;
    }
}

// 求顺序表长度
int ListLength(SqList * L)  // 当顺序表不发生变化时，函数不需要定义引用型的指针参数
{
    return L -> length;
}

// 输出顺序表
void DispList(SqList * L)
{
    int i;
    printf("\n顺序表元素值为:");
    for(i = 0; i < L -> length; i++)
    {
        printf("% -4d", L -> data[i]);
    }
    printf("\n");
}

// 判断顺序表是否为空
bool ListEmpty(SqList * L)
{
    return L -> length == 0;
}

// 按位置查找顺序表
bool GetElemByPos(SqList * L, int i, ElemType &e)
{
    // 判断查找的逻辑位序是否合法
    if(i < 1 || i > L -> length)
    {
        return false;
    }
    // 将查找到的元素值赋值给引用型参数 e
    e = L -> data[i - 1];
    return true;
}

// 按值查找顺序表
int GetElemByElem(SqList * L, ElemType e)
{
    int i;
    // 循环遍历顺序表的 data 数组
    for(i = 0; i < L -> length; i++)
    {
        if(L -> data[i] == e)
        {
            // 返回查找到的元素的逻辑位序
            return i + 1;
        }
    }
    // 返回 0 表示查找失败
    return 0;
}

// 在顺序表中插入元素值
bool ListInsert(SqList * L, int i, ElemType e)
{
    int j;
    
    // 判断顺序表是否已满
    if(MAXSIZE == L -> length)
    {
        return false;
    }

    // 判断插入的逻辑位序是否合法
    if(i < 1 || i > L -> length + 1)
    {
        return false;
    }

    // 从后向前，将顺序表第 i 个逻辑位序以后的元素值依次向后平移一位
    for(j = L -> length; j >= i; j--)
    {
        L -> data[j] = L -> data[j - 1];
    }

    L -> data[i - 1] = e;   // 将元素值插入第 i 个逻辑位序
    L -> length++;          // 顺序表长度加 1

    return true;
}

// 在顺序表中删除元素值
bool ListDelete(SqList * &L, int i, ElemType &e)
{
    int j;

    // 判断删除的逻辑位序是否合法
    if(i < 1 || i > L -> length)
    {
        return false;
    }

    // 将删除的第 i 个元素值赋值给引用型参数 e
    e = L -> data[i - 1];

    // 从前向后，将顺序表第 i 个逻辑位序以后元素值依次向前平移一位
    for(j = i - 1; j < L -> length; j++)
    {
        L -> data[j] = L -> data[j + 1];
    }
    L -> length--;  // 顺序表长度减 1
    return true;
}

// 销毁顺序表
void DestroyList(SqList * &L)
{
    free(L);    // 释放顺序表 L 所占的存储空间
    L = NULL;   // 将 L 设置为空指针
}

typedef struct LNode
{
    ElemType data;          // 数据域，存储元素值
    struct LNode * next;    // 指针域，存储下一个结点的首地址
} LinkNode;

// 初始化单链表
void InitList(LinkNode * &L)
{
    // 为头结点动态申请空间，返回首地址赋给头指针
    L = (LinkNode *) malloc (sizeof(LinkNode));
    L -> next = NULL;   // 设置头结点的指针域为空
}

// 创建单链表
void CreateListByHead(LinkNode * &L, ElemType a[], int n)
{
    LinkNode * s;
    int i;
    for(i = 0; i < n; i++)
    {
        //
        s = (LinkNode *) malloc (sizeof(LinkNode));
        s -> data = s[i];
        s -> next = L -> next;
        L -> next = s;
    }
}

// 求单链表的长度


// 输出单链表


// 判断单链表是否为空


// 查找单链表


// 在单链表中插入元素值


// 在单链表中删除元素值


// 销毁单链表

