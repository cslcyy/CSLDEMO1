#define _CRT_SECURE_NO_WARNINGS

////写代码将三个数从大到小输出
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp=0;
//	scanf("%d%d%d", &a, &b, &c);
//	//算法实现
//    //a中放最大值
//	//b次之
//	//c中最小值
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tpm = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
////输出100-200之间的素数
//{
//	int i = 0;
//	int count = 0;
//	//for (i = 100; i <= 200; i++)
//    for (i = 101; i <= 200; i+=2)        //偶数不可能为素数，所以从101开始逐个加2，比用上面那行更优化一点
//	{
//		int a = 0;
//		//for (a = 2; a < i ;a++)       //试除法，用2~（i-1）试除
//		for (a = 2; a <= sqrt(i); a++)    //sqrt开平方   如果m能写出m=a*b的形式，那么a和b之中必有一个小于m的开方。
//		{
//			if (i % a == 0)
//			{
//				break;
//			}
//		}
//		//if (a==i)
//		if(a>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}


////输出1-100之间9的个数
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//	//else if (i / 10 == 9)
//		if(i/10==9)
//			count++;
//	}
//	printf("count=%d", count);
//	return 0;
//}


////程序输出9*9乘法表
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//			//printf("%d*%d=%d ", i, j, i * j);    //能输出九九乘法表但是没有对齐不好看
//		    //printf("%d*%d=%2d ", i, j, i * j);   //%2d右对齐，好看了一些
//		      printf("%d*%d=%-2d ", i, j, i * j);   //%-2d左对齐，完美
//		printf("\n");
//	}
//	return 0;
//}


//输出一个数组里的最大数
#include<stdio.h>
int main()
{
	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	int i = 0;
	int max = arr[0];    //最大值
	int sz = sizeof(arr) / sizeof (arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("max=%d\n", max);
	return 0;
}