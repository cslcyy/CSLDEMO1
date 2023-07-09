#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//int main()
//{
//	int i=0L;
//	int j = 4962710;
//	printf("%d\n%d\n", i, j);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	short k = 32767;
//	//int k = 32767;
//	short i = k + 1;
//	short j = k + 3;
//	printf("%d\n%d\n", i,j);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = -3;
//	a=(a > 0) ? a : -a;
//	printf("%d", a);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	int b = 5;
//	int c=(a = 2, b = 5, b++, a + b);
//	printf("%d", c);
//	return 0;
//}


//在C语言中，二维数组元素在内存中的存放顺序是 行列
//若自定义函数要求返回一个值，则应在该函数体中有一条(return)语句,若自定义函数要求不返回一个值，则应在该函数说明时加一个类型说明符号(void)
//函数中的形参和调用时的实参都是数组名时,传递方式为（ 地址传送 ）,都是变量时,传递方式为( 值传送 )
//C语言允许函数值类型缺省定义，此时该函数值隐含的类型是(int)
//凡是函数中未指定存储类别的局部变量,其隐含的存储类别是(auto)



////从键盘输入的10个整数中，找出第一个能被7整除的数。若找到，打印此数后退出循环；若未找到，打印“not exist”
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int j = 0;
//	for (j = 0; j < 10; j++)
//	{
//		if (arr[j] % 7 == 0)
//		{
//			printf("%d", arr[j]);
//			break;
//		}
//		else if (j==9)
//		{
//			printf("not exist");
//		}	
//	}
//	return 0;
//}



////已有变量定义和函数调用语句：int x = 57; isprime(x); 
////函数isprime()用来判断一个整数a是否是素数，若是素数，函数返回1，否则返回0。请编写isprime函数。
//#include<stdio.h>
//#include<math.h>
//int isprime(int x)
//{
//	int a = 0;
//	for (a = 2; a<=sqrt(x); a++)
//	{
//		if (x % a == 0)
//		{
//			return 0;
//			break;
//		}
//	}
//	if (a > sqrt(x))
//		return 1;
//}
//int main()
//{
//	int x = 57;
//	int ret = isprime(x);
//	if (ret == 1)
//	{
//		printf("%d是素数", x);
//	}
//	else if(ret == 0)
//	{
//		printf("%d不是素数", x);
//	}
//	return 0;
//}



//C语言从源程序的书写到上机运行输出结果要经过(编辑、编译、连接、执行)四个步骤
//C语句( 没有 )输入、输出语句
//逻辑运算符"&&、||、!"中的优先级是 ! && ||




////给定一个正整数，判断它是否能同时被3、5、7整除。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	printf("请输入一个数字:");
//	scanf("%d", &i);
//	if (i % 3 == 0 && i % 5 == 0 && i % 7 == 0)
//	{
//		printf("%d能被3、5、7同时整除\n", i);
//	}
//	else
//	{
//		printf("%d不能被3、5、7同时整除\n", i);
//	}
//	return 0;
//}



////从键盘录入10个数到数组A，请将它们进行由小到大的排序(方法不限)
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < 9; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10 - 1 - i; j++)
//		{
//			int temp = 0;
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//	printf("排序之后的数组为:");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	double f;
//	double g;
//	double h;
//	f = 1;
//	g = f + 5 / 4;
//	h = f + 5 / 4.0;
//	printf("%lf\n%lf\n", g,h);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 6;
//	b *= a + 1;
//	printf("%d", b);
//}


//#include<stdio.h>
//int main()
//{
//	int s = 2;
//	int t = 2;
//	int c1 = 2;
//	int c2 = 2;
//	int c3 = 2;
//	int c4 = 2;
//	(s = c1 == c2) || (t = c3 > c4);    //     首先 || 符号是：语句一 || 语句二，如果语句一符合条件，即语句一为真，那么不执行语句二
//	printf("%d\n%d\n", s, t);
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	char h = 'a';
//	char g = 'f';
//	int a[6] = { 1,2,3,4,5,6 };
//	int A = a[g - h];
//	//int C = a['d' - 'h'];
//	int C = a['d' - h];
//	int D = a['h' - 'c'];
//	printf("%d\n%d\n%d\n", A, C, D);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a[7] = { 1,2,3,4,5,6,7 };
//	int* p = a;
//	int b = *p;
//	int c = *a;
//	int d = a[7];
//	int e = a[p - a];
//	printf("%p\n%d\n%d\n%d\n%d\n", a, b, c, d, e);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 6;
//	int y = 6;
//	b -= a;
//	y = a++;
//	printf("%d\n%d\n", b, y);
//	return 0;
//}



//在C语言中,字符串常量是用(双引号)一串字符
//数组是表示类型相同的数据，而结构体则是若干(数据类型不同)的数据项集合
//C语言中文件是指(存储在外部介质上的相关数据集合)


////1.求元素个数为10的一维数组元素中的最大值和最小值。
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int MAX = arr[0];
//	int MIN = arr[0];
//	int j = 0;
//	for (j =0; j < 10; j++)
//	{
//		if (arr[j] > MAX)
//		{
//			MAX = arr[j];
//		}
//	}	
//	for (j = 0; j < 10; j++)
//	{
//		if (arr[j] < MIN)
//		{
//			MIN = arr[j];
//		}
//	}
//	printf("数组中的最大值是%d\n数组中的最小值是%d\n",MAX,MIN);
//	return 0;
//}



////将矩阵 9   7   5      倒置为 9   3   4
////
////      3   1   2             7   1   6
////
////      4   6   8             5   2   8
//
//#include<stdio.h>
//int main()
//{
//	int arr[3][3] = { {9,7,5},{3,1,2},{4,6,8} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = i+1; j < 3; j++)
//		{
//			int temp = 0;
//			temp = arr[i][j];
//			arr[i][j] = arr[j][i];
//			arr[j][i] = temp;
//		}
//	}
//	for(i=0;i<3;i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (i == 1 && j == 0)
//			{
//				printf("\n");
//			}
//			else if (i == 2 && j == 0)
//			{
//				printf("\n");
//			}
//			printf("%d ", arr[i][j]);		
//		/*	if (j == 2)
//			{
//				printf("\n");
//			}*/
//		}
//	}
//	return 0;
//}


////编写函数:输入两个正整数m, n, 求它们的最大公约数和最小公倍数。
//#include<stdio.h>
//int gcd(int m, int n)
//{
//	if (n == 0)
//	{
//		return m;
//	}
//	else
//	{
//		return(gcd(n, m % n));
//	}
//}
//int tim(int m, int n)
//{
//	return m * n / gcd(m, n);
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("请输入两个数字:");
//	scanf("%d%d", &m, &n);
//	int ret1 = gcd(m, n);
//	int ret2 = tim(m, n);
//	printf("最大公约数是%d\n", ret1);
//	printf("最小公倍数是%d\n", ret2);
//	return 0;
//}



