## 一维数组

- 引出问题
- 一维数组的定义
- 一维数组元素的引用
- 一维数组的初始化
- 数组元素的输入输出
- 应用

## 二维数组

- 二维数组的定义
- 二维数组的引用
- 二维数组的初始化
- 应用

## 字符数组

- 字符数组的定义
- 字符数组的初始化
- 应用
- 字符串
- 常用字符串处理函数
  - strlen()
  - strcat()
  - strcpy()
  - strcmp()
- 应用

## 常见错误

- 数组下标越界

  ```c
  #include <stdio.h>
  
  int main(void)
  {
      int a[5] = {1, 2, 3, 4, 5};
      int i;
      for(i = 0; i <= 5; i++)		// 下标应该从 0 到 4
          printf("%d\t", a[i]);
      return 0;
  }
  ```

- 二维数组的引用错误

  ```c
  #include <stdio.h>
  
  int main(void)
  {
      int a[2][3] = {1, 2, 3, 4, 5, 6};
      printf("%d", a[0, 1]);		// 二维数组引用错误
      
      return 0;
  }
  ```

- 给字符数组赋值字符串

```c
#include <stdio.h>

int main(void)
{
    char s[5];
    s = "china";	// 给字符数组赋值字符串
    printf("%s", s);
    
    return 0;
}
```

