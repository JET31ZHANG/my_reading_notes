/*
*   
* 
*   样例输出：每天进步一点点，一年后为 37.783434
*            每天慵懒一点点，一年后为 0.025518
*/

#include <stdio.h>

int main(void)
{
    int day;
    double active = 1.01;
    double slack = 0.99;
    double y1 = 1;
    double y2 = 1;

    for(day = 1; day <= 365; day++)
    {
        y1 = y1 * active;
        y2 = y2 * slack;
    }

    printf("每天进步一点点，一年后为 %f\n", y1);
    printf("每天慵懒一点点，一年后为 %f\n", y2);

    return 0;
}