#define _CRT_SECURE_NO_WARNINGS

////809 * ? ? = 800 * ? ? +9 * ? ? 
////其中 ? ? 代表的两位数, 
////809 * ? ? 为四位数，
////8 * ? ? 的结果为两位数，
////9 * ? ? 的结果为3位数。
////求 ? ? 代表的两位数，及809 * ? ? 后的结果。
//
//#include<stdio.h>
//void output(long int b, long int i)
//{
//	printf("\n%ld=800*%ld+9*%ld\n", b, i, i);
//}
//int main()
//{
//	void output(long int b, long int i);
//	long int a, b, i;
//	a = 809;
//	for (i = 10; i < 100; i++)
//	{
//		b = i * a;
//		if (b >= 1000 && b <= 10000 && 8 * 1 < 100 && 9 * i >= 100)
//		{
//			output(b, i);
//		}
//	}
//	return 0;
//}


////八进制转换为十进制
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n = 0, i = 0;
//	char s[20];
//	printf("请输入一个8进制数:\n");
//	gets(s);
//	while (s[i] != '\0')
//	{
//		n = n * 8 + s[i] - '0';
//		i++;
//	}
//	printf("刚才输入的8进制数转化为十进制数为\n%d\n", n);
//	return 0;
//}


////求0—7所能组成的奇数个数
//#include<stdio.h>
//int main(int agrc, char* agrv[])
//{
//	long sum = 4, s = 4;   //sum的初始值为4表示，只有一位数字组成的奇数个数为4个
//	int j;
//	for (j = 2; j <= 8; j++)
//	{
//		printf("%d位数为奇数的个数%d\n", j - 1, s);
//		if (j <= 2)
//		{
//			s *= 7;
//		}
//		else
//		{
//			s *= 8;
//		}
//		sum += s;
//	}
//	printf("%d位数为奇数的个数%ld\n", j - 1, s);
//	printf("奇数的总个数为:%ld\n", sum);
//	system("pause");
//	return 0;
//}


////一个偶数总能表示为两个素数之和。
//#include<stdio.h>
//#include<stdlib.h>
//int Isprimer(unsigned int n);
//int main()
//{
//	unsigned int n, i;
//	do
//	{
//		printf("请输入一个偶数:\n");
//		scanf("%d", &n);
//	} while (n % 2 != 0);
//	for (i = 1; i < n; i++)
//	{
//		if (Isprimer(i) && Isprimer(n - i))
//			break;
//	}
//	printf("偶数%d可以分解成%d和%d两个元素的和\n", n, i, n - i);
//	return 0;
//}
//int Isprimer(unsigned int n)
//{
//	int i;
//	if (n < 4)return 1;
//	else if (n % 2 == 0)return 0;
//	else
//		for (i = 3; i < sqrt(n) + 1; i++)
//			if (n % i == 0)
//				return 0;
//			return 1;
//}

////判断一个素数能被几个9整除
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int p, i;
//	long int sum = 9;
//	printf("请输入一个素数:\n");
//	scanf("%d", &p);
//	for (i = 1;; i++)
//	{
//		if (sum % p == 0)
//		{
//			break;
//		}
//		else
//		{
//			sum = sum * 10 + 9;
//		}
//	}
//	printf("素数%d能整除%d个9组成的数%ld\n", p, i, sum);
//	return 0;
//}

////两个字符串连接程序
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//char* strconnect(char* str1, char* str2);
//int main()
//{
//	char str1[20], str2[20];
//	char* str;
//	puts("请输入两个字符串,用回车分开:");
//	scanf("%s%s", str1, str2);
//	str = strconnect(str1, str2);
//	puts("连接后的字符串为:");
//	puts(str);
//	return 0;
//}
//char* strconnect(char* str1, char* str2)
//{
//	char* str;
//	str = (char*)malloc(strlen(str1) + strlen(str2) + 1);
//	str[0] = '\0';
//	strcat(str, str1);
//	strcat(str, str2);
//	return str;
//}


////回答结果（结构体变量传递）
//#include<stdio.h>
//struct student
//{
//	int x;
//	char c;
//}a;
//f(struct student b)
//{
//	b.x = 20;
//	b.c = 'y';
//}
//int main()
//{
//	a.x = 3;
//	a.c = 'a';
//	f(a);
//	printf("%d,%c", a.x, a. c);
//}


////读取7个数（1—50）的整数值，每读取一个值，程序打印出该值个数的 ＊。
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n, i, j;
//	i = 0;
//	printf("请输入数字:\n");
//	i--;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &n);
//		if (n > 50)
//		{
//			printf("请重新输入:\n");
//			i--;
//		}
//		else
//		{
//			for (j = 0; j < n; j++)
//			{
//				printf("*");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}



////某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的
////加密规则如下： 
////每位数字都加上5, 然后用和,除以10的余数代替该数字
////再将第一位和第四位交换，第二位和第三位交换。
//#include<stdio.h>
//int main()
//{
//	int a, i, aa[4], t;
//	printf("请输入四位数字:");
//	scanf("%d", &a);
//	aa[0] = a % 10;
//	aa[1] = a % 100 / 10;
//	aa[2] = a % 1000 / 100;
//	aa[3] = a / 1000;
//	for (i = 0; i <= 3; i++)
//	{
//		aa[i] += 5;
//		aa[i] %= 10;
//	}
//	for (i = 0; i <= 3 / 2; i++)
//	{
//		t = aa[i];
//		aa[i] = aa[3 - i];
//		aa[3 - i] = t;
//	}
//	printf("加密后的数字:");
//	for (i = 3; i >= 0; i--)
//		printf("%d", aa[i]);
//	printf("\n");
//	return 0;
//}

////专升本一题，读结果
//#include<stdio.h>
//#include<stdlib.h>
//#define M 5
//int main()
//{
//	int a[M] = { 1,2,3,4,5 };
//	int i, j, t;
//	i = 0; j = M - 1;
//	while (i < j)
//	{
//		t = *(a + i);
//		*(a + i) = *(a + j);
//		*(a + j) = t;
//		i++; j--;
//	}
//	for (i = 0; i < M; i++)
//	{
//		printf("%d\n", *(a + i));
//	}
//	return 0;
//}