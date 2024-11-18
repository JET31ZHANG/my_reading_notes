## 递归的定义

#### 递归的基本概念

#### 何时使用递归

* 问题的定义是递归的

  ```c
  long Factorial(long n)
  {
      if(n == 1)
          return 1;
      else
          return n * Factorial(n - 1);
  }
  ```

* 问题所涉及的数据结构是递归的

  ```c
  typedef struct LNode
  {
      ElemType data;
      struct LNode * next;
  } LinkNode;
  ```

* 问题的解法满足递归的性质

#### 递归模型

```c
long Factorial(long n)
{
    if(n == 1)
        return 1;
    else
        return n * Factorial(n - 1);
}
```

## 递归调用的实现原理

## 递归算法的设计

#### 递归算法设计步骤

```c
Elemtype Max(SqList L, int i, int j)
{
    int mid;
    ElemType max, max_r, max_l;
    if(i == j)
        max = L.data[i];
    else 
    {
        mid = (i + j) / 2;
        max_r = Max(L, i, mid);
        max_l = Max(L, mid + 1, j);
        if(max_r > max_l)
            max = max_r;
        else
            max = max_l;
    }
    return max;
}
```



#### 递归数据结构的递归算法设计

```c
/*
*	结构体 Lnode 的定义中用到了其自身，即指针域 next 是一种指向自身类型的指针，这是一种递归数据结构。
*	对于递归数据结构，采用递归的方法编写，方便有效。
*/
typedef struct Lnode
{
    ElemType data;
    struct LNode * next;
} LinkList;

// 求一个不带头结点的单链表 head 的所有 data 域之和的递归算法
ElemType Sum(LinkList * L)
{
    if(L == NULL)
        return 0;
    else
        return L -> data + Sum(L -> next);
}
```

#### 递归求解方法的递归算法设计

```c
/*
*	汉诺塔问题
*	设Hanoi(n, x, y, z)表示将 n 个盘片从 X 通过 Y 移动到 Z 上
*	递归分解的过程：
				Hanoi(n-1, x, z, y);
				Move(n, x, z);		// 将第 n 个圆盘从 X 移到 Z
				Hanoi(n-1, y, x, z);
*				
*/
void Hanoi(int n, char x, char y, char z)
{
    if(n == 1)
        printf("将第 %d 个盘子从 %c 上移动到 %c 上.\n", n, x, z);
    else
    {
        Hanoi(n-1, x, z, y);
        printf("将第 %d 个盘子从 %c 上移动到 %c 上.\n", n, x, z);
        Hanoi(n-1, y, x, z);
    }
}
/*
	递归思路——依照移动规则向一个方向移动盘片：
	如果只有一个盘片，则把盘片从X移动到Z，结束。
	如果有n个盘片，则把前 n-1 个盘片移动到辅助的 Y，然后把 X 上的盘片移动到 Z，最后再把前 n-1 个移动到 Z。
*/
```

## 小结

* 介绍了递归的基本概念
* 介绍了递归调用的实现原理，并说明递归执行的过程
* 介绍了递归算法的设计方法
