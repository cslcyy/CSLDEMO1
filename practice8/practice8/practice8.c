#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//} 



//#include<stdio.h>
//int main()
//{
//	int k = 0;
//	k = printf("OK\n");
//	printf("%d\n", k);
//	return 0;
//}



//#include<stdio.h>
//void convert(char ch)
//{
//	if (ch < 'Z')
//	{
//		convert(ch + 1);
//	}
//	printf("%c", ch);
//}
//int main()
//{
//	convert('A');
//	printf("\n");
//	return 0;
//}



//#include<stdio.h>
//int test(int i, int j, int k)
//{
//	if ((i + j) > k && (i - j) < k && (i + k) > j && (i - k) < j && (j + k) > i && (j - k) < i)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	printf("请输入三角形的三边长\n");
//	scanf("%d%d%d", &i, &j, &k);
//	int ret=test(i, j, k);
//	if (ret == 1)
//	{
//		printf("这三个数可以组成三角形\n");
//		if (i * i + j * j == k * k || i * i + k * k == j * j || j * j + k * k == i * i)
//		{
//			printf("这个三角形为直角三角形\n");
//		}
//		else if (i == j && i != k || i == k && i != j || j == k && j != i)
//		{
//			printf("这个三角形为等腰三角形\n");
//		}
//		else if (i == j && j == k)
//		{
//			printf("这个三角形为等边三角形\n");
//		}
//		else
//		{
//			printf("这个三角形只是一个普通三角形\n");
//		}
//	}
//	else
//	{
//		printf("这三个数不可以组成三角形\n");
//	}
//	return 0;
//}



//#include<stdio.h>
//int test(float a, float b)
//{
//	if ((a/b >= 0.6179999) && (a/b <= 0.6180001))
//	{
//		printf("%f\n", a / b);
//		return 1;
//	}
//	else
//	{
//		printf("%f\n", a / b+1);
//		return 0;
//	}
//}
//int main()
//{
//	float a = 0.0;
//	float b = 0.0;
//	printf("请输入两个数字:\n");
//	scanf("%f%f", &a, &b);
//	double i = a / b;
//	printf("i=%f\n", i);
//	int ret=test(a, b);
//	if (ret == 1)
//	{
//		printf("a是b的黄金分割点\n");
//	}
//	if (ret == 0)
//	{
//		printf("a不是b的黄金分割点\n");
//	}
//}


//#include<stdio.h>
//int main()
//{
//	int flat[1001];
//
//	for (int i = 100; i <= 200; i++)
//	{
//		flat[i] = 1;
//		for (int j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flat[i] = 0;
//			}
//		}
//	}
//	for (int i = 100; i <= 200; i++)
//	{
//		if (flat[i] == 1)
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int x = 2;
//	int y = 3;
//	int z;
//	z = x++ || y--;
//	printf("%d\n%d\n%d\n", x, y, z);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int date = 0;
//	float p = 0.0;
//	printf("Enter item number:\n");
//	scanf("%d",&i);
//	printf("Enter unit price:\n");
//	scanf("%f",&p);
//	printf("Enter purchase date (mm/dd/yyyy):\n");
//	scanf("%d", &date);
//	printf("Item    Unit\nPurchase\n\tPrice\tDate\n%d\t$%-.2f\t%-d", i, p, date);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	printf("请输入一个三位数\n");
//	scanf("%1d", &a);
//	scanf("%1d", &b);
//	scanf("%1d", &c);
//	printf("三位数逆序输出是:%d%d%d", c, b, a);
//}



//#include<stdio.h>
//int main()
//{
//	printf("%1d", 123);
//	printf("%2d", 123);
//	printf("%3d", 123);
//	printf("%4d", 123);
//	printf("%5d\n", 123);
//	printf("%-1d", 123);
//	printf("%-2d", 123);
//	printf("%-3d\n", 123);
//	printf("%-4d", 123);
//	printf("%-5d", 123);
//	printf("%-6d", 123);
//}

//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	float a = 5.5;
//	//101.1
//	system("pause");
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
int main()
{
	signed char c = 128;
	signed char b = 129;
	signed char a = 130;
	printf("%d\n%d\n%d\n", c,b,a);
	int i = 10;
	(c + i > 10) ? puts("sum>10") : puts("sum<=10");
	system("pause");
	return 0;
}