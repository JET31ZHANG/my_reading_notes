/* 命令行参数的输入与输出 */
#include "stdio.h"

int main(int argc, char* argv[])
{
    printf("argc -- arg num: %d\n", argc);
    printf("argv -- arg content: \n");
    printf("filename: %s\nyour name: %s\nyour gender: %s\n", argv[0], argv[1], argv[2]);

    return 0;
}