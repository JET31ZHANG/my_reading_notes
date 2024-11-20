## 查找的基本概念

* 查找表
* 关键字
* 查找
* 动态查找和静态查找
* 内查找和外查找
* 平均查找长度

## 典型案例

## 线性表查找

#### 顺序查找

```c
// 数据元素类型定义：
typedef struct
{
    // 关键字域
    KeyType key;
    // 其他域
    InfoType otherinfo;
} ElemType;

// 顺序存储结构定义：
typedef struct
{
    // 数组基地址
    ElemType * elem;
    // 表长度
    int length;
} STBL;

// 顺序查找算法：
// 在顺序表 st 中查找关键字为 key 的数据元素
int SSearch(STBL st, KeyType key)
{
    // 0 号单元留作监视位，用来存放带查找的值 key
    st.elem[0].key = key;
    // 从表尾端向前找
    for(i = st.length; st.elem[i].key != key; i--)
    return i;
}
```



#### 折半查找

```c
/*
*	算法步骤：
*			（1）low = 0; high = length - 1;					// 设置初始区间
*			（2）当 low > high 时，查找失败;						// 查找子表空，查找失败
*			（3）low <= high, mid = (low + high) / 2;			// 取中间位置
*				a. 若 key == st.elem[mid].key, 返回数据元素在表中的位置		 // 查找成功
*				b. 若 key < st.elem[mid].key，high = mid - 1; 转步骤（2）	// 查找在左半区进行
*				c. 若 key > st.elem[mid].key，low = mid + 1;  转步骤（2）	// 查找在右半区进行
*/

// 算法描述：
int BinSearch(STBL st, KeyType key)
{
    int low = 0, high = st.length - 1, mid;
    // 当前区间存在元素时循环
    while(low <= high)
    {
        mid = (low + high) / 2;
        // 查找成功返回元素在表中位置，即逻辑序号 mid + 1
        if(st.elem[mid].key == key)
        {
            return mid + 1;
        }

        // 继续在 st.elem[low..mid - 1] 中查找
        if(st.elem[mid].key > key)
        {
            high = mid - 1;
        }
        else 
        {
            // 继续在 st.elem[mid + 1..high] 中查找
            low = mid + 1;
        }
    }
    return 0;
}
```

#### 分块查找

## 树表的查找

#### 二叉排序树

* 定义
* 查找

```c
/*
*	算法步骤：
*			（1）若查找树为空，查找失败，返回空指针
*			（2）若查找树非空，将给定值 key 与查找树的根结点关键字比较
*				a. 若相等，查找成功，返回根结点指针
*				b. 若 key 小于根结点关键字，在左子树上递归查找
*				c. 若 key 大于根结点关键字，在右子树上递归查找
*/

/* 以二叉链表作为二叉排序树的存储结构 */
// 定义结点类型
typedef struct
{       
    // 关键字字段
    KeyType key;
    // 其他数据字段
    InfoType otherinfo;
} ElemType;                         // 结点数据类型

typedef struct BSTNode
{
    // 数据元素字段
    ElemType data;
    // 左、右孩子指针字段
    struct BSTNode * lc, * rc;
} BSTNode * BSTree;                 // 二叉树结点类型

// 算法描述：
BSTree BSTSearch(BSTree bt, KeyType key)
{
    /* 在树 bt 中递归查找关键字等于 key 的元素，若成功则返回指向该元素结点的指针，否则返回空指针 */
    // 树为空或已找到，查找结束
    if((bt == NULL) || (key == bt -> data.key))
    {
        return bt;
    }
    else if (key < bt -> data.key)
    {
        // 在左子树中继续查找
        return BSTSearch(bt -> lc, key);
	}
    else
    {
        // 在右子树中继续查找
        return BSTSearch(bt -> rc, key);
    }
}
```

* 插入

```c
/*
*	算法步骤：
*			（1）若二叉排序树为空，则待插入的新结点 * N 作为根结点插入空树中
*			（2）若二叉排序树非空，则将key与根结点的关键字 bt -> data.key 进行比较
*				a. 若 key 小于 bt -> data.key，则将 * N 插入左子树
*				b. 若 key 大于 bt -> data.key，则将 * N 插入右子树
*/

// 算法描述：
void BSTInsert(BSTree &bt, ElemType elem)
{
/* 当 bt 中不存在关键字等于 elem.key 的元素时，则插入该元素 */
    // 原树为空，新插入的结点为根结点
    if(bt == NULL)
    {
        BSTree N = (BSTNode *) malloc (sizeof(BSTNode));
        N -> data = elem;
        N -> lc = N -> RC = NULL;
        bt = N;
    }
    else if(elem.key < bt -> data.key)
    {
        // 将 * N 插入左子树
        BSTInsert(bt -> lc, elem);
	}
    else
    {
        // 将 * N 插入右子树
        BSTInsert(bt -> rc, elem);
    }
}
```

