/*
*   
*
*   样例输入：   请输入两位同学的成绩：
*               第一位同学的成绩：89
*               第二位同学的成绩：92
*   样例输出：   品德修养成绩较高的是：92
*/
#include <stdio.h>

/* 自定义 max() 函数，输出最大值 */
void max(int i, int j, int k)
{
    k = i > j ? i : j;      /* 把 i 和 j 里面的最大值赋值给 k */ 
    printf("品德修养成绩较高的是：%d\n", k);
}

int main(void)
{

    int a = 0;
    int b = 0;
    int c = 0;

    printf("请输入两位同学的成绩：\n");
 	printf("第一位同学的成绩：");
	scanf("%d",&a);
 	printf("第二位同学的成绩：");
	scanf("%d",&b);

	max(a,b,c);

    return 0;
}
