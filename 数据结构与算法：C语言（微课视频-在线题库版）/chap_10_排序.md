## 排序的基本概念

```c
// datatype 为序列中的数据类型
typedef int datatype;
typedef struct
{
    // 关键字字段，可以是整型、字符串型、构造类型等
    datatype key;
    ......
} rectype;
```

## 典型案例

## 插入排序

#### 直接插入排序

```c
// 直接插入排序
void Insert_Sort(rectype r[])
{
    // NUM 为实际输入的记录数
    int i, j, n = NUM;
    // i <= NUM 条件很重要
    for(i = 2; i <= n; i++)
    {
        // r[0] 是监视哨
        r[0] = r[i];
        // 依次插入记录 r[1], ... , r[NUM]
        j = i - 1;
        // 查找 r[i] 合适插入位置
        while(r[0].key < r[j].key)
            // 将大于 r[i].key 记录后移
            r[j + 1] = r[j--]
        // 将 r[i] 插到有序表合适位置上
        r[j + 1] = r[0];
	}
}
```

#### 希尔排序

```c
void Shell_Sort(rectype r[])
{
    // change 为交换标志，jump 为增量步长
    int i, n, jump, change, temp, m;
    // NUM 为顺序表的实际长度
    jump = NUM;
    N = NUM;
    while(jump > 0)
    {
        // 取步长 di + 1 = di / 2;
        jump = jump / 2;
        do
        {
            // 表示未交换
            change = 0;
            for(i = 1; i <= n - jump; i++)
            {
                // 取增量为 di + 1 = di / 2 的希尔排序 - 2
                m = i + jump;
                if(r[i].key < r[m].key)
                {
                    temp = r[m].key;
                    r[m].key = r[i].key;
                    r[i].key = temp;
                    // 表示有交换
                    change = 1;
                }
            }	// 本趟排序完成
       	// 当 change = 0 时终止本趟排序
        } while(change == 1);			// 当 jump = 1 且 change = 0 时终止
    }
}
```

## 交换排序

#### 冒泡排序

```c
void Bubble_Sort(rectype r[])
{
    // noswap 为交换标志
    int i, j, noswap = 0, n = NUM;
    rectype temp;
    // 进行 n-1 趟冒泡排序
    for(i = 1; i < n; i++)
    {
        // noswap = 1 表示没有记录交换
        noswap = 1;
        // 从下往上扫描
        for(i = 1; i < n; i++)
        {
            // 交换记录
            temp.key = r[j - 1].key;
            r[j - 1].key = r[j].key;
            r[j].key = temp.key;
            noswap = 0;
        }
        if(noswap)
        {
            break;
        }
    }
}
```

#### 快速排序

```c
// 快速排序算法中一趟划分函数
int Partition(rectype r[ ], int s, int t)
{
    int i, j;
    rectype temp;
    // 初始化，temp 为基准记录
    i = s;
    j = t;
    temp = r[i];
    do{
        while((r[j].key >= tmp.key) && (i < j))
            j--;
        if(i < j)
            // 交换 r[i] 和 r[j]
            r[i++] = r[j];
        while((r[i].key <= temp.key) && (i < j))
            i++;
        if(i < j)
            // 交换 r[i] 和 r[j]
            r[j--] = r[i];
    } while(i != j);		// i = j，则一次划分结束
    r[i] = temp;
    // 最后将基准记录 temp 定位
    return(i);
}

void Quick_Sort(rectype r[ ], int hs, int ht)
{
    int i;
    // 只有一个或无记录时不需要排序
    if(hs > ht)
    {
        // r[hs] 到 r[ht] 一次划分
        i = partition(r, hs, ht);
        // 递归处理左区间
        Quick_Sort(r, hs, i - 1);
        // 递归处理右区间
        Quick_Sort(r, i + 1, ht);
    }
}
```

## 选择排序

#### 直接选择排序

```c
// 直接选择排序函数
void Select_Sort(rectype r[ ])
{
    rectype temp;
    // NUM 为实际输入记录数
    int i, j, k, n = NUM;
    // 做 n - 1 趟选择排序
    for(i = 0; i <= n; i++)
    {
        k = i;
        for(j = i + 1; j < n; j++)
        {
            if(r[j].key < r[k].key)
            {
                k = j;
            }
        }
        if(k != i)
        {
            // 交换记录 r[i] 和 r[k]
            temp = r[i];
            r[i] = r[k];
            r[k] = temp;
        }
    }
}
```

