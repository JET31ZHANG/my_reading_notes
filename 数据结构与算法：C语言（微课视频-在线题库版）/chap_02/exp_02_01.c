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
int ListLength();
bool ListEmpty();
void DestroyList();
bool GetElemByPos();
int GetElemByElem(SqList * L, ElemType e);
bool ListInsert(SqList * L, int i, ElemType e);
bool ListDelete(SqList * L, int i, ElemType e);