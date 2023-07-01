#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	char arr1[] = { "bit" };
//	char arr2[] = { "########" };
//	strcpy(arr2, arr1);
//	a = strlen(arr2);
//	b = strlen(arr1);
//	c = sizeof(arr2);
//	d = sizeof(arr1);
//	printf("%d\n%d\n%d\n%d\n", a,b,c,d);
//	printf("%s\n", arr2);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[] = "today is a bad day";
//	memset(str, 'A', 6);
//	printf("%s\n", str);
//	return 0;
//}




////写一个函数可以找出两个数的最大值
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	return (x > y) ? x : y;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int max;
//	max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}



////写一个函数交换两个数的值
//#include<stdio.h>
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	//Swap1函数在调用的时候,x,y拥有自己的空间，同时拥有了和实参一模一样的内容
//	// 所以可以简单地认为：实参实例化之后其实相当于实参的一份临时拷贝
//	//传值调用:函数的形参和实参分别占用不同的内存块，对形参的改变不会影响实参
//	Swap1(a, b);   //这个不能实现交换ab的值
//	printf("%d %d\n", a, b);
//	//传址调用:传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
//	//这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量
//	Swap2(&a, &b);
//    printf("%d %d\n", a, b);
//	return 0;
//}




////写一个函数判断一个数是不是素数
////是素数返回1，不是素数返回0
//#include<stdio.h>
//#include<math.h>
//int is_prime(int x)
//{
//	int j = 0;
//	//for (j = 2; j < x; j++)
//	for (j = 2; j<=sqrt(x); j++)   //比上面的优化一点点
//	{
//		if (x % j == 0)
//			return 0;
//	}
//	return 1;
//}
////用上面函数输出100-200之间的素数
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200;i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}




////写一个函数判断一年是不是闰年
//#include<stdio.h>
//int is_leap_year(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
////用上面函数输出1000-2000年间的闰年
//int main()
//{
//	int year = 0;
//	for(year=1000;year<=2000;year++)
//	{
//		if (1==is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}






////写一个函数，实现整形有序数组的二分查找  binary_search
//#include<stdio.h>
//int binary_search(int arr[], int k,int sz)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]< k)
//		{
//			left = mid + 1;
//		}
//		else if(arr[mid] >k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
////如果找到了就返回这个下标，找不到就返回-1
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]); //传递过去的是arr首元素的地址，所以把这行写在函数里无法得到结果
//	int k = 7;
//	int ret = binary_search(arr, k,sz);  
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了,下标是%d\n", ret);
//	return 0;
//}



//#include<stdio.h>
////写一个函数，实现整形有序数组的二分查找  binary_search
//int binary_search(int arr[], int a, int b)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = b- 1;
//	//int mid = (left + right) / 2;   //如果在这里二分不写在循环里程序执行不出结果
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < a)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > a)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);  //传递过去的是arr首元素的地址，所以把这行写在函数里无法得到结果
//	int k = 7;
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是%d\n",ret);
//	return 0;
//}



////binary_search
//#include<stdio.h>
//int binary_search(int arr[], int a, int b)
//{
//	int left = 0;
//	int right = a + 1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < b)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > b)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -5;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 8;
//	int ret = binary_search(arr, sz, k);
//	if (ret == -5)
//		printf("找不到\n");
//	else
//        printf("找到了,下标是%d\n", ret);
//	return 0;
//}




////写一个函数，每调用一次这个函数，就会将num的值加1
//#include<stdio.h>
//void Add(int* a)
//{
//	(*a)++;
//}
//int main()
//{
//	int num = 58;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	//printf 返回值：Each of these functions returns the number of characters printed, or a negative value if an error occurs.
//	//              这些函数中的每一个都返回打印的字符数                                      如果出现错误，则返回负值
//	printf("%d", (printf("%d", printf("%d", 43))));
//	return 0;
//}