#### 堆排序

```c
// 堆的筛选算法 —— 在 r[i] 到 r[m] 中调整堆
void Shift(rectype r[ ], int i, int m)
{
    int j;
    rectype temp;
    temp = r[i];
    j = 2 * i;
    // j <= m, r[2 * i] 是 r[i] 的左孩子
    while(j <= m)
    {
        if((j < m) && (r[j].key < r[j + 1].key))
        {
            // j 指向 r[i] 左右孩子关键字大者
            j++;
        }
        // 若孩子关键字大于父亲结点
        if(temp.key < r[j].key)
        {
            // 将 r[j] 调到父亲结点的位置上
            r[i] = r[j];
            // 修改 i 和 j 的值，以便继续“筛”结点
            i = j;
            j = 2 * i;
        }
        else
        {
            j = m + 1;
        }
    }       // 调整完毕，退出循环
    // 将被筛选的结点放入正确的位置
    r[i] = temp;
}

// 对数组 r[1] 到 r[NUM] 进行堆排序
void Heap_Sort(rectype r[ ])
{
    rectype temp;
    int i, n;
    // NUM 为数组的实际长度
    n = NUM;
    // 建立初始堆
    for(i = n / 2; i > 1; i--)
    {
        Shift(r, i, n);
    }

    // 进行 n - 1 趟筛选、交换和调整
    for(i = n; i > 1; i--)
    {
        // 将堆顶元素 r[1] 与最后一个元素交换
        temp = r[1];
        r[1] = r[i];
        r[i] = temp;
        // 将元素 r[1] 到 r[i - 1] 重新调整为堆
        Shift(r, 1, i - 1);
    }
}

```

## 归并排序

#### 一次归并

```c
void Merge(rectype r[ ], rectype a[ ], int low, int mid, int high)
// 两个相邻有序子表，合并结果存到 r[low] ~ r[high] 中
{
    int i, j, k;
    i = low;
    j = mid + 1;
    k = low;

    // 两个相邻有序子表归并
    while((i <= mid) && (j <= high))
    {
        // 取两表中小者复制
        if(a[i].key <= a[j].key)
        {
            r[k++] = a[i++];
        }
        else 
        {
            r[k++] = a[j++];
        }
    }

    while(i <= mid)
    {
        // 复制第一个有序子表剩余记录
        r[k++] = a[i++];
    }

    while(j <= high)
    {
        // 复制第二个有序子表剩余记录
        r[k++] = a[j++];
    }
}
```

#### 一趟归并排序

```c
// 二路归并 —— 依次将相邻的有序子表两两归并
void Merge_pass(rectype r[ ], rectype r1[ ], int length)
// 对数组 R 进行一趟归并，并将结果存放在数组 R1 中，length 是一趟归并中有序子表长度
{
    // NUM 为数组的实际长度
    int i, j, n = NUM;
    // i 指向第一对有序子表的起点
    i = 1;
    while((i + 2 * length - 1) <= n)
    {
        merge(r, r1, i, i + length - 1, i + 2 * length - 1);
        // i 指向下一对有序子表的起点
        i = i + 2 * length;
    }

    // 处理表长不足 2 * length 的部分
    if(i + length - 1 < n)
    {
        merge(r, r1, i, i + length - 1, n);
    }
    // 处理子文件个数为奇数，表长小于 length
    else 
    {
        // 将最后一个有序子表复制到 r1 中
        for(j = i; j <= n; j++)
        {
            r1[j] = r[j];
        }
    }
}
```

#### 二路归并排序

```c
void Merge_Sort(rectype r[ ])
{
    int i, length, r[MAX], r1[MAX];
    // 归并长度从 1 开始
    length = 1;
    while(length < NUM)
    {
        // 一趟归并结果放 r1 中
        merge_pass(r, r1, length);
        // 归并后有序表的长度加倍
        length = 2 * length;
        // 再次归并，结果放 r 中
        Merge_pass(r1, r, length);
        // 将归并后有序表长度加倍
        length = 2 * length;
    }
}
```

## 各种内排序方法的比较和选择

## 案例分析与实现

## 小结

* 排序
  * 内部排序：
  * 外部排序：
* 插入排序的原理：
* 交换排序的原理：
* 选择排序的原理：
* 归并排序的原理：
