## 概述

- 函数引入
- 函数的定义
- 函数的调用
- 函数的声明
- 函数的参数传递
- 返回语句和函数返回值
- 函数的嵌套调用
- 函数的递归调用

## 变量作用域&生命期

- 变量的作用域
- 变量的生命期
- 变量的存储类型
  - auto类型
  - register类型
  - static类型
  - extern类型
- 内部函数
- 外部函数

## 预处理程序

- 宏定义
- 文件包含
- 条件编译
- 特殊符号处理

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
