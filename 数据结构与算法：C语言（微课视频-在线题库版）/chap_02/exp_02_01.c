#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>

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
