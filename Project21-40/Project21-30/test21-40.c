#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int day, x1 = 0, x2;
//	day = 9;
//	x2 = 1;
//	while (day > 0)
//	{
//		x1 = (x2 + 1) * 2;
//		x2 = x1;
//		day--;
//	}
//	printf("总数为%d\n", x1);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char i, j, k;
//	for (i = 'x'; i = 'z'; i++)
//	{
//		for (j = 'x'; j <= 'z'; j++)
//		{
//			if (i != j) 
//			{
//				for (k = 'x'; k <= 'z'; k++)
//				{
//					if (i != k && j != k) 
//					{
//						if (i != 'x' && k != 'x' && k != 'z')
//						{
//							printf("顺序为:a--%c\tb--%c\tc--%c\n", i, j, k);
//							
//							return 0;
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//	for (i = 0; i <= 3; i++)
//	{
//		for (j = 0; j <= 2 - i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k <= 2 * i; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i <= 2; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k <= 4 - 2 * i; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	float i, t;
//	float sum = 0;
//	float a = 2, b = 1;
//	for (i = 1; i <= 20; i++)
//	{
//		sum = sum + a / b;
//		t = a;
//		a = a + b;
//		b = t;
//	}
//	printf("%f\n", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i;
//	long double sum, mix;
//	sum = 0, mix = 1;
//	for (i = 1; i <= 20; i++)
//	{
//		mix = mix * i;
//		sum = sum + mix;
//	}
//	printf("%Lf\n", sum);
//	return 0;
//}


//#include<stdio.h>
//int fact(int j)
//{
//	int sum;
//	if (j == 0) {
//		sum = 1;
//	}
//	else
//	{
//		sum = j * fact(j - 1);
//	}
//	return sum;
//}
//int main()
//{
//	int i;
//	int fact(int);
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d!=%d\n", i, fact(i));
//	}
//	return 0;
//}

//#include<stdio.h>
//void palin(n)
//int n;
//{
//	char next;
//	if (n <= 1) {
//		next = getchar();
//		printf("相反顺序输出结果\40:\40");
//		putchar(next);
//	}
//	else { 
//		next = getchar(); 
//		palin(n - 1);
//		putchar(next);
//	}
//}
//int main()
//{
//	int i = 5;
//	void palin(int n);
//	printf("请输入5个字符\40:\40");
//	palin(i);
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	long long n;
//	int count = 0;
//	printf("请输入一个整数:\n");
//	scanf("%lld", &n);
//
//	while (n != 0)
//	{
//		n /= 10;
//		++count;
//	}
//	printf("数字是%d位数.", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int base, exponent;
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


#include<stdio.h>
//int main()
//{
//	int n, reInt = 0, remainder, orInt;
//	printf("请输入一个整数:");
//	scanf("%d", &n);
//	orInt = n;
//	while (n != 0)
//	{
//		remainder = n % 10;
//		reInt = reInt * 10 + remainder;
//		n /= 10;
//	}
//	if (orInt == reInt)
//		printf("%d是回文数\n", orInt);
//	else
//		printf("%d不是回文数\n", orInt);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char i, j;
//	printf("请输入第一个字母:\n");
//	scanf("%c", &i);
//	getchar();  //scanf("%c,&j");的问题，第二次是读入的一个换行符，而不是输入的字符，因此需要加一个getchar()吃掉换行符
//	switch (i) 
//	{
//	case'm':
//		printf("manday\n");
//		break;
//	case'w':
//		printf("wednesday\n");
//		break;
//	case'f':
//		printf("friday\n");
//		break;
//	case't':
//		printf("请输入第二个字母\n");
//		scanf("%c", &j);
//		if (j == 'u') {printf("tuesday\n");break;}
//		if (j == 'h') { printf("thursday\n"); break;}
//	case's':
//		printf("请输入下一个字母\n");
//		scanf("%c", &j);
//		if (j == 'a') { printf("saturday\n"); break; }
//		if (j == 'u') { printf("sunday\n"); break; }
//	default:
//		printf("error\n"); break;
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
////删除字符串中指定字母的函数
//char* deleteCharacters(char* str, char* charSet)
//{
//	int hash[256];
//	if (NULL == charSet)
//		return str;
//	for (int i = 0; i < 256; i++)
//		hash[i] = 0;
//	for (int i = 0; i < strlen(charSet); i++)
//		hash[charSet[i]] = 1;
//	int currentIndex = 0;
//	for (int i = 0; i < strlen(str); i++)
//	{
//		if (!hash[str[i]])
//			str[currentIndex++] = str[i];
//	}
//	str[currentIndex] = '\0';
//	return str;
//}
//int main()
//{
//	char s[2] = "a";   //要删除的字母
//	char s2[5] = "aca";  //目标字符串
//	printf("%s\n", deleteCharacters(s2, s));
//	return 0;
//}

