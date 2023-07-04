#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//int main()
//{
//	int y = 0;
//	y = (13 > 12 ? 15 : 6 > 7 ? 8 : 9);
//    //该三目操作符计算顺序为从右往左计算
//	//这条语句等价于
//	/*if (13 > 12)
//	{
//		y = 15;
//	}
//	else
//	{
//		if (6 > 7)
//		{
//			y = 8;
//		}
//		else
//		{
//			y = 9;
//		}
//	}*/
//	printf("%d", y);
//}



// C语言这以追加方式打开一个文件应选择  "rb" 参数
// 在函数中默认存储类型说明符的变量应该是 自动 存储类型
// C语言以只读方式打开一个文件应选择  "r" 参数



////输出1—100之间不能被12整除的数
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 12 != 0)
//			printf("%d ", i);
//	}
//	return 0;
//}


//编程计算下列表达式：s = n!（n从键盘上输入)
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int s = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		s = s * i;
//	}
//	printf("%d", s);
//	return 0;
//}




////从键盘上输出10个整数存入一维数组中，按由大到小的顺序输出
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	//int k = 0;
//	int arr[5] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		int t = 0;
//		if (arr[i] < arr[i + 1])
//		{
//			t = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = t;
//			printf("%d ", arr[i]);
//		}
//		else
//		{
//			printf("%d ", arr[i]);
//		}
//	}	
//	return 0;
//}




//定义fp为文件型指针变量的定义方法为 FILE *fp
//两个指针变量的值相等时，表明两个指针变量是占据同一内存单元
//不论在主函数还是自定义函数中，只要说明了变量，就可为其分配存贮单元  →→  这句话是错的！！！
//如果是指针变量，说明了并不会分配内存，要分配内存必须用 malloc 或者  new 语句来分配内存。


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d,%d", &a, &b);
//	printf("%d\n%d\n", a, b);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	float c = 30.0;
//	float f;
//	f = (6 * c) / 5 + 32;
//	printf("f=%f", f);
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int t = 1;
//	for (i = 1; i <= 4; i++)
//	{
//		t = t * i;
//		sum = sum + t;
//	}
//	printf("%d", sum);
//}



//#include<stdio.h>
//int MAX(int a, int b, int c)
//{
//	if (a > b && a > c)
//	{
//		return a;
//	}
//	else if (a < b && b < c)
//	{
//		return c;
//	}
//	else
//	{
//		return b;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	int ret=MAX(a, b, c);
//	printf("%d", ret);
//	return 0;
//}




//#include<stdio.h>
//int stu(int x, int y)
//{
//	return (x - y) * (x - y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret = stu(a, b);
//	printf("%d", ret);
//}




////从键盘上输入10个评委的分数，去掉一个最高分，去掉一个最低分，求出其余8个人的平均分，输出平均分，最高分，最低分。
//#include<stdio.h>
//int main()
//{
//	float arr[10];
//	int i = 0;
//	float sum = 0;
//	float aver = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%f", &arr[i]);
//		sum = sum + arr[i];
//	}
//	float max = arr[0];
//	float min = arr[0];
//	for(i=1;i<10;i++)
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		else if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	sum = sum - max - min;
//	aver = sum / 8;
//	printf("%f", aver);
//	return 0;
//}







//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	(n = 6 * 4, n + 6), n * 2;
//	printf("n=%d", n);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a[] = { 2,4,6,8,10 };
//	int y = 1;
//	int x;
//	int* p;
//	p = &a[1];
//	for (x = 0; x < 3; x++)
//	{
//		y += *(p + x);
//		//printf("%d\n", y);
//	}
//	printf("%d\n", y);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a[5];
//	int k;
//	for (k = 0; k < 5; k++)
//	{
//		a[k] = 10 * k;
//	}
//	printf("%d", a[k - 1]);
//}



//getchar()的作用是从键盘上读入一个字符，并带回显
//getchar()函数等待输入直到按回车才结束，回车前的所有输入字符都会逐个显示在屏幕上，但只有第一个字符作为函数的返回值。
//getchar函数原型如下：
//函数格式：int getchar(void);
//功 能：从标准输入设备读取下一个字符
//返 回 值：返回所读字符，否则返回 - 1



////从键盘上输入20个元素的值存入一维数组a中，然后将下标为（1、3、5、7、9……）的元素值赋值给数组b，输出数组b的内容
//#include<stdio.h>
//int main()
//{
//	int arr1[20] = { 0 };
//	//int arr2[10] = { 0 };
//	int i= 0;
//	//int j = 0;
//	for (i = 0; i < 20; i++)
//	{
//		scanf("%d", &arr1[i]);
//		if (i % 2 != 0)
//		{
//			printf("%d ", arr1[i]);
//		}
//	}
//	return 0;
//}




////编程序求 3,-30,20,6,77,2,0,-4,-7,99这十个数中最大值与最小值。
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 3,-30,20,6,77,2,0,-4,-7,99 };
//	int max = arr[0];
//	int min = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		else if (arr[i] < min)
//		{
//			min = arr[i];
//		}		
//	}
//	printf("max=%d\nmin=%d", max, min);
//	return 0;
//}



////输入两个整数，调用函数stu()求两个数和的立方，返回主函数显示结果
//#include<stdio.h>
//int stu(int x, int y)
//{
//	return (x + y) * (x + y) * (x + y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret = stu(a, b);
//	printf("%d\n", ret);
//	return 0;
//}




////编程计算1 - 100之间的奇数和与偶数和
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	for(i=1;i<=100;i++)
//	{
//		if (i % 2 != 0)
//		{
//			sum1 = sum1 + i;
//		}
//		else if (i % 2 == 0)
//		{
//			sum2 = sum2 + i;
//		}
//	}
//	printf("奇数的和=%d\n偶数的和=%d\n", sum1, sum2);
//	return 0;
//}