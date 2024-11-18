/*
*   十进制数转换为二进制数
*/
#include <stdio.h>
#include <malloc.h>

#define MAXSIZE 100

typedef int ElemType;
typedef struct SequenceStack
{
    ElemType data[MAXSIZE];
    int top;
} SqStack;

void InitStack(SqStack * &s)
{
    s = (SqStack *) malloc (sizeof(SqStack));
    s -> top = -1;
}

void DestroyStack(SqStack * &s)
{
    free(s);
    s = NULL;
}

bool StackEmpty(SqStack * s)
{
    return s -> top == -1;
}

bool Push(SqStack * &s, ElemType e)
{
    if(s -> top == MAXSIZE - 1)
    {
        return false;
    }

    s -> top++;
    s -> data[s -> top] = e;
    return true;
}

bool Pop(SqStack * &s, ElemType &e)
{
    if(s -> top == -1)
        return false;
    e = s -> data[s -> top];
    s -> top--;
    return true;
}

void BinaryConvert(int N)
{
    int X, e;
    SqStack * s;
    InitStack(s);
    while(N != 0)
    {
        X = N % 2;
        N = N / 2;
        Push(s, X);
    }

    printf("转换为二进制：");
    while(!StackEmpty(s))
    {
        Pop(s, e);
        printf("%d", e);
    }
    printf("\n");
    DestroyStack(s);
}

int main()
{
    int num;
    printf("请输入要转换的十进制整数：");
    scanf("%d", &num);
    BinaryConvert(num);
    return 0;
}