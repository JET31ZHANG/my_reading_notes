## 图的定义和基本术语

#### 图的定义

由非空的顶点集合和一个描述顶点之间关系——边（弧）的集合组成，其二元组定义形式为 G = (V, E)，其中图G，图G中顶点的集合V、图G中边的集合E。

- 无向图：顶点之间的边没有方向性
  - 集合V = {v_1, v_2, v_3, v_4, v_5}
  - 集合E = {(v_1, v_2), (v_1, v_4), (v_2, v_3), (v_2, v_5), (v_3, v_4), (v_3, v_5)}
- 有向图：顶点之间的边有方向性
  - 集合V = {v_1, v_2, v_3, v_4, v_5}
  - 集合E = {<v_1, v_2>, <v_1, v_4>, <v_2, v_3>, <v_2, v_5>, <v_4, v_3>, <v_3, v_5>}

#### 图的基本术语

* 顶点（Vertex）：数据元素 v_i
* 边：在无向图中，顶点 v_i 和顶点 v_j 之间的一条直接连线。无序偶对 (v_i, v_j)
* 弧：在有向图中，顶点 v_i 和顶点 v_j 之间的一条直接连线。有序偶对 <v_i, v_j>
* 始点（弧头）：有序偶对的第一个结点 v_i，即不带箭头的一端。
* 终点（弧尾）：有序偶对的第二个结点 v_j，即带箭头的一端。
* 顶点的度（Degree）：依附于某顶点 v 的边数，记为TD(v)。在有向图中包含顶点的入度和出度。
* 顶点的入度：以顶点 v 为终点的弧的数目，记为ID(v)。
* 顶点的出度：以顶点 v 为始点的弧的数目，记为OD(v)。
* 有向图中一个顶点的度等于顶点的入度 + 出度。即TD(v) = ID(v) + OD(v)。
* 无向完全图：在一个无向图中，若任意两顶点都有一条边直接相连接，则该图为无向完全图。在一个含有 n 个顶点的无向完全图中，有 n(n - 1) / 2 条边。
* 有向完全图：在一个有向图中，若任意两顶点之间都有方向互为相反的两条弧相连，则该图为有向完全图。在一个含有 n 个顶点的有向完全图中，有 n(n - 1)条边。
* 稠密图：一个图接近完全图。
* 稀疏图：边数很少的图。
* 权值（Weight）：与边数有关的数据信息。
* 带权图：边上带权的图称为带权图或网。
* 路径：
* 路径长度：
* 回路：
* 简单路径：
* 简单回路：
* 子图：
* 连通的：
* 连通图：
* 连通分量：
* 强连通图：
* 强连通分量：

## 典型案例

## 图的类型定义

```c
ADT Graph
{
    数据对象：
    V = {}
    数据关系：
    基本运算：
} ADT Graph
```

## 图的存储结构

#### 邻接矩阵

```c
// 最大顶点数设为 20
#define MaxVertexNum 20
// 顶点类型设为字符型
typedef char VertexType;
// 边的权值设为整型
typedef int EdgeType;
typedef struct
{
    // 顶点表
    VertexType vexs[MaxVertexNum];
    // 邻接矩阵，即边表
    EdgeType edges[MaxVertexNum][MaxVertexNum];
    // 顶点数和边数
    int n, e;
} Graph;            // Graph 是以邻接矩阵存储的图类型

// 建立无向图 G 的邻接矩阵存储
void CreateGraph(Graph * &G)
{
    int i, j, k;
    printf("请输入顶点数和边数(输入格式为: 顶点数, 边数): \n");
    // 输入顶点数和边数
    scanf("%d, %d, ", &(G -> n), &(G -> e));
    printf("请输入顶点信息(输入格式为:顶点号<CR>):\n");
    for(i = 0; i < G -> n; i++)
    {
        getchar();
        // 输入顶点信息，建立顶点表
        scanf("\n%c", &(G -> vexs[i]));
    }
    for(i = 0; i < G -> n; i++)
    {
        for(j = 0; j < G -> n; j++)
        {
            // 初始化邻接矩阵
            G -> edges[i][j] = 0;
        }
    }
    printf("请输入每条边对应的两个顶点的序号(输入格式为:i, j): \n");
    // 输入 e 条边，建立邻接矩阵
    for(k = 0; k < G -> e; k++)
    {
        scanf("%d, %d", &i, &j);
        // 假设权值均为 1
        G -> edges[i][j] = G -> edges[j][i] = 1;
        getchar();
    }
}
```

#### 邻接表