//假如a* b = c（a、b、c都是整数)，那么我们称a和b就是c的因数。
//#include<stdio.h>
//int main()
//{
//	int number, i;
//	printf("输入一个整数:");
//	scanf("%d", &number);
//	printf("%d的因数有:", number);
//	for (i = 1; i <=number; ++i)
//	{
//		if (number % i == 0)
//		{
//			printf("%d ", i);  //加空格显示更好看
//		}
//	}
//	return 0;
//}


//创建三角形图案。
//#include<stdio.h>
//int main()
//{
//	int i, j, rows;
//	printf("行数:");
//	scanf("%d", &rows);
//	for (i = 1; i <= rows; ++i)
//	{
//		for (j = 1; j <= i; ++j)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//将 1~100 的数据以 10x10 矩阵格式输出。
//#include<stdio.h>
//int main()
//{
//	int i, j, count=0;
//	for (i = 1; i <= 10; i++)
//	{
//		for (j = 1; j <= 100; j += 10)
//		{
//			count++;
//			printf("%4d", count);
//		}
//			
//		printf("\n");
//	}
//	return 0;
//}

//判断一个数字是否为质数。
//质数（prime number）又称素数，有无限个。
//一个大于1的自然数，除了1和它本身外，不能被其他自然数整除

//#include<stdio.h>
//#include<math.h>
//#define MAX 1000
//int prime[MAX];
//int isPrimeNaive(int n)
//{
//	if (n <= 1)
//		return 0;
//	for (int i = 2; i < n; i++)
//		if (n % i == 0)
//			return 0;
//	return 1;
//}
//int isPrime(int n)
//{
//	if (n <= 1)
//		return 0;
//	if (n == 2)
//		return 1;
//	if (n % 2 == 0)
//		return 0;
//	int limit = (int)sqrt((double)n);
//	for (int i = 3; i <= limit; i += 2)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//void sieve()
//{
//	prime[0] = 0;
//	prime[1] = 0;
//	for (int i = 2; i < MAX; i++)
//		prime[i] = 1;
//	int limit = (int)sqrt((double)MAX);
//	for (int i = 2; i <= limit; i++)
//	{
//		if (prime[i])
//			for (int j = i * i; j <= MAX; j += i)
//				prime[j] = 0;
//	}
//}
//int isPrimeSieve(int n)
//{
//	if (prime[n])
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	sieve();
//	printf("N=%d %d\n", 1, isPrime(1));
//	printf("N=%d %d\n", 2, isPrime(2));
//	printf("N=%d %d\n", 3, isPrime(3));
//	printf("N=%d %d\n", 4, isPrime(4));
//	printf("N=%d %d\n", 7, isPrime(7));
//	printf("N=%d %d\n", 9, isPrime(9));
//	printf("N=%d %d\n", 13, isPrime(13));
//	printf("N=%d %d\n", 17, isPrime(17));
//	printf("N=%d %d\n", 100, isPrime(100));
//	printf("N=%d %d\n", 23, isPrime(23));
//	printf("N=%d %d\n", 1, isPrime(1));
//	return 0;   //以上实例输出结果为(末尾数字 1 表示是质数，0 表示不是质数)
//}


//练习函数调用。
//#include<stdio.h>
//void hello_world(void)
//{
//	printf("Hello,world!\n");
//}
//void three_hellos(void)
//{
//	int counter;
//	for (counter = 1; counter <= 3; counter++)
//		hello_world();   //调用此函数
//}
//int main(void)
//{
//	three_hellos();     //调用此函数
//	return 0;
//}


