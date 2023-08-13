#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;   //内存中 44 33 22 11
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}


//#include<stdio.h>
//int i;  //全局变量不初始化默认是0
//int main()
//{
//	i--;
//	//-1
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//-1补码第一位1和sizeof比较大小时不再是符号位
//	if (i > sizeof(i))  //sizeof()-计算变量/类型所占内存的大小 >=0 无符号数 
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;    //赋值操作符=优先级大于,
//	b += a++ + c;
//	printf("a=%d b=%d c=%d\n", a, b, c);
//	return 0;
//}



////使用指针打印数组元素
//#include<stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


//#include<stdio.h>
//int Fun(int n)
//{
//	if (n == 5)
//	{
//		return 2;
//	}
//	else
//	{
//		return 2 * Fun(n + 1);
//	}
//}
//int main()
//{
//	int i = 2;
//	int ret = Fun(i);
//	printf("%d\n", ret);
//	return 0;
//}


////字符串逆序(递归实现)
//// 编写一个函数reverse_string(char*string)(递归实现)
//// 将参数字符串中的字符串反向排列
//// 要求:不能使用C函数库中的字符串操作函数
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
//void reverse_string(char arr[])  //(非递归方法)
//{
//	int left = 0;
//	//int right = strlen(arr) - 1;
//	int right = my_strlen(arr) - 1;
//	while(left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";  //fedcba
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}



//////字符串逆序(递归实现)
////// 编写一个函数reverse_string(char*string)(递归实现)
////// 将参数字符串中的字符串反向排列
////// 要求:不能使用C函数库中的字符串操作函数
//#include<stdio.h>
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
//void reverse_string(char arr[])  //递归实现
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if(my_strlen(arr+1)>=2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";  //fedcba
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


////写一个递归函数DigitSum(n),输入一个非负整数,返回组成它的数字之和
////例如:调用DigitSum(1729) 返回 1+7+2+9=19
//#include<stdio.h>
//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret=%d\n", ret);
//	return 0;
//}



//递归实现n的k次方
#include<stdio.h>
double Pow(int n, int k)
{
	//n^k=n*n^(k-1)
	if (k < 0)
	{
		return(1.0 / (Pow(n, -k)));
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return n * Pow(n, k - 1);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("ret=%lf\n", ret);
	return 0;
}