/*
*   定义符号常量，并输出结果
*   
*   样例输出：   3.141593
*                100
*                Q
*                Quit
*/

#include <stdio.h>

#define PI 3.1415926            /* 实型常量 */ 
#define LEGNTH 100              /* 整型常量 */
#define Q 'Q'                   /* 字符型常量 */
#define QUIT "Quit"             /* 字符串 */

int main(void)
{
    printf("%f\n", PI);         /* 输出实型常量 */
    printf("%d\n", LEGNTH);     /* 输出整型常量 */
    printf("%c\n", Q);          /* 输出字符型常量 */
    printf("%s\n", QUIT);       /* 输出字符串型常量 */

    return 0;
}