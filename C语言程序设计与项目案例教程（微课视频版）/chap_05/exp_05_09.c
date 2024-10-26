/*
*   
*
*   样例输入：10
*   样例输出：s = 1 + 2 + 3 + ... + 10 = 55
*/
#include <stdio.h>

int sum(int n);

int main(void)
{
    int n, s;
    printf("请输入一个整数：");
	scanf("%d", &n);
    s = sum(n);
    printf("s = 1 + 2 + 3 + ... + %d = %d\n", n, s);

    return 0;
}

/* 1 到 n 的求和函数（递归） */
int sum(int n)
{
    if(n == 1)
        return 1;
    else 
        return n + sum(n - 1);
}