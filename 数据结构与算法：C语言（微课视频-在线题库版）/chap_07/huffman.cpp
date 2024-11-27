#include <stdio.h>

#define MAXLEN 100

typedef struct
{
    // 结点权值
    int weight;
    // 左孩子权值，右孩子权值，双亲结点的数组下标
    int lchild, rchild, parent;
} HuffNode;         // 定义哈夫曼树每个结点的数据类型

// 定义哈夫曼树结点类型数组
typedef HuffNode HuffTree[MAXLEN];

// 全局变量，定义叶子结点个数
int count;

// 哈夫曼数组元素初始化
void InitHuffman(HuffTree tree)
{
    printf("请输入共有多少个权值(小于100): ");
    // 从键盘上输入叶子结点个数
    scanf("%d", &count);
    getchar();
    for(int i = 0; i < 2 * count - 1; i++)
    {
        tree[i].weight = 0;
        tree[i].lchild = -1;
        tree[i].rchild = -1;
        tree[i].parent = -1;
    }
}

// 输入叶子结点的权值
void InputWeight(HuffTree tree)
{
    int weight;
    for(int i = 0; i < count; i++)
    {
        printf("输入第 %d 个叶子结点的权值", i + 1);
        scanf("%d", &weight);
        getchar();
        tree[i].weight = weight;
    }
}

// 查询数组中没有确定双亲结点的结点集合中权值最小的两个结点
void FindTwoMin(HuffTree tree, int i, int * p1, int * p2)
{
    int min1 = 65536;
    int min2 = 65536;
    int j;
    // 查询权值最小的结点
    for(j = 0; j <= i; j++)
    {
        // 结点没有确定双亲
        if(tree[j].parent == -1)
        {
            if(min1 > tree[j].weight)
            {
                min1 = tree[j].weight;
                *p1 = j;
            }
        }
    }

    // 查询权值第二小的结点
    for(j = 0; j <= i; j++)
    {
        if(tree[j].parent == -1)
        {
            // 且不是权值最小结点
            if((min2 > tree[j].weight) && (j != p1))
            {
                min2 = tree[j].weight;
                * p2 = j;
            }
        }
    }
}

// 建立哈夫曼树
void CreateHuffman(HuffTree tree)
{
    int i, n1, n2;
    InitHuffman(tree);
    InputWeight(tree);
    // 计算集合中权值最小的两结点双亲结点权值
    for(i = count; i < 2 * count - 1; i++)
    {
        FindTwoMin(tree, i - 1, &n1, &n2);
        tree[n1].parent = tree[n2].parent = i;
        tree[i].lchild = tree[n1].weight;
        tree[i].rchild = tree[n2].weight;
        tree[i].weight = tree[n1].weight + tree[n2].weight;
    }
}

// 输出哈夫曼树
void PrintHuffman(HuffTree tree)
{
    int i, k = 0;
    for(i = 0; i < 2 * count - 1; i++)
    {
        while(tree[i].lchild != -1)
        {
            if(!(k % 2))
            {
                printf("\n");
            }
            printf("(%d, %d)", tree[i].weight, tree[i].lchild);
            printf(", (%d, %d)", tree[i].weight, tree[i].rchild);
            k++;
            break;
        }
    }
}

// 输出每个叶子结点编码，从叶子到根结点进行输出编码
void HuffmanNode(HuffTree tree, int i)
{
    int j = tree[i].parent;
    if(tree[j].rchild == tree[i].weight)
    {
        printf("1");
    }
    else 
    {
        printf("0");
    }

    // 一直访问到根结点结束
    if(tree[j].parent != -1)
    {
        // 递归调用
        i = j, HuffmanNode(tree, i);
    }
}

// 输出所有叶子结点编码
void HuffmanCode(HuffTree tree)
{
    int i, k = 0;
    printf("\n");
    // i 的取值范围是叶子结点存放的数组下标范围
    for(i = 0; i < count; i++)
    {
        // k 控制输出换行
        if(!(k % 2))
        {
            printf("\n");
        }

        printf(" %i:", tree[i].weight);
        k++;
        HuffmanNode(tree, i);
    }
}

// 主函数
int main(void)
{
    HuffTree ht;
    CreateHuffman(ht);
    PrintHuffman(ht);
    HuffmanCode(ht);
    printf("\n");
    return 0;
}