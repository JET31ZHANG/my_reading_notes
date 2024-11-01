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
  
      ```c
      union data
      {
          char a;
          int b;
          float c;
      };
      union data x;
      ```
  
    - 在定义共用体类型的同时定义结构变量
  
      ```c
      union data
      {
      	char a;
          int b;
          float c;
      }x;
      ```
  
    - 直接定义共用体变量
  
      ```c
      union
      {
          char a;
          int b;
          float c;
      }x;
      ```
  
  - 成员的引用及初始化
  
    - 注意事项：
      - 共用体与结构体的差异：不能在定义的同时初始化，但可对第一个成员赋初值。
      - 对共用体，每次只能给一个成员赋值，不能同时给多个成员赋值。共用体变量的所有成员的首地址都相同，且等于共用体变量的地址。
      - 对共用体任何一个成员赋值都导致共享区域发生变化，所以共用体只能保证有一个成员的值是有效的。
      - 共用体中，同一个内存段可用来存放几种不同类型的成员，但每次只能存放其中一种。共用体变量中起作用的成员是最后一次存放的成员，在存入一个新的成员后原有的成员会失去作用。
  
- 枚举
  - 类型的定义
  
    ```c
    enum 枚举类型名 {枚举元素列表};
    // 枚举类型名必须为 C 语言合法的标识符。
    // 花括号内的标识符为枚举元素、枚举常量，需用逗号隔开
    ```
  
  - 类型变量的定义
  
    - 先定义枚举类型后定义枚举变量
  
      ```c
      enum week {SUN, MON, TUE, WED, THU, FRI, SAT};	// 定义 week 类型
      enum week day;									// 定义 week 类型的枚举变量
      ```
  
    - 在定义枚举类型的同时定义枚举变量
  
      ```c
      enum week {SUN, MON, TUE, WED, THU, FRI, SAT} day;
      ```
  
    - 直接定义枚举类型的变量
  
      ```c
      enum {SUN, MON, TUE, WED, THU, FRI, SAT} day;
      ```
  
    - C 编译器对枚举元素按常量处理，在定义时使它们的值从0开始依次递增。
  
      ```c
      // SUN 的值被定义为 0，则 MON 的值递推为 1，以此类推
      enum week {SUN = 0, MON, TUE, WED, THU, FRI, SAT} day;
      ```
  
    - 枚举常量可进行比较运算，由它们对应的整数参加比较。
  
    - 枚举常量不是字符常量也不是字符串常量，使用时不能加单、双引号。
  
  - 变量的应用
  
- typedef 声明新类型名

  - typedef 用于为系统固有的或自定义数据类型定义一个别名。数据类型的别名通常使用首字母大写的方式表示，以便与系统提供的标准类型标识符相区别。

  - 命名一个新的类型名代表结构体类型

    ```c
    typedef struct student
    {
        int num;
        char name[20];
        char sex;
        int age;
        float score;
    } Stu;
    
    // 等价于
    typedef struct student Stu;
    ```

  - 命名一个新的类型名代表数组类型

    ```c
    typedef int Num[100];
    Num a;
    ```

  - 命名一个新的类型名代表指针类型

    ```c
    typedef char *String;
    String p;
    ```

  - 命名一个新的类型名代表指向函数的指针类型

    ```c
    typedef int (*Pointer)();	// 声明 Pointer 为指向函数的指针类型，返回值为整型
    Pointer p;					// p 为 Pointer 类型的指针变量
    ```

  - 声明一个新的类型名的方法

    - 先按定义变量的方法写出定义体。`int a[10];`
    - 将变量名换成新类型名。`int Num[10];`
    - 在前面加上 typedef。`typedef int Num[10];`
    - 可以用新类型名取定义变量。`Num a;`


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
