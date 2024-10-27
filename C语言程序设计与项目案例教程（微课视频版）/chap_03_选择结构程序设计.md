## if 语句

- if 语句

  - if 后面的表达式必须用”()“括起来
  - if 后面的表达式：关系表达式、逻辑表达式、算术表达式
  - 表达式一定要区分赋值运算符"="和关系运算符"=="

- if-else语句

  ```c
  if(表达式)
      语句1
  else
      语句2
  ```

  - 语句1、语句2 是内嵌语句，每个内嵌语句要以分号结尾
  - else 语句不能作为语句单独使用，必须与 if 配对使用
  - 语句1、语句2 可以是一个简单语句，也可以是一个包含多个语句的复合语句
  - 内嵌语句也可以是一个 if 语句，形成 if 嵌套

- if-else-if 语句

- if语句的嵌套

- if与else配对规则：else 总是与它前面最近的且尚未与其他 else 配对的 if 配对。

## switch 语句

```c
switch(表达式)
{
    case 常量表达式1:	语句1;
    case 常量表达式2:	语句2;
        ...
    case 常量表达式n:	语句n;
    default:		   语句n + 1;
}
```

- 注意：
  - switch后的表达式和case后的常量表达式可以是整型、字符型、枚举型，但不能是实型。
  - 同一个 switch 语句中，各 case 后的常量表达式的值必须互不相同，否则会出现多种执行方案
  - case后的语句可以是一条语句，也可以是多条语句。此时，多条语句不必用大括号{} 括起来。同一个 switch 语句中，各 case 后的常量表达式的值必须互不相同，否则会出现多种执行方案
  - default 可省略，省略时如果没有与switch表达式相匹配的case常量，则不执行任何语句，程序转到switch语句后的下一条语句执行
  - 各case和default子句的先后顺序可以改变，不影响执行效果
  - 如果多种情况都执行相同的程序块，则对应的多个case可以执行同一语句。


## 常见错误

- 误把 "=" 作为 "等于" 运算符

  ```c
  #include <stdio.h>
  int main(void)
  {
      int a;
      scanf("%d", &a);
      if(a = 1)		// 误把 "=" 用作”等于“运算符
          printf("成功！\n");
      else
          printf("失败！\n");
      return 0;
  }
  ```

- 忘记必要的逻辑运算符

  ```c
  #include <stdio.h>
  int main(void)
  {
  	int x;
      scanf("%d", &x);
      if(3 < x < 6)		// 忘记必要的逻辑运算符
          printf("成功！\n");
      else
          printf("失败！\n");
      return 0;
  }
  ```

- 用复合语句时漏掉大括号

  ```c
  #include <stdio.h>
  int main(void)
  {
  	int a, b, t;
      scanf("%d, %d", &a, &b);
      if(a > b)	
          /* 
          	用复合语句时漏掉大括号
          	
          	{
          	    t = a;
      			a = b;
      			b = t;
          	}
          */
          t = a;
      	a = b;
      	b = t;
      printf("a = %d, b = %d\n", a, b);
      return 0;
  }
  ```

- 在不该加分号的地方加分号

    ```c
    #include <stdio.h>
    int main(void)
    {
        int a, b, t = 0;
        scanf("%d, %d", &a, &b);
        if(a == b);			// 在不该加分号的地方加分号
            t = a + b;
        printf("%d\n", t);
        
        return 0;
    }
    ```