//字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
//#include<stdio.h>
//void reverse(char*s)
//{
//	//获取字符串长度
//	int len = 0;
//	char* p = s;
//	while (*p != 0)
//	{
//		len++;
//		p++;
//	}
//	//交换
//	int i = 0;
//	char c;
//	while (i <= len / 2 - 1)
//	{
//		c = *(s + i);
//		*(s + i) = *(s + len - 1 - i);
//		*(s + len - 1 - i) = c;
//		i++;
//	}
//}
//int main()
//{
//	char s[] = "www.runoob.com";
//	printf("'%s'=>\n", s);
//	reverse(s);
//	printf("'%s'\n", s);
//	return 0;
//}


//求100之内的素数
//质数（prime number）又称素数，有无限个。
//一个大于1的自然数，除了1和它本身外，不能被其他自然数整除。
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i, j, k, n = 0;
//	for (i = 2; i <= 100; i++)
//	{
//		k = (int)sqrt(i);
//		for (j = 2; j <= k; j++)
//			if (i % j == 0) break;
//		if (j > k)
//		{
//			printf("%d ", i);
//			n++;
//			if (n % 5 == 0)
//				printf("\n");   //分成五行显示
//		}
//	}
//	return 0;
//}

//对10个数进行排序
//可以利用选择法，即从后9个比较过程中，选择一个最小的与第一个元素交换
//下次类推，即用第二个元素与后8个进行比较，并进行交换。
//#include<stdio.h>
//#define N 10
//int main()
//{
//	int i, j, a[N], temp;
//	printf("请输入10个数字:\n");
//	for (i = 0; i < N; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < N - 1; i++)
//	{
//		int min = i;
//		for (j = i + 1; j < N; j++)
//			if (a[min] > a[j]) min = j;
//		if (min != i)
//		{
//			temp = a[min];
//			a[min] = a[i];
//			a[i] = temp;
//		}
//	}
//	printf("排序的结果是:\n");
//	for (i = 0; i < N; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//}


//求一个3 * 3矩阵对角线元素之和
//利用双重for循环控制输入二维数组，再将a[i][i]累加后输出
//#include<stdio.h>
//#define N 3
//int main()
//{
//	int i, j, a[N][N], sum = 0;
//	printf("请输入矩阵(3*3):\n");
//	for (i = 0; i < N; i++)
//		for (j = 0; j < N; j++)
//			scanf("%d", &a[i][j]);
//	for (i = 0; i < N; i++)
//		sum += a[i][i];
//	printf("对角线之和为:%d\n", sum);
//	return 0;
//}


//有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中
//首先判断此数是否大于最后一个数, 然后再考虑插入中间的数的情况插入后此元素之后的数, 依次后移一个位置
//#include<stdio.h>
//int main()
//{
//	int a[11] = { 1,4,6,9,13,16,19,28,40,100 };
//	int temp1, temp2, number, end, i, j;
//	printf("原始数组是:\n");
//	for (i = 0;i < 10; i++)
//		printf("%4d", a[i]);
//	printf("\n插入一个新的数字:");
//	scanf("%d", &number);
//	end = a[9];
//	if (number > end)
//		a[10] = number;
//	else
//	{
//		for (i = 0; i < 10; i++)
//		{
//			if (a[i] > number)
//			{
//				temp1 = a[i];
//				a[i] = number;
//				for (j = i + 1; j < 11; j++)
//				{
//					temp2 = a[j];
//					a[j] = temp1;
//					temp1 = temp2;
//				}
//				break;
//			}
//		}
//	}
//	for (i = 0; i < 11; i++)
//		printf("%4d", a[i]);
//	printf("\n");
//	return 0;
//}


//将一个数组逆序输出
//用第一个与最后一个交换
//#include<stdio.h>
//#define N 10
//int main()
//{
//	int a[N] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i, t;
//	printf("原数组是:\n");
//	for (i = 0; i < N; i++)
//		printf("%d", a[i]);
//	for (i = 0; i < N / 2; i++)
//	{
//		t = a[i];
//		a[i] = a[N - 1 - i];
//		a[N - 1 - i] = t;
//	}
//	printf("\n排序后的数组:\n");
//	for (i = 0; i < N; i++)
//		printf("%d", a[i]);
//	printf("\n");
//	return 0;
//}