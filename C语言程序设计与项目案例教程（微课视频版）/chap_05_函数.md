## 概述

- 函数引入
  - 从函数定义角度
    - 库函数：由系统提供的，无需用户定义，无需再程序种做类型声明，只需再程序前包含该函数原型的头文件，即可在程序中直接调用。
    - 用户定义函数：由用户按需编写的函数。不仅要在程序中定义函数本身，而且再主函数模块中必须对该被调函数做类型说明才能使用。
  - 从对函数返回值的需求状况
    - 有返回值函数：被调用执行完成后向调用者返回一个执行结果，即函数返回值。
    - 无返回值函数：用于完成某项特定的处理任务，执行完成后不向调用者返回函数值。（并非真的没有返回值，只是不关心而已。）因函数无须返回值，在定义函数时，可指定其返回为”空类型“，说明符为 "void"。
  - 从主调函数和被调函数之间数据传送的角度
    - 无参函数：函数定义、函数说明及函数调用中均不带参数，主调函数和被调函数之间不进行传参。
    - 有参函数：在函数定义及函数说明时都有参数，即形参。在函数调用时也必须给出参数，即实参。函数调用时，主调函数将实参的值传给形参，供被调函数使用。
  - 从功能角度：
    - 不能嵌套定义：在一个函数的函数体内，不能再定义另一个函数。
    - 函数之间可以互相调用、 嵌套调用、递归调用。
    - main() 函数可以调用其他函数，不能被其他函数调用。

- 函数的定义

  ```c
  /*
      函数类型 函数名(形参及其类型)
      {
          局部变量定义语句;
          可执行语句序列;
      }
  */
  ```

- 函数的调用

  - 实参可以是常量、有确定值的变量或表达式及函数调用。
  - 实参的个数必须与形参的个数一致。实参的个数多于一个时，各实参之间用逗号隔开。
  - 若调用无参函数，则“实参列表”可以没有，但括号不能省略。

- 函数的声明：对函数类型、名称等的说明。为函数调用提供接口信息，以便获得调用函数的权限。
  - 方便调用和保护源代码
  - 函数原型的声明：在函数定义的基础上去掉函数体，后面加上分号 ";"。
  - 变量的声明通常是对变量的类型和名称的一种说明，不一定会分配内存，而变量的定义肯定会分配内存。
  - 函数的声明是对函数的类型和名称的一种说明；函数的定义是一个模块，包括函数体部分。
  - 声明可以是定义，也可以不是。（广义的声明：定义性声明、引用性声明。一般指后者。）
  - 习惯于先设计 main() 函数，再设计定义的函数。当需要超前调用自定义函数时，在调用前需要进行函数原型声明。
  - 不在主调函数中对被调函数进行声明的3种情况：
    - 若被调函数写在主调函数的前面，可以不必进行声明
    - 若函数的返回值为整型或字符型，可以不必进行声明
    - 若在所有函数定义前，在源程序文件的开头（**在函数的外部已经对函数进行了声明**），则在各个调用函数中不必再对所调用的函数进行声明。

- 函数的参数传递
  - 值传递：单向的数据传递（将实参的值赋给形参），传递完成后，对形参的任何操作都不会影响实参的值。
  - 地址传递：将实参的地址传递给形参，使形参指向的数据和实参指向的数据相同，因而被调函数的操作会直接影响实参指向的数据。

- 返回语句和函数返回值：C 语言中，函数返回值是通过 return 语句来实现的。
  - return 语句可使函数从被调函数中退出，返回到调用它的代码处，并向调用函数返回一个确定的值。
  - 一个函数可以有多个 return 语句
  - 在定义函数时应当指定函数的类型，函数的类型应与 return 语句中表达式的类型一致。当二者不一致时，函数的类型决定返回值的类型。对于数值型数据可自动进行类型转换。

- 函数的嵌套调用：在调用一个函数并执行该函数的过程中，又调用另一个函数的情况。

- 函数的递归调用：函数直接或间接地调用其本身。
  - 递归调用方式：
    - 直接递归调用：在一个函数中直接调用自身。
    - 间接递归调用：在一个函数中调用其他函数，而在其他函数中又调用了本函数。

  - 递归调用过程：
    - 递推阶段：从原问题出发，按递归公式递推，最终达到递归终止条件，从而将一个复杂的问题分解为一个相对简单且可以直接求解的问题。
    - 回归阶段：将子问题的结果逐层代入递归公式求值，最终求得原问题的解。


