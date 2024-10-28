## 指针与指针变量

- 指针的概念
  - 内存地址
  - 变量名、变量地址和变量值
  - 变量的访问形式
  - 两种访问方式的比较
  
- 指针变量
  - 定义
  
    - 定义变量时，指针变量前的 "*" 是一个标志，表示该变量的类型是指针型变量。
    - 指针变量存放某一类型变量的地址，而指针常量是所引用的对象的地址不能改变的指针。
  
  - 初始化和赋值
  
  - 运算
  
    - 指针运算符：
  
      - 取地址运算符 &：取变量的地址。单目运算符，结合性为从右至左。
      - 取内容运算符 *：用来表示指针变量所指的变量。间接引用运算符，结合性为从右至左。**"\*" 运算符后跟的变量必须是指针变量**
  
    - 指针变量的算术操作：加法、减法。
  
      ```c
      int n, *p;
      /*
      *	p 所指的数据存储单元之后的第 n 个数据存储单元，
      *	而不是简单地在指针变量 p 的值上直接加数值。
      *	其中数据存储单元的大小与数据类型有关
      */
      p + n;	// n >= 0
      
      /*
      *	若指针变量 p1 是整型的指针变量，其初始值为 2000, 整型的长度是 2 字节。
      *	则表达式 "p1++" ：p1的值变成 2002，而不是 2001。
      *	每次增量之后，p1都会指向下一个单元。
      *	同理，当 p1 的值为 2000 时，表达式 "p1--" 将 p1 的值变成 1998
      */
      ```
  
    - 指针值的比较
  
- 指针变量作为函数的参数
  
  - 背景：
  
    - 函数的参数可以是整型、实型、字符型和指针类型。当函数的参数是指针类型时，其作用：将一个变量的地址传到另一个函数中。
    - C 中，函数参数的传递是单向值传递。数值只能从调用函数向被调用函数传递，反之不行。形参的改变不会影响实参的改变。
  
  - 问题的提出：用一个被调函数实现主调函数中变量值的改变？
  
    ```c
    /*
    *   试图交换变量值的程序
    *
    *   样例输出：before calling: i = 133, j = 58
    *            in the function swap: a = 58 b = 133
    *            after calling: i = 133, j = 5
    */
    #include <stdio.h>
    
    void swap(int a, int b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
        printf("in the function swap: a = %d b = %d\n", a, b);
    }
    
    int main(void)
    {
        int i = 133;
        int j = 58;
    
        printf("before calling: i = %d, j = %d\n", i, j);
        swap(i, j);
        printf("after calling: i = %d, j = %d\n", i, j);
    
        return 0;
    }
    ```
  
  - 解决方法：用指针作为函数参数，传给 swap() 函数的应是想交换的两个变量的地址，而地址可用指针来实现。
  
    - 调用函数时，要注意参数的类型，若是指针，务必传地址。
    - 不能通过改变指针形参的值来改变指针实参的值。
  
    ```c
    /*
    *   使用指针参数将改变带回到调用函数
    *
    *   样例输出：before calling: i = 133, j = 58
    *            in the function swap: *a = 58 *b = 133
    *            after calling: i = 58, j = 133
    */
    #include <stdio.h>
    
    void swap(int *a, int *b)
    {
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
        printf("in the function swap: *a = %d *b = %d\n", *a, *b);
    }
    
    int main(void)
    {
        int i = 133;
        int j = 58;
    
        printf("before calling: i = %d, j = %d\n", i, j);
        swap(&i, &j);
        printf("after calling: i = %d, j = %d\n", i, j);
    
        return 0;
    }
    
    ```
  
  - 实例
  

## 指针变量的应用

- 指向一维数组的指针变量
  - 一维数组指针的概念
    - 数组的指针（**数组名**）：数组在内存中的起始位置，
    - 数组元素的指针：数组元素在内存中的起始地址。
  - 一维数组指针的表示方法
  - 一维数组元素的引用方法
    - 下标法
    - 指针法
  - 通过指针引用数组元素
- 指向字符串的指针变量
  - 字符数组 & 字符指针
  - 利用字符指针处理字符串
- 应用

## 常见错误

- 对指针变量赋予非指针值

  ```c
  #include <stdio.h>
  
  int main(void)
  {
      int i = 10;
      int *p;
      /*
      *	编译提示给指针变量赋值时用了整型数值。i 是整型变量，而 p 是指向整型变量的指针变量，它们的类型不同。
      *	p 所要求的是一个指针值，即一个变量的地址。因此，应该写为 "p = &i"
      */
      p = i;		
      printf("%d\n", p);
      
      return 0;
  }
  ```

- 指针未能指向确定的存储区

  ```c
  #include <stdio.h>
  
  int main(void)
  {
      char *str;
      scanf("%s", str);	// 企图从键盘输入一个字符串，使 str 指向该字符串
      printf("%s", str);
      
      return 0;
  }
  
  /*
  *	严重性		代码			说明	
  *	错误		C4700		  使用了未初始化的局部变量“str”
  */
  ```

- 混淆数组名与指针变量

  ```c
  #include <stdio.h>
  
  int main(void)
  {
      int i, a[5];
      for(i = 0; i < 5; i++)
          /*
          *	企图通过改变 a 的值使指针下移，每次指向下一个数组元素。
          *	但 a 是数组名，是数组的首地址，是常量，它的值是不能改变的。
          *	a++ 是错误的，应当用指针变量来指向各数组元素。
          */
          scanf("%d", a++);
      return 0;
  }
  ```

- xxxxxxxxxx #include <stdio.h>​struct student{    char *name;    int score;};​int main(void){    student s1; // 漏掉 struct 关键字    return 0;}c

```c
#include <stdio.h>

int main(void)
{
    int a = 5, *p;
    float b = 3.5, *q;
    p = &a;
    q = &b;
    q = p;		// 企图使 q 指向整型变量 a，但 q 是指向 float 型变量的指针，不能指向整型变量
    printf("%d, %d\n", *p, *q);
    
    return 0;
}
```