```c
// 最大顶点数为 20
#define MaxVerNum 20
// 边表结点
typedef struct node
{
    // 邻接点数据域
    int adjVertex;
    // 指向下一个邻接点的指针域
    struct node * next;
    // 若要表示边上信息，则应增加一个数据域 weight
} EdgeNode;

// 顶点表结点
typedef struct vnode
{
    // 顶点数据域
    VertexType vertex;
    // 指向第一条依附该顶点的边的指针
    EdgeNode * firstEdge;
} VertexNode;

// AdjList 是邻接表类型
typedef VertexNode AdjList[MaxVerNum];
typedef struct
{
    // 邻接表
    AdjList adjlist;
    // 定点数和边数
    int n, e;
} ALGraph;          // ALGraph 是以邻接表方式存储的图类型

// 建立一个无向图的邻接表存储的算法：
void CreateALGraph(ALGraph * &G)
{
    int i, j, k;
    EdgeNode * s1, * s2;
    printf("请输入定点数和边数(输入格式为: 定点数, 边数): \n");
    // 读入顶点数和边数
    scanf("%d, %d", &(G -> n), &(G -> e));
    printf("请输入顶点信息(输入格式为: 顶点号<CR>): \n");
    // 建立有 n 个顶点的顶点表
    for(i = 0; i < G -> n; i++)
    {
        // 读入顶点信息
        scanf("\n%c", &(G -> adjlist[i].vertex));
        // 顶点的边表头指针设为空
        G -> adjlist[i].firstEdge = NULL;
    }
    printf("请输入边的信息(输入格式为: i, j): \n");
    // 建立边表
    for(k = 0; k < G -> e; k++)
    {
        // 读入边 <v_i, v_j> 的顶点对应序号
        scanf("\n%d, %d", &i, &j);
        // 生成新边表结点 s
        s1 = (EdgeNode *) malloc (sizeof(EdgeNode));
        // 邻接表序号为 j
        s1 -> adjVertex = j;
        s1 -> next = G -> adjlist[i].firstEdge;
        // 将新结点插入顶点 v_i 的边表头部
        G -> next = G -> adjlist[i].firstEdge;
        // 生成另一个对称的新边表结点 s
        s2 = (EdgeNode *) malloc (sizeof(EdgeNode));
        // 邻接点序号为 i
        s2 -> adjVertex = i;
        s2 -> next = G -> adjlist[j].firstEdge;
        // 将新结点插入顶点 v_j 的边表头部
        G -> adjlist[j].firstEdge = s2;
    }
}
```

#### 十字链表

```c
#define MAX_VERTEX_NUM 20

typedef struct ArcBox
{
    // 
    int tailvex, headvex;
    // 
    struct ArcBox * hlink, tlink;
    // 
    InfoType info;
} ArcBox;

typedef struct VexNode
{
    VertexType vertex;
    // 
    ArcBox firstin, firstout;
} VexNode;

typedef struct
{
    // 
    VexNode xlist[MAX_VERTEX_NUM];
    // 
    int vexnum, arcnum;
} ALGraph;

```

## 图的遍历

#### 深度优先搜索

* 深度优先搜索的过程
* 深度优先搜索遍历的实现

```c
// 
void DFSTraverseAL(ALGraph * G)
{
    int i;
    for(i = 0; i < G -> n; i++)
    {
        // 
        visited[i] = FALSE;
    }
    for(i = 0; i < G -> n; i++)
    {
        if(!visited[i])
        {
            // 
            DFSAL(G, i);
        }
    }
}

// 
void DFSAL(ALGraph * G, int i)
{
    EdgeNode * p;
    // 
    printf("visit vertex: V%c\n", G -> adjlist[i].vertex);
    // 
    visited[i] = TRUE;
    // 
    P = G -> adjlist[i].firstedge;
    // 
    while(p)
    {
        if(!visited[p -> adjvex])
        {
            DFSAL(G, p -> adjvex);
        }
        // 
        p = p -> next;
    }
}
```

* 深度优先搜索的算法分析

#### 广度优先搜索

* 广度优先搜索遍历的过程
* 广度优先搜索遍历的实现

```c
// 
void BFSTraverseAL(MGraph * G)
{
    int i;
    for(i = 0; i < G -> n; i++)
    {
        // 
        visited[i] = FALSE;
    }

    for(i = 0; i < G -> n; i++)
    {
        if(!visited[i])
        {
            // 
            BFSM(G, i);
        }
    }
}

// 
void BFSM(MGraph * G, int k)
{
    int i, j;
    CirQueue Q;
    InitQueue(&Q);
    // 
    printf("visit vertex: V%c\n", G -> vexs[k]);
    visited[k] = TRUE;
    // 
    EnQueue(&Q, k);
    while(!QueueEmpty(&Q))
    {
        // 
        i = DeQueue(&Q);
        // 
        for(j = 0; j < G -> n; j++)
        {
            // 
            if((G -> edges[i][j] == 1) && (!visited[j]))
            {
                // 
                printf("visit vertex: V%c\n", G -> vexs[j]);
                visited[j] = TRUE;
                // 
                EnQueue(&Q, j);
            }
        }
    }
}

```



* 广度优先搜索遍历的算法分析

## 图的连通性

## 图的应用

#### 最小生成树

* 基本概念
* Prim 算法

```c
void Prim(int gm[ ][MAXNODE], int n, int closevertex[ ])
{
    int lowcost[100], mincost;
    int i, j , k;
    for(i = 1; i < n; i++)
    {
        lowcost[i] = gm[0][i];
        closevertex[i] = 0;
    }

    // 
    lowcost[0] = 0;
    closevertex[0] = 0;
    // 
    for(i = 1; i < n; i++)
    {
        // 
        mincost = MAXCOST;
        j = 1;
        k = 1;
        while(j < n)
        {
            if((lowcost[j] < mincost) && (lowcost[j] != 0)) 
            {
                mincost = lowcost[j];
                k = j;
            }
            j++;
        }
        printf("顶点的序号 = %d, 边的权值 = %d\n", k, mincost);
        lowcost[k] = 0;
        // 
        for(j = 1; j < n; j++)
        {
            if(gm[k][j] < lowcost[j])
            {
                lowcost[j] = gm[k][j];
                closevertex[j] = k;
            }
        }
    }
}
```

* Kruskal 算法

#### 最短路径

#### 拓扑排序

* AOV网
* 拓扑排序

#### 关键路径

* AOE网
* 关键路径

## 案例分析与实现

## 小结
