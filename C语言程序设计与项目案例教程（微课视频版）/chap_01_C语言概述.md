## 学习 C 语言的原因

- 程序与程序设计语言
- C 语言的发展历史与特点

## C 语言程序设计概述

- C 语言程序设计入门
- C 语言程序的编码规范
- C 语言程序的开发步骤
- C 语言继承开发环境

## C 语言常见错误分析

- 语句后少分号

  ```c
  #include <stdio.h>
  
  int main(void)
  {
  	printf("Hello, World!")	// 语句后少了分号
          
      return 0;
  }
  ```

- 语句中出现中文字符

  ```C
  #include <stdio.h>
  
  int main(void)
  {
      printf(“Hello, World!”);	// 使用了中文双引号 
          
      return 0;

- 大括号不成对出现

  ```C
  #include <stdio.h>
  
  int main(void)
  {
      printf("Hello, World!");
          
      return 0;		// 缺少右大括号

- main() 函数首字母大写

  ```C
  #include <stdio.h>
  
  int Main(void)				// main() 函数首字母大写
  {
      printf("Hello, World!");
          
      return 0;
  }

- 标识符、关键字之间缺少空格

  ```C
  #include <stdio.h>
  
  intmain(void)		// 关键字之间缺少空格
  {
      printf("Hello, World!");
          
      return 0;
  }

- 程序连接出错

```C
#include <stdio.h>

int main(void)
{
    print("Hello, World!");		// printf() 函数名错误
        
    return 0;
}