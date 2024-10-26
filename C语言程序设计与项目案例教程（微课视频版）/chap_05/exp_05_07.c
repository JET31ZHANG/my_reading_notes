/*
*   
*
*   样例输入：请输入两个实数：3.8 5.9
*   样例输出：  3.8+  5.9= 9.00
*/
#include <stdio.h>

int add(float i, float j)
{
    float k;
    k = i + j;
    return k;
}

int main(void)
{
    float a, b, c;
    printf("请输入两个实数：");
	scanf("%f%f", &a, &b);
    c = add(a, b);          /* 函数调用 */
    printf("%5.1f + %5.1f = %5.2f\n", a, b, c);

    return 0;
}
