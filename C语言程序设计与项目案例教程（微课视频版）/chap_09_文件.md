## 文件的概述和基本操作

- 文件概述
  - 文件分类
  - 文件指针
- 文件的打开、关闭
  - 文件打开函数 fopen()
  - 文件关闭函数 fclose()
- 文件的读写
  - 写字符函数 fputc()
  - 读字符函数 fgetc()
  - 写字符串函数 fputs()
  - 读字符串函数 fgets()
  - 数据块读写函数 fread() fwrite()
  - 格式化读写函数 fscanf() fprintf()
- 文件定位
  - rewind()
  - fseek()
  - ftell()
  - feof()
  - ferror()
  - clearerr()

## 常见错误

- 文件操作要素不全

- 打开方式有误

  ```c
  // 用只读方式打开文件，却试图向该文件写入数据，显然是不行的
  if((fp = fopen("test", "r")) == NULL)
  {
  	printf("Cannot open file!");
      exit(0);
  }
  fputs(str, fp);
  ```

- 文件位置指针混乱
