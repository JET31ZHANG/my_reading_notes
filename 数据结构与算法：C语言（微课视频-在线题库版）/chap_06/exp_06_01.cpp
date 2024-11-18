#include <stdio.h>

#define M 19
#define N 19

#define MAX 100
#define ElemType int

typedef struct
{
    int i;
    int j;
    ElemType v;
} LOTNode;

typedef struct 
{
    int r;
    int c;
    int n;
    LOTNode data[MAX];
} LOTMatrix;

void CreateTriplet(LOTMatrix &s, ElemType A[M][N])
{
    int a, b;
    s.r = M;
    s.c = N;
    s.n = 0;
    for(a = 0; a < M; a++)
    {
        for(b = 0; b < N; b++)
        {
            if(A[a][b] != 0)
            {
                s.data[s.n].i = a;
                s.data[s.n].j = b;
                s.data[s.n].v = A[a][b];
                s.n++;
            }
        }
    }
}

void Layout1(int A[M][N])
{
    int i, j;
    A[3][3] = 1;
    A[15][3] = 1;
    A[3][15] = 2;
    A[10][16] = 2;
    A[16][15] = 2;
}

void Layout2(int A[M][N])
{
    int i, j;
    A[3][3] = 1;
    A[9][3] = 1;
    A[15][3] = 1;
    A[15][9] = 1;
    A[3][9] = 2;
    A[9][9] = 2;
    A[3][15] = 2;
    A[9][15] = 2;
    A[15][15] = 2;
}

int main(void)
{
    int Go1[M][N] = {0};
    int Go2[M][N] = {0};
    LOTMatrix S1, S2;
    Layout1(Go1);
    Layout2(Go2);
    CreateTriplet(S1, Go1);
    CreateTriplet(S2, Go2);
    return 0;
}