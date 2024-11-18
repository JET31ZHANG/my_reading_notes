#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define N 3

// 棋盘变化算法，改变二维数组对应位置为 'X' 或 '-'
void chessboard(int tic_tac_toe[][N])
{
    int i = 0;
    int j = 0;
    system("cls");
    printf("~~~~~~~~~~~~三子棋游戏~~~~~~~~~~~~\n");
    for(i = 0; i < N; i++)
    {
        printf("\n    ");
        for(j = 0; j < N; j++)
        {
            if(tic_tac_toe[i][j] == 1)
                printf("X  ");
            else if(tic_tac_toe[i][j] == 0)
                printf("-  ");
            else
                printf("0  ");
        }
        printf("\n");
    }
    printf("\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

// 用户下棋算法
void user(int tic_tac_toe[][N])
{
    int x = 0;
    int y = 0;
    do
    {
        printf("请输入需要下棋的坐标（横、纵坐标范围为 0 - 2）:>");
        scanf("%d%d", &x, &y);
        if(tic_tac_toe[x][y] != 0)
            printf("输入有误，请重新输入!\n");
    } while (tic_tac_toe[x][y] != 0);
    tic_tac_toe[x][y] = 1;
}

// 计算机下棋算法
void computer(int tic_tac_toe[][N])
{
    int x = 0;
    int y = 0;
    do
    {
        srand((unsigned) time (NULL));
        x = rand() % 3;
        y = rand() % 3;
    } while (tic_tac_toe[x][y] != 0);
    tic_tac_toe[x][y] = 2;
}

// 判断用户和计算机哪一方取得胜利的算法
int who_is_winner(int tic_tac_toe[][N])
{
    int flag = 0;
    int x = 0;
    int y = 0;

    if(tic_tac_toe[0][0] == tic_tac_toe[0][1] && tic_tac_toe[0][1] == tic_tac_toe[0][2])
    {
        if(tic_tac_toe[0][0] == 1)
            return 1;
        else if(tic_tac_toe[0][0] == 2)
            return 2;
    }

    if(tic_tac_toe[1][0] == tic_tac_toe[1][1] && tic_tac_toe[1][1] == tic_tac_toe[1][2])
    {
        if(tic_tac_toe[1][0] == 1)
            return 1;
        else if(tic_tac_toe[1][0] == 2)
            return 2;
    }

    if(tic_tac_toe[2][0] == tic_tac_toe[2][1] && tic_tac_toe[2][1] == tic_tac_toe[2][2])
    {
        if(tic_tac_toe[2][0] == 1)
            return 1;
        else if(tic_tac_toe[2][0] == 2)
            return 2;
    }

    if(tic_tac_toe[0][0] == tic_tac_toe[1][0] && tic_tac_toe[1][0] == tic_tac_toe[2][0])
    {
        if(tic_tac_toe[0][0] == 1)
            return 1;
        else if(tic_tac_toe[0][0] == 2)
            return 2;
    }

    if(tic_tac_toe[0][1] == tic_tac_toe[1][1] && tic_tac_toe[1][1] == tic_tac_toe[2][1])
    {
        if(tic_tac_toe[0][1] == 1)
            return 1;
        else if(tic_tac_toe[0][1] == 2)
            return 2;
    }

    if(tic_tac_toe[0][2] == tic_tac_toe[1][2] && tic_tac_toe[1][2] == tic_tac_toe[2][2])
    {
        if(tic_tac_toe[0][2] == 1)
            return 1;
        else if(tic_tac_toe[0][2] == 2)
            return 2;
    }

    if(tic_tac_toe[0][0] == tic_tac_toe[1][1] && tic_tac_toe[1][1] == tic_tac_toe[2][2])
    {
        if(tic_tac_toe[0][0] == 1)
            return 1;
        else if(tic_tac_toe[0][0] == 2)
            return 2;
    }

    if(tic_tac_toe[0][2] == tic_tac_toe[1][1] && tic_tac_toe[1][1] == tic_tac_toe[2][0])
    {
        if(tic_tac_toe[0][2] == 1)
            return 1;
        else if(tic_tac_toe[0][2] == 2)
            return 2;
    }

    for(x = 0; x < N; x++)
    {
        for(y = 0; y < N; y++)
        {
            if(tic_tac_toe[x][y] == 0)
                return 0;
        }
    }
    return -1;
}

// 进行游戏算法
void play()
{
    int tic_tac_toe[3][3] = {0};
    int winner = 0;
    chessboard(tic_tac_toe);
    while(who_is_winner(tic_tac_toe) == 0)
    {
        user(tic_tac_toe);
        chessboard(tic_tac_toe);
        if(who_is_winner(tic_tac_toe) != 0)
            break;
        computer(tic_tac_toe);
        chessboard(tic_tac_toe);
        Sleep(1000);
    }
    winner = who_is_winner(tic_tac_toe);
    if(winner == 1)
        printf("您获胜了!\n");
    else if (winner == 2)
        printf("您输了，再接再厉!\n");
    else 
        printf("和局!\n");
}

int main()
{
    int a = 1;
    do
    {
        play();
        printf("\n继续游戏请按1, 退出按任意键 :>");
        scanf("%d", &a);
    } while (a == 1);
    return 0;
}