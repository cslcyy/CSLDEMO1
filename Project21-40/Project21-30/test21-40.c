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
//	printf("����Ϊ%d\n", x1);
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
//							printf("˳��Ϊ:a--%c\tb--%c\tc--%c\n", i, j, k);
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
//		printf("�෴˳��������\40:\40");
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
//	printf("������5���ַ�\40:\40");
//	palin(i);
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	long long n;
//	int count = 0;
//	printf("������һ������:\n");
//	scanf("%lld", &n);
//
//	while (n != 0)
//	{
//		n /= 10;
//		++count;
//	}
//	printf("������%dλ��.", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int base, exponent;
//	long long result = 1;
//
//	printf("����:");
//	scanf("%d", &base);
//
//	printf("ָ��:");
//	scanf("%d", &exponent);
//
//	while (exponent != 0)
//	{
//		result *= base;
//		--exponent;
//	}
//	printf("���:%lld", result);
//	return 0;
//}


#include<stdio.h>
//int main()
//{
//	int n, reInt = 0, remainder, orInt;
//	printf("������һ������:");
//	scanf("%d", &n);
//	orInt = n;
//	while (n != 0)
//	{
//		remainder = n % 10;
//		reInt = reInt * 10 + remainder;
//		n /= 10;
//	}
//	if (orInt == reInt)
//		printf("%d�ǻ�����\n", orInt);
//	else
//		printf("%d���ǻ�����\n", orInt);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char i, j;
//	printf("�������һ����ĸ:\n");
//	scanf("%c", &i);
//	getchar();  //scanf("%c,&j");�����⣬�ڶ����Ƕ����һ�����з���������������ַ��������Ҫ��һ��getchar()�Ե����з�
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
//		printf("������ڶ�����ĸ\n");
//		scanf("%c", &j);
//		if (j == 'u') {printf("tuesday\n");break;}
//		if (j == 'h') { printf("thursday\n"); break;}
//	case's':
//		printf("��������һ����ĸ\n");
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
////ɾ���ַ�����ָ����ĸ�ĺ���
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
//	char s[2] = "a";   //Ҫɾ������ĸ
//	char s2[5] = "aca";  //Ŀ���ַ���
//	printf("%s\n", deleteCharacters(s2, s));
//	return 0;
//}

//����a* b = c��a��b��c��������)����ô���ǳ�a��b����c��������
//#include<stdio.h>
//int main()
//{
//	int number, i;
//	printf("����һ������:");
//	scanf("%d", &number);
//	printf("%d��������:", number);
//	for (i = 1; i <=number; ++i)
//	{
//		if (number % i == 0)
//		{
//			printf("%d ", i);  //�ӿո���ʾ���ÿ�
//		}
//	}
//	return 0;
//}


//����������ͼ����
//#include<stdio.h>
//int main()
//{
//	int i, j, rows;
//	printf("����:");
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

//�� 1~100 �������� 10x10 �����ʽ�����
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

//�ж�һ�������Ƿ�Ϊ������
//������prime number���ֳ������������޸���
//һ������1����Ȼ��������1���������⣬���ܱ�������Ȼ������

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
//	return 0;   //����ʵ��������Ϊ(ĩβ���� 1 ��ʾ��������0 ��ʾ��������)
//}


//��ϰ�������á�
//#include<stdio.h>
//void hello_world(void)
//{
//	printf("Hello,world!\n");
//}
//void three_hellos(void)
//{
//	int counter;
//	for (counter = 1; counter <= 3; counter++)
//		hello_world();   //���ô˺���
//}
//int main(void)
//{
//	three_hellos();     //���ô˺���
//	return 0;
//}


//�ַ�����ת���罫�ַ��� "www.runoob.com" ��תΪ "moc.boonur.www"��
//#include<stdio.h>
//void reverse(char*s)
//{
//	//��ȡ�ַ�������
//	int len = 0;
//	char* p = s;
//	while (*p != 0)
//	{
//		len++;
//		p++;
//	}
//	//����
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


//��100֮�ڵ�����
//������prime number���ֳ������������޸���
//һ������1����Ȼ��������1���������⣬���ܱ�������Ȼ��������
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
//				printf("\n");   //�ֳ�������ʾ
//		}
//	}
//	return 0;
//}

//��10������������
//��������ѡ�񷨣����Ӻ�9���ȽϹ����У�ѡ��һ����С�����һ��Ԫ�ؽ���
//�´����ƣ����õڶ���Ԫ�����8�����бȽϣ������н�����
//#include<stdio.h>
//#define N 10
//int main()
//{
//	int i, j, a[N], temp;
//	printf("������10������:\n");
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
//	printf("����Ľ����:\n");
//	for (i = 0; i < N; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//}


//��һ��3 * 3����Խ���Ԫ��֮��
//����˫��forѭ�����������ά���飬�ٽ�a[i][i]�ۼӺ����
//#include<stdio.h>
//#define N 3
//int main()
//{
//	int i, j, a[N][N], sum = 0;
//	printf("���������(3*3):\n");
//	for (i = 0; i < N; i++)
//		for (j = 0; j < N; j++)
//			scanf("%d", &a[i][j]);
//	for (i = 0; i < N; i++)
//		sum += a[i][i];
//	printf("�Խ���֮��Ϊ:%d\n", sum);
//	return 0;
//}


//��һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ�������������
//�����жϴ����Ƿ�������һ����, Ȼ���ٿ��ǲ����м���������������Ԫ��֮�����, ���κ���һ��λ��
//#include<stdio.h>
//int main()
//{
//	int a[11] = { 1,4,6,9,13,16,19,28,40,100 };
//	int temp1, temp2, number, end, i, j;
//	printf("ԭʼ������:\n");
//	for (i = 0;i < 10; i++)
//		printf("%4d", a[i]);
//	printf("\n����һ���µ�����:");
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


//��һ�������������
//�õ�һ�������һ������
//#include<stdio.h>
//#define N 10
//int main()
//{
//	int a[N] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i, t;
//	printf("ԭ������:\n");
//	for (i = 0; i < N; i++)
//		printf("%d", a[i]);
//	for (i = 0; i < N / 2; i++)
//	{
//		t = a[i];
//		a[i] = a[N - 1 - i];
//		a[N - 1 - i] = t;
//	}
//	printf("\n����������:\n");
//	for (i = 0; i < N; i++)
//		printf("%d", a[i]);
//	printf("\n");
//	return 0;
//}