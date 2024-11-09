## 栈的定义及特点

## 栈的典型案例

## 栈的抽象数据类型定义

## 栈的顺序存储

#### 顺序栈的定义

```c
/*** 顺序栈 ***/

#define MAXSIZE 100				// MAXSIZE 是顺序栈最多可能存储的元素个数
typedef struct SequenceStack	// 以整数类型的数据元素为例
{
	ElemType data[MAXSIZE];
	int top;					// 栈顶指针，表示栈顶元素的数组下标
} SqStack;						// 顺序栈类型
```



#### 顺序栈的存储状态

#### 顺序栈的入栈、出栈

* 入栈
* 出栈

#### 顺序栈的基本操作

* 顺序栈的初始化

  ```c
  /* 顺序栈的初始化 */ 
  void InitStack(SqStack * &s)
  {
  	s = (SqStack *) malloc (sizeof(SqStack));	// 为顺序栈动态申请空间
  	s -> top = -1;								// 空顺序栈的标识
  }
  ```

  

* 判断顺序栈是否为空

  ```c
  /* 判断顺序栈是否为空 */
  bool StackEmpty(SqStack * s)
  {
  	return s -> top = -1;
  }
  ```

  

* 入栈操作

  ```c
  /* 入栈操作 */
  bool Push(SqStack * &s, ElemType e)
  {
  	if(s -> top == MAXSIZE - 1)	// 栈满的情况，即栈上溢出
  	{
  		return false;
  	}
  	
  	s -> top++;					// 修改栈顶指针，加 1
  	s -> data[s -> top] = e;	// 元素入栈
  	return true;
  }
  ```

  

* 出栈操作

  ```c
  /* 出栈操作 */
  bool Pop(SqStack * &s, ElemType &e)
  {
  	if(e -> top == -1)			// 栈为空的情况，即栈下溢出
  	{
  		return false;
  	}
  	
  	e = s -> data[s -> top];	// 将栈顶元素赋值给形参 e
  	s -> top--;					// 修改栈顶指针，减 1
  	return true;
  }
  ```

  

* 读取栈顶元素

  ```c
  /* 读取栈顶元素 */
  bool GetTop(SqStack * &s, ElemType &e)
  {
  	if(s -> top == -1)			// 栈为空的情况，即栈下溢出
  	{
  		return false;
  	}
  	
  	e = s -> data[s -> top];	// 将栈顶元素赋值给形参 e
  	return true;
  }
  ```

  

* 销毁顺序栈

  ```c
  /* 销毁顺序栈 */
  void DestroyStack(SqStack * &s)
  {
  	free(s);					// 销毁指针 s 指向的顺序栈空间
  	s = NULL;
  }
  ```

  

## 栈的链式存储

#### 链栈的定义

```c
/****** 链栈 ******/
typedef int ElemType;
typedef struct linknode
{
	ElemType data;				// 数据域
	struct linknode * next;		// 指针域
} LinkStNode;					// 链栈结点类型
```



#### 链栈的基本操作

* 链栈的初始化

  ```c
  /* 链栈的初始化 */
  void InitStack(LinkStNode * &s)
  {
  	s = (LinkStNode *) malloc (sizeof(LinkStNode));
  	s -> next = NULL;
  }

* 判断链栈是否为空

  ```c
  /* 判断链栈是否为空 */
  bool StackEmpty(LinkStNode *s)
  {
  	return s -> next == NULL;
  }

* 入栈操作

  ```c
  /* 入栈操作 */
  void Push(LinkStNode * &s, ElemType e)
  {
  	LinkStNode * p;
  	p = (LinkStNode *) malloc (sizeof(LinkStNode));
  	p -> data = e;				// 新建元素 e 对应的结点 p 
  	p -> next = s -> next;		// 插入 p 结点作为开始结点
  	s -> next = p;				// 头结点的指针域指向新结点
  }

* 出栈操作

  ```c
  /* 出栈操作 */
  bool Pop(LinkStNode * &s, ElemType &e)
  {
  	LinkStNode * p;
  	if(s -> next == NULL)		// 栈空的情况
  	{
  		return false;
  	}
  	
  	p = s -> next;				// p 指向栈顶结点
  	e = p -> data;
  	s -> next = p -> next;		// 删除 p 结点
  	free(p);					// 释放 p 结点
  	return true;
  }

