#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int t = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		t = t * i;
//		sum = sum + t;
//	}
//	printf("%d\n", sum);
//}




//#include<stdio.h>
//int main()
//{
//	int x = 4;
//	int y = (++x) + (++x);
//	int z = (x++) + (x++);
//	int i = (++x) - (++x);
//	int j = (x++) - (x++);
//	//int y = (++x);
//	//int y = (x+2) + (++x);
//	printf("%d\n", y);
//	printf("%d\n", z);
//	printf("%d\n", i);
//	printf("%d\n", j);
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[] = { 'h','a','b','c','d' };
//	char b[] = { 'h','a','b','c','d','\0' };
//	int len1 = strlen(a);
//	int len2 = strlen(b);
//	printf("%d\n%d\n", len1, len2);
//}


//#include<stdio.h>
//int main()
//{
//	char x[5];
//	char y[] = { 'h','e','l','l','o' };
//	int x[10] = { 12,13,14,15 };
//	int y[];
//}



//C语言程序设计可以对计算机硬件进行操作
//在定义数组时，有时可以将该数组的维数省略
//任何数组都可以实现对其进行整体操作


////冒泡排序 从小到大
//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i=0 ; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5 - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//
//	printf("排序之后的数组为\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= 10 - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//	printf("从大到小排序后的数组是\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//C语言程序由 函数 构成的，而C语言的函数是由 语句 构成的
//在C语言程序中，对文件进行操作首先要  打开 ；然后对文件进行操作，最后要对文件实行 关闭 操作，防止文件中信息的丢失。
//对字符串进行操作的函数有 字符串长度、取子字符串、字符串替换、字符串复制、字符串拼接 等。
//C语言的一个特点是可以对计算机硬件进行操作
//在C语言程序设计中，字符串数组和字符串不是完全一样的概念
//选择结构(if语句)和循环结构都可以使用嵌套形式


////冒泡升序
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10 - 1 - i; j++)
//		{
//			int temp= 0;
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//	printf("从小到大排序后的数组为:");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	//冒泡排序好之后用二分法查找数组中元素
//	int a = 0;
//	int k = 58;
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[0]))-1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//		{
//			printf("找到了下标是%d\n", mid);
//			break;
//		}		
//	}
//	return 0;
//}




//#include<stdio.h>
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	//int right = sz + 1;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if(arr[mid] > k)
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
//	int arr[13] = { 1,2,3,4,5,6,7,8,9,10,11,12,13};
//	int k = 8;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr, k, sz);
//	if (ret == -5)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了下标是%d\n", ret);
//	}
//}




//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int s = 0;
//	for (i = 1; i < 21; i++)
//	{
//		s = s + i * (i + 1);
//	}
//	printf("%d\n", s);
//}




//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	
//	char A[] = "He_has_钱!";
//	printf("%zd", strlen(A));
//}


//#include<stdio.h>
//int main()
//{
//	char c;
//	while ((c = getchar()) != '?')
//		putchar(--c);
//}



//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	int b = 2;
//	int c = 2;
//	int d = a++ + b++ + c++;
//	printf("%d", d);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char a;
//	char b;
//	scanf("a=%c,b=%c", &a, &b);
//	printf("%c %c", a, b);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char s[12] = { "string" };
//	printf("%zd\n", strlen(s));
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	float f;
//	f = ((3.0, 4.0, 5.0), (2.0, 1.0, 0.0));
//	printf("%f", f);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char a[] = { 0,1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c ", a[i]);
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	float f=0.0;
//	scanf("%5f",&f);        //scanf不支持.格式的写法 可以有长度限制，但没有小数位数限制
//	printf("%5.2f",f);      //printf支持.格式的写法
//	return 0;
//}


////在内存中存储“A”要占用（   2   ）个字节，存储‘A’要占用（   1   ）字节。
//#include<stdio.h>
//int main()
//{
//	char a = 'A';
//	char b[] = "A";       //C语言定义字符串只能用数组
//	printf("%zd %zd", sizeof(a), sizeof(b));
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char a = '\a';
//	char b = '\b';
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}



//符号常量的定义方法: #define 符号常量 常量
//char型常量在内存中存放的是ASCII码
//函数调用strcat(strcpy(str1,str2),str3)的功能是
//将字符串str2复制到字符串str1中后再将字符串str3连接到字符串str1之后
//"*"称为指针运算符，"&"称为地址运算符
//赋值表达式和赋值语句的区别在于有无 ; 号
//用{}把一些语句括起来称为 复合语句 




////编程序按下列公式计算e的值（精度为1e - 6）
////e = 1 + 1 / 1!+ 1 / 2!+ 1 / 3!+ ……1 / n!
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n;
//	float e = 1.0;
//	printf("请输入一个数:");
//	scanf("%d", &n);
//	float t = 1.0;
//	for (i = 1; i <= n; i++)
//	{	
//		t = t * i;
//		e = e + 1/t;
//	}
//	printf("n等于%d时结果是:%.6f", n,e);
//	return 0;
//}