* 创建

```c
/*
*	算法步骤：
*			（1）将二叉排序树 bt 初始化为空树
*			（2）当 i < n 时，循环执行将 arr[i] 插入二叉排序树 bt 中
*/

// 算法描述：
BSTNode * BSTCreate(KeyType arr[], int n)
{
/* 返回二叉排序树根节点指针 */ 
    // 初始化 bt 为空
    BSTNode * bt = NULL;
    int i = 0;
    while(i < n)
    {
        ElemType elem;
        elem.key = arr[i];
        // 在 bt 中插入关键字 arr[i]
        BSTInsert(bt, arr[i]);
        i++;
    }
    // 返回根指针
    return bt;
}
```

* 删除

```c
/*
*	算法步骤：
*			设待删除的结点为 *p（p 为指向待删结点的指针），其双亲结点为 *f，其左子树 pl 及右子树 pr：
*			（1）*p 结点为叶结点，由于删去叶结点后不影响整棵树的特性，所以，只需将被删结点的双亲结点相应指针域改为空指针；
*			（2）*p 结点只有左子树 pl 或只有右子树 pr，此时，只需让 pl 或 pr 成为双亲结点 *f 的左子树即可；
*			（3）*p 结点既有左子树 pl 又有右子树 pr，可按中序遍历保持有序进行调整。
*			设删除 *p 结点前，中序遍历序列为：{...B1,B,...Q1,Q,S1,S,P,Pr,F,...}，则删除 *p 结点后，可有两种处理方法
*				方法 a：令 *p 左子树为 *f 的左子树，而 *p 的右子树为 *s 的右子树 
*				方法 b：令 *p 的直接前驱（或直接后继）代替 *p，再从树中删除它的直接前驱（或直接后继）
*/

// 算法描述：
void BSTDelete(BSTree &bt, KeyType key)
{
    // 从二叉排序树中删除关键字等于 key 的结点
    BSTNode * p = bt;
    // 初始化
    BSTNode * f = NULL, * q = NULL, * s = NULL;
    // 从根开始查找关键字等于 key 的结点 * p
    while(p)
    {
        // 找到关键字等于 key 的结点 *p，跳出循环
        if(p -> data.key == key)
        {
            break;
        }
        f = p;
        if(p -> data.key > key)
        {
            p = p -> lc;
        }
        else 
        {
            p = p -> rc;
        }
    }

    // 找不到被删结点
    if(p == NULL)
    {
        return;
    }

    /* 处理3种情况：*p 左右子树均不空、只有左子树、只有右子树 */ 
    // 左右子树均不空
    if((p -> lc) && (p -> rc))
    {
        q = p;
        s = p -> lc;
        while(s -> rc)
        {
            q = s;
            s = s -> rc;
        }

        p -> data = s -> data;
        if(q != p)
        {
            q -> rc = s -> lc;
        }
        else 
        {
            q -> lc = s -> lc;
        }
        delete s;
        return;
    }
    // 被删结点只有左子树
    else if(!p -> rc)
    {
        q = p;
        p = p -> lc;
    }
    // 被删结点只有右子树
    else if(!p -> lc)
    {
        q = p;
        p = p -> rc;
    }

    // 将 p 所指的子树接到其双亲结点 * f 相应位置上
    if(!f)
    {
        bt = p;
    }
    else if(q == f -> lc)
    {
        f -> lc = p;
    }
    else
    {
        f -> rc = p;
    }
    delete q;
}
```

#### 平衡二叉树

* LL型
* RR型
* LR型
* RL型

## 哈希表查找

#### 哈希表的基本概念

#### 哈希表的构造方法

* 除留余数法
* 直接定址法
* 数字分析法
* 折叠法

#### 哈希冲突的解决方法

* 开放定址法
* 拉链法

#### 哈希表查找算法分析

## 案例分析与实现

## 小结

* 查找的基本概念
* 线性表查找
* 树表查找
* 哈希表查找
