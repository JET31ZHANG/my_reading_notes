## 结构体

- 结构体类型变量的定义与引用
  - 概述
  - 类型的定义
  - 变量的定义
  - 类型变量的引用
  - 类型变量的初始化
- 结构体数组
  - 定义
  - 初始化
  - 应用
- 结构体指针
  - 指向结构体变量的指针
  - 指向结构体数组的指针
  - 应用

## 共用体、枚举和 typedef 类型定义

- 共用体
  - 类型的定义
  - 变量的定义
  - 成员的引用及初始化
- 枚举
  - 类型的定义
  - 类型变量的定义
  - 变量的应用
- typedef 声明新类型名

## 常见错误

- 结构体类型声明时漏掉分号

  ```c
  #include <stdio.h>
  
  struct node
  {
      int num;
      int score1;
      int score2;
  }				// 漏掉分号
  
  struct node n;
  
  int main(void)
  {
      n.num = 1;
      printf("%d", n.num);
      
      return 0;
  }
  ```

- 混淆结构体数据类型和结构体变量

  ```c
  /*
  *	struct student 是用户自定义的结构体数据类型，其用法相当于基本数据类型 int
  *	struct student 只是数据类型的名字，不是变量，不占存储单元
  *	C 语言中，只能对结构体变量中的成员赋值，不能对结构体数据类型中的成员赋值
  */
  struct student
  {
      int sID = 100;		/* 学号 */
      char sSex = 'F';	/* 性别 */
      int sMath = 90;		/* 高数成绩 */
      int sEng = 80;		/* 英语成绩 */
      int sC = 89;		/* C语言成绩 */
  };
  
  // 将上述代码修改为：
  struct student
  {
      int sID;		/* 学号 */
      char sSex;		/* 性别 */
      int sMath;		/* 高数成绩 */
      int sEng;		/* 英语成绩 */
      int sC;			/* C语言成绩 */
  };
  
  struct student sx;	/* 定义 struct student 型变量 sx */
  sx.sID = 100;		/* 为 sx 变量的成员赋值 */
  sx.sSex = 'F';
  sx.sMath = 90;
  sx.sEng = 80;
  sx.sC = 89;
  ```

- 结构体类型使用不当

```c
#include <stdio.h>

struct student
{
	char *name;
    int score;
};

int main(void)
{
    student s1;	// 漏掉 struct 关键字
    return 0;
}
```
