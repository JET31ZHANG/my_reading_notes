/*
	输出：  A       B       C
			"Hello "
			\C Program\ 
*/
#include <stdio.h>

int main()
{
    printf("\101\t\x42\tC\n");
    printf("\"Hello \"\n");
    printf("\\C Program\\\n");
    return 0;
}