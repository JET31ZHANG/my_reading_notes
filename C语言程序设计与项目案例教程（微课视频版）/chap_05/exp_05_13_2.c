#include <stdio.h>

extern int a;

void fun()
{
    a = 48;
    printf("fun() 函数中外部全局变量 a = %d\n", a);
}