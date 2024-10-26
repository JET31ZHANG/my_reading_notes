/*
*   函数值传递和地址传递
*
*   样例输入：请输入两个整数：44 88
*   样例输出：change() 子函数中两个参数交换前：x = 44, y = 88
*            change() 子函数中两个参数交换后：x = 88, y = 44
*            main() 函数中两个实参在调用 change() 子函数后的值为：a = 44, b = 88
*            原数组 x 中的 10 个元素值为：
*            1       3       5       7       9       11      13      15      17      19
*            调用 add() 子函数后, 数组 x 中的 10 个元素值为：
*            2       6       10      14      18      22      26      30      34      38
*/
#include <stdio.h>

/* change() 函数功能是交换两个形参的值 */
void change(int x, int y)
{
    int t;
    printf("change() 子函数中两个参数交换前：x = %d, y = %d\n", x, y);
    t = x;
    x = y;
    y = t;
    printf("change() 子函数中两个参数交换后：x = %d, y = %d\n", x, y);
}

/* add() 函数功能是批量将每个数组元素值乘 2 */
void add(int a[])
{
    int i;
    for(i = 0; i < 10; i++)
        a[i] *= 2;          /* 每个数组元素的值乘 2 */
}

int main(void)
{
    int a, b, i;
    int x[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    printf("请输入两个整数：");
    scanf("%d%d", &a, &b);

    change(a, b);           /* change() 函数调用语句 */
    printf("main() 函数中两个实参在调用 change() 子函数后的值为：a = %d, b = %d\n", a, b);
    printf("原数组 x 中的 10 个元素值为：\n");
    for(i = 0; i < 10; i++)
        printf("%d\t", x[i]);
    
    add(x);                 /* add() 函数调用语句 */
    printf("\n 调用 add() 子函数后, 数组 x 中的 10 个元素值为：\n");
    for(i = 0; i < 10; i++)
        printf("%d\t", x[i]);

    return 0;
}
