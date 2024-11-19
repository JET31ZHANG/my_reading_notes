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

#### 折半查找

```c
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
	算法步骤：
*/

// 算法描述：
BSTree BSTSearch(BSTree bt, KeyType key)
{
    // 
    if((bt == NULL) || (key == bt -> data.key))
    {
        return bt;
    }
    else if (key < bt -> data.key)
    {
        //
        return BSTSearch(bt -> lc, key);
	}
    else
    {
        //
        return BSTSearch(bt -> rc, key);
    }
}
```

* 插入

```c
void BSTInsert(BSTree &bt, ElemType elem)
{
// 当 bt 中不存在关键字等于 elem.key 的元素时，则插入该元素
    
    // 
    if(bt == NULL)
    {
        BSTree N = (BSTNode *) malloc (sizeof(BSTNode));
        N -> data = elem;
        N -> lc = N -> RC = NULL;
        bt = N;
    }
    else if(elem.key < bt -> data.key)
    {
        // 
        BSTInsert(bt -> lc, elem);
	}
    else
    {
        // 
        BSTInsert(bt -> rc, elem);
    }
}
```

* 创建

```c
BSTNode * BSTCreate(KeyType arr[], int n)
{
// 
    //
    BSTNode * bt = NULL;
    int i = 0;
    while(i < n)
    {
        ElemType elem;
        elem.key = arr[i];
        // 
        BSTInsert(bt, arr[i]);
        i++;
    }
    // 
    return bt;
}
```



* 删除

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
