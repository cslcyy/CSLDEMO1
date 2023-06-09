#define _CRT_SECURE_NO_WARNINGS


//学习 static 定义静态变量的用法。
//在 C 语言中，static 关键字用于声明静态变量。静态变量与普通变量不同，它们的生存期和作用域是不同的。
//静态变量在声明时被初始化，只被初始化一次，而且在整个程序的生命周期内都保持存在。
//在函数内声明的静态变量只能在该函数内访问，而在函数外声明的静态变量则只能在该文件内访问。

//以下实例中 foo() 函数声明了一个静态变量 x，并将其初始化为 0。每次调用 foo() 函数时，x 的值都会加 1，并打印出新的值。
//由于 x 是静态变量，它在程序的整个生命周期中都存在，而不仅仅是在函数调用时存在。
//因此，每次调用 foo() 时，它都可以记住 x 的值，并在此基础上递增。

//#include<stdio.h>
//void foo()
//{
//	static int x = 0;
//	x++;
//	printf("%d\n", x);
//}
//int main()
//{
//	foo();   //输出1
//	foo();   //输出2
//	foo();   //输出3
//	return 0;
//}


//学习使用auto定义变量的用法

//#include<stdio.h>
//int main()
//{
//	int i, num;
//	num = 2;
//	for (i = 0; i < 3; i++)
//	{
//		printf("num变量为%d\n", num);
//		num++;
//		{
//			auto int num = 5;
//			printf("内置模块num变量为%d\n", num);
//			num++;
//		}
//	}
//		return 0;
//}

////学习使用static的另一用法
//#include<stdio.h>
//int main()
//{
//	int i, num;
//	num = 2;
//	for (i = 0; i < 3; i++)
//	{
//		printf("num变量为%d\n", num);
//		num++;
//		{
//			static int num = 1;
//			printf("内置模块num变量为%d\n", num);
//			num++;
//		}
//	}
//	return 0;
//}

//学习使用如何调用外部函数
//#include<stdio.h>
//int a, b, c;
//void add()
//{
//	int a;
//	a = 3;
//	c = a + b;
//}
//int main()
//{
//	a = b = 4;
//	add();
//	printf("c的值为%d\n", c);
//	return 0;
//}

////学习使用register定义变量的方法
//#include<stdio.h>
//int main()
//{
//	register int i;
//	int tmp = 0;
//	for (i = 1; i <= 100; i++)
//		tmp += i;
//	printf("总和为%d\n", tmp);
//	return 0;
//}


//宏#define命令练习
//#include<stdio.h>
//#define TRUE 1
//#define FALSE 0
//#define SQ(x) (x)*(x)
//int main()
//{
//	int num;
//	int again = 1;
//	printf("如果值小于50程序将终止。\n");
//	while (again)
//	{
//		printf("\n请输入数字:");
//		scanf("%d", &num);
//		printf("该数字的平方为%d\n", SQ(num));
//		if (num >= 50)
//		{
//			again = TRUE;
//		}
//		else
//		{
//			again = FALSE;
//		}
//	}
//	return 0;
//}

//宏#define命令练习2
//#include<stdio.h>
//#define exchange(a,b){int t;t=a;a=b;b=t;}//注意放在一行里
//int main()
//{
//	int x = 10;
//	int y = 20;
//	printf("x=%d,y=%d\n", x, y);
//	exchange(x, y);
//	printf("x=%d,y=%d", x, y);
//	return 0;
//}



////宏#define命令练习3
//#define LAG >
//#define SMA <
//#define EQ ==
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	printf("请输入两个数字:\n");
//	scanf("%d%d", &i, &j);
//	if (i LAG j)
//	{
//		printf("%d大于%d\n", i, j);
//	}
//	else if (i EQ j)
//	{
//		printf("%d等于%d\n", i, j);
//	}
//	else if (i SMA j)
//		printf("%d小于%d\n", i, j);
//	else
//		printf("没有值\n");
//	return 0;
//}


//#if #ifdef和#ifndef的综合应用
//#include<stdio.h>
//#define MAX
//#define MAXIMUM(x,y)(x>y)?x:y
//#define MINIMUM(x,y)(x>y)?y:x
//int main()
//{
//	int a = 10,b = 20;
//#ifdef MAX
//	printf("更大是数字是%d\n", MAXIMUM(a, b));
//#else
//	printf("更小的数字是%d\n", MINIMUM(a, b));
//#endif
//#ifndef MIN
//	printf("更小的数字是%d\n", MINIMUM(a, b));
//#else
//printf("更大的数字是%d\n", MAXIMUM(a, b));
//#endif
//#undef MAX
//#ifdef MAX
//	printf("更大的数字是%d\n", MAXIMUM(a, b));
//#else
//	printf("更小的数字是%d\n", MINIMUM(a, b));
//#endif
//#define MIN
//#ifndef MIN
//	printf("更小的数字是%d\n", MINIMUM(a, b));
//#else
//	printf("更大的数字是%d\n", MAXIMUM(a, b));
//#endif
//     return 0;
//}


#include"test.h"
#include<stdio.h>
int main()
{
	int i = 10;
	int j = 20;
	if (i LAG j)
	{
		printf("%d大于%d\n", i, j);
	}
	else if (i EQ j)
	{
		printf("%d等于%d\n", i, j);
	}
	else if (i SMA j)
	{
		printf("%d小于%d\n", i, j);
	}
	else
	{
		printf("没有值\n");
	}
	return 0;
}