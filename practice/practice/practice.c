#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i<=9;i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-2d ", i, j, i * j);
//		printf("\n");
//	}
//	return 0;
//}



////计算一个数的 n 次方(3种方法）
////使用while
//#include<stdio.h>
//int main()
//{
//	int base, exponent;
//
//	long long result = 1;
//
//	printf("基数:");
//	scanf("%d", &base);
//
//	printf("指数:");
//	scanf("%d", &exponent);
//	
//	while (exponent != 0)
//	{
//		result *= base;
//		--exponent;
//	}
//	printf("结果:%lld", result);
//	return 0;
//}



////使用pow()函数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double base, exponent, result;
//
//	printf("基数: ");
//	scanf("%lf", &base);
//
//	printf("指数: ");
//	scanf("%lf", &exponent);
//
//	//计算结果
//	result = pow(base, exponent);
//	printf("%.1lf^%.1lf=%.2lf", base, exponent, result);
//	return 0;
//}


////使用递归
//#include<stdio.h>
//
//int power(int n1, int n2);
//
//int main()
//{
//	int base, powerRaised, result;
//
//	printf("基数: ");
//	scanf("%d", &base);
//
//	printf("指数（正整数）: ");
//	scanf("%d", &powerRaised);
//	
//	result = power(base, powerRaised);
//
//	printf("%d^%d=%d", base, powerRaised, result);
//	return 0;
//}
//int power(int base, int powerRaised)
//{
//	if (powerRaised != 0)
//		return(base * power(base, powerRaised - 1));
//	else
//		return 1;
//}



//#include<stdio.h>
//int main()
//{
//	int arr[] = { 52,12,50,13,19,83,8,2 };
//	int k;
//	int total = 0;
//	for (k = 0; k < 8; k++)
//	{
//		if (arr[k] % 4)
//			break;
//		total += arr[k];
//	}
//	printf("%d", total);
//	return 0;
//}



//#include<stdio.h>
//int av(int x, int y, int z)
//{
//	return((x + y + z) / 3);
//}
//
//int main()
//{
//	int a = 30;
//	int b = 66;
//	int c = 51;
//	int j = 0;
//	j=av(a, b, c);
//	printf("%d", j);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int SC(int x, int y)
//{
//	return((int)sqrt(x * x + y * y));
//}
//int main()
//{
//	int a = 3;
//	int b = 4;
//	int c = 0;
//	c = SC(a, b);
//	printf("%d", c);
//}



//#include<stdio.h>
//float SS(float x)
//{
//	return(3.14*x * x);
//}
//int main()
//{
//	float a = 5.0;
//	float s = 0.0;
//	s = SS(a);
//	printf("%f\n", s);
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//    int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 5;i++)
//	{		
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d %d\n", ret,sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-2d ", i, j, i * j);
//			printf("\n");
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	//printf("%d", printf("%d", printf("%d", -21)));
//	//printf("%d", printf("%d", printf("%d", 21.00)));
//	//printf("%d\n", printf("%d\n", printf("%d\n", "无语")));
//	//printf("%d\n", printf("%d\n", printf("%d\n", "app")));
//	printf("%d\n", printf("%d\n", printf("%d\n", "看看是啥")));
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}



////binary_search
//#include<stdio.h>
//int binary_search(int arr[], int a, int b)
//{
//	int left = 0;
//	int right = b - 1;
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
//	return -58;
//}
//int main()
//{
//	int arr[] = { 1,2,5,8,9,11,16,19,23,28,35 };
//	int k = 19;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -58)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了,下标是%d\n", ret);
//	}
//	return 0;
//}



////给定一个非负整数 num，反复将各个位上的数字相加，直到结果为一位数。
////返回这个结果
//#include<stdio.h>
////方法一函数
//int addDigits(int num)
//{
//	while (num >= 10)
//	{
//		int sum = 0;
//
//		while (num > 0)
//		{
//			sum += num % 10;  //sum=sum+num%10
//			num /= 10;        //num=num/10
//		}
//		num = sum;
//	}
//	return num;
//}
////方法二函数
////int addDigits(int num)
////{
////	return (num - 1) % 9 + 1;
////}
//
//int main()
//{
//	int num = 5858;
//	int ret = addDigits(num);
//	printf("%d", ret);
//	return 0;
//}



//#include<stdio.h>
//int addDigits(num)
//{
//	while (num>=10)
//	{
//		int sum = 0;
//		while (num > 0)
//		{
//			sum = sum + num % 10;
//			num = num / 10;
//		}
//		num = sum;
//	}
//	return num;
//}
//int main()
//{
//	int num = 3358;
//	int ret = addDigits(num);
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = { 6,9,23,44,58,67,98,14,22,67 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2==0)
//		{
//			//printf("%d", arr[i]);
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}



////给你一个整数数组 nums，请你返回其中位数为 偶数 的数字的个数。
//#include<stdio.h>
//int findNumbers(int* nums, int numSize)
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < numSize; i++)
//	{
//		int count = 0;
//		while (nums[i] != 0)
//		{
//			nums[i] = nums[i] / 10;
//			count++;
//		}
//		if (count % 2 == 0)
//		{
//			sum++;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	int nums[] = { 1,34,56,58,13,45,666,8888,6666,1234,567,5468 };
//	int numSize = sizeof(nums) / sizeof(nums[0]);
//	int ret = findNumbers(nums, numSize);
//	printf("%d\n", ret);
//	return 0;
//}



////给你一个正整数 n ，返回 2 和 n 的最小公倍数（正整数）。
//#include<stdio.h>
//int Least_common(int x)
//{
//	return x % 2 == 0 ? x : x * 2;
//}
//int main()
//{
//	int i = 0;
//	printf("请输入一个数字:\n");
//	scanf("%d", &i);
//	int ret = Least_common(i);
//	printf("%d\n", ret);
//	return 0;
//}