////程序由上往下执行,函数写在主程序之后无法执行需要在主函数之前声明，声明表面有这个函数即可，内部无所谓
////函数声明
//// int ADD(int x, int y);
////int ADD(int, int);
//int ADD();
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//函数调用
//	sum = ADD(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
////函数调用
//int ADD(int x,int y)
//{
//    int z = x+y;
//	return z;
//}

//#include<stdio.h>
//#include"ADD.h"   //调用库函数用<>,调用自定义函数用""
////主函数写在这里，将ADD的定义和声明分别写在头文件ADD.h和源文件ADD.c中,在主函数这里直接调用即可
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//函数调用
//	sum = ADD(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


////给一个数用递归函数输出它的每一位
//#include<stdio.h>
//void print(int x)
//{
//	if (x / 10 != 0)
//	{
//		print(x / 10);
//	}
//	printf("%d ", (x % 10));
//	//return (x % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	//int ret = print(num);
//	//printf("%d", ret);
//	return 0;
//}



//#include<stdio.h>
//void print(int x)
//{
//	if (x / 10 != 0)
//		print(x/10);
//	printf("%d ", x % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}



////编写程序不允许创建临时变量，求字符串的长度
//#include<stdio.h>
//#include<string.h>
//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "gqsb";
//	//int len = strlen(arr);
//	//printf("%d", len);
//
//	int len=my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}



////编写程序不允许创建临时变量，求字符串的长度(有临时变量版本)
//#include<stdio.h>
////#include<string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "gqsb";
//	//int len = strlen(arr);   //库函数直接可求
//	int len = my_strlen(arr);  //自定义函数
//	printf("len=%d", len);
//	return 0;
//}




////编写程序不允许创建临时变量，求字符串的长度(无临时变量版本)（递归函数实现）
//#include<stdio.h>
//int my_strlen(char*str)
//{
//	if (*str != '\0')
//		//return 1 + my_strlen(str+1);     //第一行和第二行都可以，第三行执行不了因为str++是str值不变再++
//	    return 1 + my_strlen(++str);       
//	    //return 1 + my_strlen(str++);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "gqsb";
//	int len = my_strlen(arr);
//	printf("len=%d", len);
//	return 0;
//}






////编写程序不允许创建临时变量，求字符串的长度(无临时变量版本)（递归函数实现）
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(++str);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "gqsb";
//	int len = my_strlen(arr);
//	printf("len=%d", len);
//	return 0;
//}


////求n的阶乘(不考虑溢出)
//#include<stdio.h>
//int factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * factorial(n - 1);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int s = factorial(i);
//	printf("他的阶乘是%d", s);
//	return 0;
//}





////给一个数用递归函数输出它的每一位
//#include<stdio.h>
//int my_print(int x)
//{
//	if (x / 10 != 0)
//	{
//		my_print(x / 10);
//	}
//	//printf("%d ", (x % 10));
//	return (x % 10);
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个数字:\n");
//	scanf("%d", &num);
//	//print(num);
//	int ret =my_print(num);
//	printf("%d", ret);
//	return 0;
//}



//#include<stdio.h>
//int fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac1(n);   //循环的方式
//	printf("%d", ret);
//	return 0;
//}




//#include<stdio.h>
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);   //递归的方式
//	printf("%d", ret);
//	return 0;
//}


//#include<stdio.h>
////斐波那契数列
////1 1 2 3 5 8 13 21 34....
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3) //测试第三个斐波那契数列要被计算的次数
//	{
//		count++;
//	}
//
//
//	if (n <= 2)
//		return 1;
//	if (n > 2)
//		return Fib(n - 1) + Fib(n - 2);     //用递归计算斐波那契数列要重复大量的计算重复的工作
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD-测试驱动开发:先看这个函数怎么使用，再看怎么去写这个函数
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	printf("count=%d\n", count);
//	return 0;
//}




//#include<stdio.h>
//////斐波那契数列
//////1 1 2 3 5 8 13 21 34....
//int Fib(int n)      //用这种方法运算速度大大提升
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD-测试驱动开发:先看这个函数怎么使用，再看怎么去写这个函数
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}




//#include<stdio.h>
//void test(int n)
//{
//	if (n < 100000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}