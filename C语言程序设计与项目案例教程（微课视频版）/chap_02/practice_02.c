/*
*	字符串加密应用实战
*
*	实战背景：运用 C 语言知识来实现最简单的信息加密技术 —— 字符串加密技术
*
*	实战目的：
*			1）掌握字符的定义方法
*			2）ASCII 码值的应用，运算符、表达式的使用
*			3）printf() 函数连续输出多个字符
*
*	实战内容：编写 C 语言程序，实现对字符串的加密。
*			 要求字符串中的每个字符都使用相应字符后面的第6个字符代替原来的字符。
*			 例如，字符串 "hello"，加密之后，字符串变为 "nkrru"
*			 编写一个程序对 "hello" 字符串进行加密
*
*   样例输出：
*           加密后的字符串为：
*           nkrru
*/
#include <stdio.h>

int main()                     
{                                
	char a, b, c, d, e;
	a = 'h';
	b = 'e';
	c = d = 'l';
	e = 'o';
	a = a + 6;
	b = b + 6;
	c = c + 6;
	d = d + 6;
	e = e + 6;

	printf("加密后的字符串为：\n");
	printf("%c%c%c%c%c\n", a, b, c, d, e);

	return 0;                    
}