* 读取栈顶元素

  ```c
  /* 读取栈顶元素 */
  bool GetTop(LinkStNode * s, ElemType &e)
  {
  	if(s -> next == NULL)		// 栈空的情况
  	{
  		return false;
  	}
  	e = s -> next -> data;
  	return true;
  }

* 销毁链栈

  ```c
  /* 销毁链栈 */
  void DestroyStack(LinkStNode * &e)
  {
  	LinkStNode * p = s -> next;
  	while(p != NULL)
  	{
  		S -> next = p -> next;
  		free(p);
  		p = s -> next;
  	}
  	free(s);					// s 指向头结点，释放其空间
  	s = NULL;
  }
  ```

  

## 栈的案例分析与实现

## 队列的定义及特点

## 队列的抽象数据类型定义

## 队列的顺序存储

#### 顺序队列的定义

```c
/****** 顺序队列的定义 ******/
#define MAXSIZE 100
typedef int ElemType;
typedef struct SequenceQueue
{
	ElemType data[MAXSIZE];
	int front, rear;
} SqQueue;
```



#### 顺序队列的基本操作

* 顺序队列的初始化

  ```c
  /* 顺序队列的初始化 */
  void InitQueue(SqQueue * &q)
  {
  	q = (SqQueue *) malloc (sizeof(SqQueue));
  	q -> front = q -> rear = -1;
  }
  ```

  

* 判断顺序队列是否为空

  ```c
  /* 判断顺序队列是否为空 */
  bool QueueEmpty(SqQueue * q)
  {
  	return q -> front == q -> rear;
  }
  ```

  

* 顺序队列的入队操作

  ```c
  /* 顺序队列的入队操作 */
  bool enQueue(SqQueue * &q, ElemType e)
  {
  	if(q -> rear == MAXSIZE - 1)
  	{
  		return false;
  	}
  	
  	q -> rear++;
  	q -> data[q -> rear] = e;
  	return true;
  }
  ```

  

* 顺序队列的出队操作

  ```c
  /* 顺序队列的出队操作 */
  bool deQueue(SqQueue * &q, ElemType &e)
  {
  	if(q -> front == q -> rear)
  	{
  		return false;
  	}
  	
  	q -> front++;
  	e = q -> data[q -> front];
  	return true;
  }
  ```

  

* 销毁顺序队列

  ```c
  /* 顺序队列的销毁 */
  void DestroyQueue(SqQueue * &q)
  {
  	free(q);
  	q = NULL;
  }
  ```

  

#### 循环队列

#### 循环队列的基本操作

* 循环队列的初始化

  ```c
  /* 循环队列的初始化 */
  void InitCircleQueue(SqQueue * &q)
  {
  	q = (SqQueue *) malloc (sizeof(SqQueue));
  	q -> front = q -> rear = MAXSIZE - 1;
  }
  ```

  

* 判断循环队列是否为空

  ```c
  /* 循环队列是否为空 */
  bool CircleQueueEmpty(SqQueue * q)
  {
  	return q -> front == q -> rear;
  }
  ```

  

* 循环队列的入队操作

  ```c
  /* 循环队列的入队操作 */
  bool enCircleQueue(SqQueue * &q, ElemType e)
  {
  	if((q -> rear + 1) % MAXSIZE == q -> front)	// 队满上溢出
  	{
  		return false;
  	}
  	
  	q -> rear = (q -> rear + 1) % MAXSIZE;		// 队尾指针增 1
  	q -> data[q -> rear] = e;					// rear 位置插入元素 e
  	return true;
  }
  ```

  

* 循环队列的出队操作

  ```c
  /* 循环队列的出队操作 */
  bool deCircleQueue(SqQueue * &q, ElemType &e)
  {
  	if(q -> front == q -> rear)					// 队空下溢出
  	{
  		return false;
  	}
  	q -> front = (q -> front + 1) % MAXSIZE;	// 队头指针加 1
  	e = q -> data[q -> font];
  	return true;
  }
  ```

  

* 销毁循环队列

  ```c
  /* 循环队列的销毁 */
  void DestroyCircleQueue(SqQueue * &q)
  {
  	free(q);
  	q = NULL;
  }
  ```

  

## 队列的链式存储

#### 链队列的定义

```c
/****** 链队列 ******/

typedef int ElemType;
typedef struct DataNode
{
	ElemType data;
	struct DataNode * next;
} DataNode;					// 队列数据结点类型

typedef struct 
{
	DataNode * front;		// 指向第一个数据结点，即队首结点
	DataNode * rear;		// 指向最后一个数据结点，即队尾结点
} LinkQuNode;				// 链队头结点类型
```



#### 链队列的基本操作

* 链队列的初始化

  ```c
  /* 链队列的初始化 */
  void InitQueue(LinkQuNode * &q)
  {
  	q = (LinkQuNode *) malloc (sizeof(LinkQuNode));
  	q -> front = q -> rear = NULL;
  }
  ```

  

* 判断链队列是否为空

  ```c
  /* 判断链队列是否为空 */
  bool QueueEmpty(LinkQuNode * q)
  {
  	return q -> rear == NULL;
  //	return q -> front == NULL;
  }
  ```

  

* 链队列的入队操作

  ```c
  /* 链队列入队操作 */
  void enQueue(LinkQuNode *&q, ElemType e)
  {
  	DataNode * p;
  	p = (DataNode *) malloc (sizeof(DataNode));
  	p -> data = e;
  	p -> next = NULL;
  	if(q -> rear == NULL)				// 若链队为空，则新结点是队新结点又是队尾结点
  	{
  		q -> front = q -> rear = p;
  	}
  	else 
  	{
  		q -> rear -> next = p;			// 将 p 结点链到队尾，并将 rear 指向它
  		q -> rear = p;
  	}
  }
  ```

  

* 链队列的出队操作

  ```c
  /* 链队列出队操作 */
  bool deQueue(LinkQuNode * &q, ElemType &e)
  {
  	DataNode * t;
  	if(q -> rear == NULL)				// 队列为空
  		return false;
  	t = q -> front;						// t 指向第一个数据结点
  	if(q -> front == q -> rear)			// 队列中只有一个结点时
  		q -> front = q -> rear = NULL;
  	else 								// 队列中有多个结点时
  		q -> front = q -> front -> next;
  	e = t -> data;
  	free(t);
  	return true;
  }
  ```

  

* 销毁链队列

  ```c
  /* 销毁链队列 */
  void DestroyQueue(LinkQuNode * &q)
  {
  	DataNode * p = q -> front, *r;		// p 指向队头结点
  	if(p != NULL)						// 释放数据结点占用的空间
  	{
  		r = p -> next;
  		while(r != NULL)
  		{
  			free(p);
  			p = r;
  			r = p -> next;
  		}
  	}
  	free(p);
  	free(q);							// 释放链队列头结点占用的空间
  	p = NULL;
  	q = NULL;
  }
  ```

  

## 队列的案例分析与实现

## 小结

- 栈：
- 队列：
