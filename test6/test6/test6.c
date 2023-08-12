#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;//数组名，首元素地址（2个特殊情况）
//	char* p = arr;  //一次只能改变一个字节
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//野指针
//概念： 野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
//1.指针未初始化
//2.指针越界访问
//3.指针指向的空间释放

//1.指针未初始化
//#include<stdio.h>
//int main()
//{
//	int a; //局部变量不初始化,默认是随机值
//	int* p;//局部的指针变量,就被初始化随机值
//	*p = 20;
//	return 0;
//}


//2.指针越界访问
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//	}
//	return 0;
//}


////3.指针指向的空间释放
//#include<stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;//初始化
//	//int* p = NULL;//初始化
//
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	//
//	pa = NULL;
//	*pa = 0;  //指针为NULL无法再使用
//
//	//指针不为空再去使用它！！！！
//	if (pa != NULL)
//	{
//
//	}
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//	for (i = 0; i < sz/2; i++)    //p从加1到加2注意循环次数防止越界产生野指针
//	{
//		printf("%d ", *p);
//		p+=2;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);   //指针-指针得到的是中间的元素个数
//	printf("%p\n", &arr[9] - &arr[0]);
//	return 0;
//}

//#include<stdio.h>
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen -求字符串长度
//	//递归 - 模拟实现了strlen  1.计数器的方式 2.递归的方式
//	
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//地址 首元素地址(两种特殊情况
//	printf("%p\n", arr+1);
//	//1.&数组名 数组名不是首元素的地址 取出的是整个数组的地址
//	//2.sizeof(arr)  sizeof(数组名)  计算的是整个数组的大小，单位是字节
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p  =====   %p\n", p + i, &arr[i]);
//	}*/
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;  //ppa就是二级指针
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	//int*** pppa = &ppa;
//	return 0;
//}


//指针数组  数组   存放指针的数组
//数组指针  指针
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//整形数组 存放整形
	//字符数组 存放字符
	//指针数组 存放指针
	//int arr[10];
	int* arr[3] = { &a,&b,&c };//指针数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", * (arr[i]));
	}
	return 0;
}