## 变量作用域&生命期

- 变量的作用域

  - 所有函数都是平行关系。
  - 不同函数内可以定义相同名字的内部变量，互不影响。
  - 形参属于被调函数的内部变量，实参属于主调函数的内部变量。
  - 在同一源文件中，若全局变量与与局部变量同名，则在局部变量的作用范围内全局变量不起作用。

- 变量的生命期：变量值在程序运行过程中的存在时间

  - 静态存储区存放的是静态数据
  - 动态存储区分为堆内存区（由用户管理）和栈内存区（由系统管理）。
  - 静态变量：main() 函数执行前已经分配内存的变量，其生命周期为整个程序执行期。
  - 动态变量：在程序执行到该变量生命的作用域时才临时分配内存，其生命周期仅在其作用域内。
  - 生命期和作用域：分别从时间和空间对变量的使用进行界定，相互关联又不完全一致。

- 变量的存储类型
  - auto（自动）：
    - 变量值是不确定的，如果初始化，则赋初值操作是在调用时进行的，且每次调用都要重新赋初值。
    - 在函数中定义的自动变量只在该函数内有效，函数被调用时分配存储空间，调用结束就释放。在复合语句中定义的自动变量只在该复合语句中有效，推出复合语句后，便不能再使用，否则将引起错误。
  - register（寄存器）：一种特殊的自动变量。
    - 建议编译程序时，将变量中的数据存放在寄存器中，大大提高变量的存取速度。
    - 一般变量的值都存储在内存中，但为了提高执行效率，C语言允许将局部变量的值存放到寄存器中，即寄存器变量。
  - static（静态）：
    - 全局变量和局部变量都可以用 static 声明，但区别在于
      - 全局变量总是静态存储，默认值是0。全局变量前加上 static 表示该变量只能在本程序文件内使用。对于全局变量，static 主要用于在程序包含多个文件时限制变量的使用范围（对于只有一个文件的程序，有无 static 都一样。）
      - 局部变量：定义在函数体内部，用 static 来声明，该变量为静态局部变量。在程序执行过程中，即使所在函数调用结束也不释放。
      - 静态局部变量定义不初始化，自动赋数字 "0" 或 '\0' 。每次调用定义静态局部变量的函数，不再重新为该变量赋初值，只保留上次调用结束时的值。**要注意多次调用函数时静态局部变量每次的值。**
  - extern（外部）：
    - 默认情况，在文件域中用 extern 声明的变量和函数都是外部的。但对于作用域范围外的变量和函数，需要使用 extern 进行引用行声明。
    - 对外部变量的声明只是声明该变量是在外部定义过的一个全局变量在这里引用。而对外部变量的定义，是要分配存储单元。（一个全局变量只能定义一次，可以多次引用。）
    - 用 extern 声明外部变量的目的：可以在其他文件中调用。

- 内部函数：一个函数只能被它所在文件中的其他函数调用。定义内部函数时，使用 static 进行修饰。

  ```c
  // static 类型标识符 函数名(形参列表){函数体}
  static float max(float a, float b)
  {
      ...
  }
  ```

- 外部函数：在一个源程序文件中定义的函数除了可以被本文件中的函数调用外，还可以被其他文件中的函数调用。在定义外部函数时，使用 extern 进行修饰。

  ```c
  // extern 类型标识符 函数名(形参列表)
  extern char del_str(char r1)
  {
      ...
  }
  ```

## 预处理程序

