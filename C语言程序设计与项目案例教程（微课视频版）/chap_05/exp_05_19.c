/*
*   
*
*   样例输出：
*/
#include <stdio.h>

int main(void)
{
    printf("%d\n", __LINE__);	/* 显示所在行号 */
    printf("%s\n", __func__);	/* 显示所在函数 */
    printf("%s\n", __TIME__);	/* 显示当前时间 */
    printf("%s\n", __DATE__);	/* 显示当前日期 */
    printf("%s\n", __FILE__);	/* 显示所处文件名在源代码中插入当前源代码文件名 */
    // printf("%d\n", __STDC__);	/* 编译器遵循 ANSI C 标准时该标识被赋值为 1 */

    return 0;  
}
