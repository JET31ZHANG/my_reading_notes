## 循环程序结构

- while循环
- do-while循环
- for循环

## 循环的嵌套和特殊控制语句

- 循环的嵌套
- 3种循环语句的比较
- 特殊控制语句
  - break
  - continue
  - goto

## 结构化程序设计思想

- 设计方法
- 设计优点

## 常见错误

- 忘记给变量赋初值

  ```C
  #include <stdio.h>
  int main(void)
  {
  	int i, s;		// 变量 s 未赋初值
      for(i = 1; i <= 10; i++)
      {
          s = s * i;
          printf("s = %d\n", s);
  	}
      return 0;
  }
  ```

- 大括号不匹配

  ```c
  #include <stdio.h>
  int main(void)
  {
      int i, s;
      for(i = 1; i <= 10; i++)
      {
          s = s * i;
          printf("s = %d\n", s);	// 右大括号丢失
      return 0;
  }
  ```

- while语句后面多加分号

  ```c
  #include <stdio.h>
  int main(void)
  {
      int i = 1; s = 1;
      while (i <= 10);	// while 语句后多加分号
      {
          s = s * i;
          i++;
          printf("s = %d\n", s);
  	}
      return 0;
  }
  ```

- for语句表达式之间使用逗号

```c
#include <stdio.h>
int main(void)
{
    int i, s = 1;
    for(i = 1, i <= 10, i++)	// 表达式之间用逗号隔开
    {
        s = s * i;
        printf("s = %d\n", s);
    }
}
```