- 宏定义

  - 不带参数的宏定义（字符串的宏定义）：用来指定一个标识符代表一个字符串常量。

    ```C
    // #define 标识符 字符串
    // 标识符是宏的名字，字符串是宏的替换正文，使得标识符等同于字符串
    ```

    - 宏定义在源程序中要单独占一行，通常 "#" 出现在一行的第一个字符的位置，允许 # 号前有若干空格或制表符，但不允许有其他字符。

    - 每个宏定义以换行符作为结束的标志

    - 宏的名字用大小写均可，习惯用大写字母作为宏名。宏名是一个常量的标识符，不能对它赋值。

    - 一个宏的作用域：从定义的地方开始到本文件结束。也可以用 “#undef” 命令终止宏定义的作用域

    - 宏定义可以嵌套

      ```c
      #define PI 3.14
      #define TWOPI (2.0 * PI)
      // 若有语句 s = TWOPI * r * r , 则在编译时被替换为 s = (2.0 * PI) * r * r
      ```

  - 带参数的宏定义：进行参数替换

    ```c
    // #define 标识符(参数表) 字符串
    # define SUM(a, b)(a + b)
    ```

    - 在宏定义中，宏名和左括号之间没有空格
    - 带参数的宏展开时，用实参字符串替换形参字符串，可能会发生错误。建议：***将宏的各个参数用小括号括起来。***
    - 带参数的宏调用和函数调用的区别：
      - 函数调用：先计算实参表达式的值，再将它的值传递给形参，在传递过程中，要检查实参和形参的数据类型是否一致。
      - 带参数的宏替换：只是简单的字符串替换，不存在函数类型、返回值及参数类型的问题。它是用实参表达式原封不动地替换形参，并不进行计算，也不检查参数类型的一致性。

- 文件包含：把指定文件的全部内容包含到本文件中。

  - 一个 include 命令只能指定一个被包含文件
  - 文件包含控制行可出现在源文件的任何地方，但大多放在文件的开头部分
  - "#include" 命令的文件名使用双引号和尖括号的区别：
    - 使用尖括号：仅在系统指定的"标准"目录中查找文件，不在源文件的目录中查找
    - 使用双引号：表明先在正在处理的源文件目录中搜索指定的文件，若没有，再到系统指定的"标准"目录中查找。

  - 文件包含命令可以是嵌套的，在一个被包含的文件中还可以包含其他的文件。

- 条件编译：***用于程序调试***

  - 使用 #ifdef 的形式

    ```c
    /*
    *	当标识符已经被 #define 命令所定义时，
    *	条件为真，编译程序段1；
    *	否则条件为假，编译程序段2。
    *	else 语句可以没有。
    */
    #ifdef 标识符
    	程序段 1
    #else
        程序段 2
    #endif
    ```

  - 使用 #ifndef 的形式

    ```C
    /* 
    *	当标识符未被 #define 命令所定义时，
    *	条件为真，编译程序段1；
    *	否则条件为假，编译程序段2。
    *	else 语句可以没有。
    */
    #ifndef 标识符
    	程序段 1
    #else
        程序段 2
    #endif
    ```

  - 使用 #if 的形式

    ```c
    /*
    *	当表达式的值为非0时，条件为真，编译表达式后的程序段1；
    *	否则条件为假，编译程序段2。
    */
    #if 表达式
    	程序段 1
    #else
        程序段 2
    #endif
    ```

- 特殊符号处理

  - `_FILE_`:  包含当前程序文件名的字符串
  - `_LINE_`: 表示当前行号的整数
  - `_DATE_`: 包含当前日期的字符串
  - `_STDC_`: 若编译器遵循 ANSI C 标准，则它是个非 0 值
  - `_TIME_`: 包含当前时间的字符串


## 常见错误

- 使用库函数时忘记包含头文件

  ```c
  #include <stdio.h>
  
  int main(void)
  {
      int a = 4;
      printf("%f", sqrt(a));	// 使用 sqrt() 需要包含 math.h
      
      return 0;
  }
  ```

- 忘记对所调用的函数进行函数原型声明

  ```c
  #include <stdio.h>
  // 要调用 add() 函数，需在 main() 前声明 add()
  int main(void)
  {
      float a, b;
      
      printf("Please enter a and b: ");
      scanf("%f %f", &a, &b);
      printf("the sum is: %.2f\n", add(a, b));
      
      return 0;
  }
  
  float add(float x, float y)
  {
      float z = 0;
      z = x + y;
      return (z);
  }
  ```

- 函数的实参和形参类型不一致

  ```c
  #include <stdio.h>
  
  int sum(int i, int j)
  {
      int k;
      k = i + j;
      return k;
  }
  
  int main(void)
  {
      float a, b, c = 0;      // 函数实参和形参不一致
      printf("请输入两个实数: ");
      scanf("%d %d", &a, &b);
      c = sum(a, b);
      printf("a + b = %f\n", c);
  
      return 0;
  }
  ```

- 使用未赋值的自动变量

  ```c
  #include <stdio.h>
  
  int main(void)
  {
      int i;
      printf("%d\n", i);	// i 未赋值
  }
  ```
