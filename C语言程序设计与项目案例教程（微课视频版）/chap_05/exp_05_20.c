/*
*   演示 #line 的用法
*
*   样例输出：本行为第11行！
*/
#line 7 						/* 初始化行计数器 */
#include<stdio.h>

int main()
{
	printf("本行为第%d行！\n",__LINE__);
}
