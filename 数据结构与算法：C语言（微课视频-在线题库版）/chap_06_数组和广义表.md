## 多维数组的定义

#### 数组的逻辑结构

#### 数组的物理结构

* 一维数组的物理结构
* 二维数组的物理结构

## 典型案例

## 特殊矩阵

#### 对称矩阵

#### 三角矩阵

#### 对角矩阵

## 稀疏矩阵

#### 稀疏矩阵的定义

#### 稀疏矩阵的三元组表存储

```c
#define MAX N				// N 表示一个足够大的数
typedef struct
{
    int i;					// 非零元素的行序号
    int j;					// 非零元素的行序号
    ElemType v;				// 非零元素值
} LOTNode;					// 三元组类型
typedef struct
{
    int r;					// 稀疏矩阵的总行数
    int c;					// 稀疏矩阵的总列数
    int n;					// 稀疏矩阵的非零元素个数
    LOTNode data[MAX];		// 三元组表
} LOTMatrix;				// 三元组表的存储类型
```



#### 稀疏矩阵的十字链表存储

```c
typedef struct node
{
    int row;
    int col;
    struct node * dlink;
    struct node * right;
    union
    {
        ElemType value;
        struct node * link;
    } next;
} DNode;
```

## 广义表

#### 广义表的定义和基本运算

#### 广义表的存储

```c
typedef struct Gnode
{
    int tag;
    union
    {
        struct Gnode * listadd;
        ElemType data;
    } optional;
    struct Gnode * next;
} GList;
```



#### 广义表的基本操作

* 求广义表的长度

  ```c
  /*
  *	算法步骤：
  *			（1）定义计数变量 n 的初值为 0；
  *			（2）定义指向广义表结点类型的指针变量q，并令其指向广义表的第一个元素；
  *			（3）当 q 不等于空时进入循环，q 指向第一个层次的下一个结点，计数变量 n 加 1。
  */
  int Length(GList * p)
  {
      // 计数变量初值为 0
      int n = 0;					
      GList * q;
      // q 指向广义表的第一个元素
      q = p -> optional.Listadd;	
      while(q != NULL)
      {
          n++;
          q = q -> next;
      }
      return n;
  }
  ```

* 求广义表的深度

  ```c
  /*
  *	算法步骤：
  *			（1）令指针变量 p 指向广义表的头结点，如果 p -> tag == 0 成立，则该广义表是一个原子，则返回 0；
  *			（2）定义指向广义表结点类型的指针变量 q，并令其指向广义表的第一个元素，如果 q == NULL 成立，则该广义表是一个空表，并返回 1；
  *			（3）若均不满足上述两种情况，当 q != NULL 时进入循环，采用递归的方式计算出该广义表的深度。
  */
  int Depth(GList * p)
  {
      int max = 0, deep;
      GList * q;
      // 广义表是一个原子，返回 0
      if(p -> tag == 0)			
          return 0;
      // q 指向广义表的第一个元素
      q = q -> optional.Listadd;	
      // 广义表是一个空表，返回 1
      if(q == NULL)				
          return 1;
      while(q != NULL)
      {
          if(q -> tag == 1)
          {
              // 递归方式求广义表的深度
              deep = Depth(q);	
              if(deep > max)
                  max = deep;
          }
          q = q -> next;
      }
      return max + 1;
  }
  ```

## 案例分析与实现

## 小结

* 数组：对称矩阵、三角矩阵、对角矩阵和稀疏矩阵的压缩存储方式
* 广义表：存储方式及基本运算的实现方法
