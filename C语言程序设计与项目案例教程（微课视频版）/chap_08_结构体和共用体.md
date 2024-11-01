## 结构体

- 结构体类型变量的定义与引用
  - 概述
  
  - 类型的定义
  
    - 大括号后的分号不能少
    - 只能对变量赋值，不能对类型赋值。
  
  - 变量的定义
  
    - 间接定义
  
      ```c
      // 先定义结构体类型，再定义结构体变量。
      struct date
      {
          int year;
          int month;
          int day;
      };
      struct date date1, date2;
      ```
  
    - 直接定义
  
      ```c
      // 定义结构体类型的同时定义结构体类型变量
      struct date
      {
          int year;
          int month;
          int day;
      } date1, date2;
      ```
  
    - 直接定义结构体变量
  
      ```c
      // 由于无法记录该结构体类型，因此出直接定义外，不能在定义该结构体类型变量。
      struct
      {
          int year;
          int month;
          int day;
      } date1, date2;
      ```
  
  - 类型变量的引用
  
    - 定义了结构体变量后，可以引用该变量。
  
      ```c
      结构体类型变量名.成员名
      ```
  
    - 结构体变量不能作为整体进行输入输出，但允许对具有相同结构体类型的变量进行整体赋值。
  
  - 类型变量的初始化：定义结构体变量并对其进行赋值。
  
    ```c
    struct 结构体名 结构体变量名 = {初始数据};
    ```
  
    - 一次性给结构体变量的成员赋初值
    - 分散性地给结构体变量的成员赋值
  
- 结构体数组
  - 定义
  
    ```c
    struct stu
    {
        int num;
        char name[30];
        char sex;
        int age;
        float score;
    } s[30];
    ```
  
  - 初始化
  
    ```c
    struct stu s[30] = {
        {202201, "Wangyan", 'M', 18, 89},
        {202202, "Lishan", "M", 18, 95},
        {202203, "Zhanghai", "F", 18, 78},
    };
    ```
  
  - 应用
  
- 结构体指针
  - 指向结构体变量的指针：
  
    ```c
    // 定义指针变量 p，指向 struct stu 类型的变量 （p 没有指向一个确定的存储单元）
    struct stu *p
    
    // 定义指针变量 p，指向结构体变量 s1
    struct stu *p = &s1;
    ```
  
    - 指向结构体变量的指针变量必须与结构体变量的类型相同。
    - C语言用于访问结构体成员的两种运算符：
      - 成员（圆点）运算符
      - 指向（箭头）运算符：`指向结构体的指针变量名 -> 成员名`
  
  - 指向结构体数组的指针：
  
    ```c
    // 定义一个结构体数组 s[3]，使结构体指针 p 指向该结构体数组的首地址
    struct stu s[3], *p;
    p = s
    ```
  
    - 指向结构体对象的指针变量既可指向结构体变量，也可指向结构体数组中的元素。
  
  - 应用

## 共用体、枚举和 typedef 类型定义

- 共用体（联合体）
  - 类型的定义
  
    ```c
    union smaple
    {
        int i;
        char c;
        float t;
    };
    ```
  
  - 变量的定义
  
    - 先定义共用体类型后定义共用体变量
    - 在定义共用体类型的同时定义结构变量
    - 直接定义共用体变量
  
  - 成员的引用及初始化
  
    - 注意事项：
  
- 枚举
  - 类型的定义
  - 类型变量的定义
    - 先定义枚举类型后定义枚举变量
    - 在定义枚举类型的同时定义枚举变量
    - 直接定义枚举类型的变量
  - 变量的应用
  
- typedef 声明新类型名

  - 声明一个新的类型名的方法
    - 先按定义变量的方法写出定义体。
    - 将变量名换成新类型名。
    - 在前面加上 typedef。
    - 可以用新类型名取定义变量。


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
