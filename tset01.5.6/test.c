//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	printf("hehe");
//		return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//	return 0;
//}
//int b = 20;/*大括号外部（全局变量）*/
//int main()
//{
//	//int age = 20;
//	//double price = 66.6;
//	//int hight = 180;
//	//float weight = 88.5;
//	int a = 10;/*局部变量*/
//	return 0;
//}
//int a = 100;
//int main()//当全局变量和局部变量名字相同的情况下，局部优先。但是不建议用相同变量名字。 
//{
//	int a = 10;
//	printf("a=%d",a);
//	return 0;
//}
//写一个代码，计算2个整数的和
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	//输入2个整数，求和，输出结果
//	scanf_s("%d %d",&num1,&num2);//scanf 是一个输入函数,scanf_c是vs编译器自己的函数，非标准C语言函数
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	{
//		
//		printf("a=%d\n", a);//局部变量的作用域就是局部变量说在的范围
//	}
//	printf("a=%d\n", a);
//
//	return 0;
/*}*/
//int a = 10;
//extern int a;//声明来外部的符号
//void test()
//{
//	printf("test--%d\n", a);
//}
//int main()
//{
//	test();
//	{
//
//		printf("a=%d\n", a);//
//	}
//	printf("a=%d\n", a);
//
//	return 0;
//} 
//int main()
//{
//	const int a = 0;
//	printf("%d\n", a);//在变量a前加const，使变量数值无法被修改。
//	return 0;
//}
//#define MAX 100
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n",a);//使用define定义符号MAX
//	return 0;
//}
//enum Color
//{//枚举常量
//	RED,
//	GREEN,
//	BLUE
//};
//enum Sex
//{//枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Color c = RED;
//	return 0;
////}
//#include<string.h>
//int main()
//{
//	//char ch = "w";//把一个字符常量“w”存进变量ch.
//	//char arr[10] = "abcdefg";//把一个字符串存进一个10位的字符数组
//	char arr1[] = "abcdef";//不在括号内定义数量，则字符数组大小根据字符串大小定义,含结束标志\0
//	char arr2[] = { 'a','b','c','d','e','f'};//不含结束标志\0
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);//因为不含结束标志，一直向后打印，所以打印出错
//	//char arr3[] = { 'a','b','c','d','e','f','\0'};
//	//printf("%s\n", arr3);
//	//int len = strlen("abc");//求字符串长度的一个函数，string length,使用这个库函数需要包含头文件string.h
//	//printf("%d\n", len);
//	printf("%d\n", strlen(arr1));//长度为6
//	printf("%d\n", strlen(arr2));//没有/0，长度随机
//
//	return 0; 
//}
//int main()
//{
//	printf("abcn");
//	printf("abc\n");
//	return 0;
//}
int main()
{
	//printf("%c\n", '\'');
	//printf("\"\n");
	//printf("abcd\0ef");
	//printf("abcd\\0ef");//在\0前加\,使打印\0，而不是作为字符串的结束标志
	printf("c;\test\test.c\n");//\t为tab的转译字符，无法正常打印路径
	printf("c;\\test\\test.c\n");//通过在转译字符前增加\ ，使得可以正常打印
	return 0;
}