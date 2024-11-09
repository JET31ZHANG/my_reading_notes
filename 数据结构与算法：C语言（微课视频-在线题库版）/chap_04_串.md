## 串的的定义及其基本运算

#### 串的基本操作

#### 串的基本运算

## 典型案例

## 串的存储结构

#### 串的顺序存储结构

* 串赋值

  ```c
  /*** 串赋值 ***/
  void StrAssign (SqStr &s, char t[]) // s 设置为引用类型参数
  {
  	int i;
  	for(i = 0; t[i] != '\0'; i++)	// 设置字符数组元素值
  	{
  		s.data[i] = t[i];
  	}
  	s.length = i;					// 设置串长
  }
  ```

  

* 串比较

  ```c
  /*** 串比较 ***/
  int StrCompare(SqStr s, SqStr t)
  {
  	int i, len;
  	/* len 保存两个串的长度较小值 */
  	if(t.length > s.length)
  	{
  		len = s.length;
  	}
  	else 
  	{
  		len = t.length;
  	}
  
  	for(i = 0; i < len; i++)
  	{
  		/* 判断两字符串对应位置 ASCII 码大小 */
  		if(s.data[i] > t.data[i])
  		{
  			return 1;
  		}
  		else if (s.data[i] < t.data[i])
  		{
  			return -1;
  		}
  	}
  
  	/* 循环结束后，若没有结果，则比较两字符串的串长 */
  	if(s.length == t.length)
  	{
  		return 0;
  	}
  	else if (s.length > t.length)
  	{
  		return 1;
  	}
  	else 
  	{
  		return -1;
  	}
  }
  ```

  

* 求串长

  ```c
  /*** 求串长 ***/
  int StrLength(SqStr s)
  {
  	return s.length;
  }
  ```

  

* 串连接

  ```c
  /*** 串连接 ***/
  SgStr StrConcat(SqStr s, SqStr t)
  {
  	SqStr r;
  	int i;
  	r.length = s.length + t.length;			// 新串的长度为两串之和
  	for(i = 0; i < s.length; i++)			// 将串 s 中的字母依次保存在 r.data[i] 中
  	{
  		r.data[i] = s.data[i];
  	}
  	for(i = 0; i < t.length; i++)			// 将串 r 中的字母依次保存在 r.data[i] 中
  	{
  		r.data[s.length + i] = t.data[i];
  	}
  	return r;
  }
  ```

  

* 求子串

  ```c
  /*** !求子串 ***/
  SqStr StrSub(SqStr s, int i, int j)
  {
  	SqStr r;
  	int n;
  	r.length = 0;
  	/* 判断是否输入有误 */
  	if (i <= 0 || i > s.length || j < 0 || i + j > s.length)
  	{
  		return r;
  	}
  
  	for(n = i - 1; n < i + j - 1; n++)
  	{
  		// n 的取值范围为 i - 1 至 i + j - 2
  		r.data[n - i + 1] = s.data[n];		
  	}
  	r.length = j;
  	return r;
  }
  ```

  

#### 串的链式存储结构

* 串赋值

  ```c
  /*** 串赋值 ***/
  void StrAssign(LStrNode * &s, char t[])
  {
  	int i;
  	LStrNode * r, *p;
  	s = (LStrNode *) malloc (sizeof(LStrNode));			// 生成链串结点 s
  	r = s;												// 指针 r 指向该链串的最后一个结点
  	for(i = 0; t[i] != '\0'; i++)						// 循环利用尾插法
  	{
  		p = (LStrNode *) malloc (sizeof(LStrNode));
  		p -> data = t[i];
  		p -> next = p;
  		r = p;
  	}
  	r -> next = NULL;
  }
  ```

  

* 串比较

  ```c
  /*** 串比较 ***/
  int StrCompare(LStrNode * s, LStrNode * t)
  {
  	LStrNode * p, * q;
  	p = s -> next;
  	q = t -> next;
  
  	/* 满足循环条件时，逐个比较对应结点的 data 值 */
  	while(p != NULL && q != NULL)
  	{
  		if(p -> data == q -> data)
  		{
  			p = p -> next;
  			q = q -> next;
  		}
  		else if (p -> data < q -> data)
  		{
  			return -1;
  		}
  		else 
  		{
  			return 1;
  		}
  	}
  
  	/* 循环结束后，若没得到结果，则判断 p, q 的位置 */
  	if(p == NULL && q == NULL)
  	{
  		return 0;
  	}
  	else if (p == NULL && q != NULL)
  	{
  		return -1;
  	}
  	else 
  	{
  		return 1;
  	}
  }
  ```

  

* 求串长

  ```c
  /*** 求串长 ***/
  int StrLength(LStrNode * s)
  {
  	int i = 0;
  	LStrNode * p = s -> next;	// p 指向链串 s 的首结点
  	while(p != NULL)
  	{
  		i++;
  		p = p -> next;
  	}
  	return i;					// i 保存计数结果
  }
  ```

  

* 串连接

  ```c
  /*** 串连接 ***/
  LStrNode * StrConcat(LStrNode * s, LStrNode * t)
  {
  	LStrNode * str, * p = s -> next, * q, * r;		// p 指向链串 s 的首结点
  	str = (LStrNode *) malloc (sizeof(LStrNode));
  	r = str;
  	while(p != NULL)
  	{
  		q = (LStrNode *) malloc (sizeof(LStrNode));
  		q -> data = p -> data;
  		r -> next = q;								// 尾插法
  		r = q;
  		p = p -> next;
  	}
  	p = t -> next;									// p 指向链串 s 的首结点
  	while(p != NULL)
  	{
  		q = (LStrNode *) malloc (sizeof(LStrNode));
  		q -> data = p -> data;
  		r -> next = q;								// 尾插法
  		r = q;
  		p = p -> next;
  	}
  	r -> next = NULL;
  	return str;
  }
  ```

  

* 求子串

  ```c
  /*** 求子串 ***/
  LStrNode * StrSub(LStrNode * s, int i, int j)
  {
  	int k;
  	LStrNode * str, * p = s -> next, * q, * r;
  	str = (LStrNode *) malloc (sizeof(LStrNode));
  	str -> next = NULL;
  	r = str;
  
  	/* 判断是否输入有误 */
  	if(i <= 0 || i > StrLength(s) || j < 0 || i + j - 1 > StrLength(s))
  	{
  		return str;
  	}
  	for(k = 1; k < i; k++)				// p 指向链串 s 第 i 个结点
  	{
  		p = p -> next;
  	}
  	for(k = 1; k <= j; k++)				// 将链串 s 的从 i 开始的 j 个结点依次利用尾插法存入 str
  	{
  		q = (LStrNode *) malloc (sizeof(LStrNode));
  		q -> data = p -> data;
  		r -> data = q;
  		r = q;
  		p = p -> next;
  	}
  	r -> next = NULL;
  	return str;
  }
  ```

  

## 模式匹配

## 案例分析与实现

## 小结

* 串的基本概念与基本运算
* 串的顺序和链式存储结构
* 基本运算的实现方法
* 基于BF算法介绍串的模式匹配方法
