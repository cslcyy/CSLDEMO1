#define _CRT_SECURE_NO_WARNINGS

////809 * ? ? = 800 * ? ? +9 * ? ? 
////���� ? ? �������λ��, 
////809 * ? ? Ϊ��λ����
////8 * ? ? �Ľ��Ϊ��λ����
////9 * ? ? �Ľ��Ϊ3λ����
////�� ? ? �������λ������809 * ? ? ��Ľ����
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


////�˽���ת��Ϊʮ����
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n = 0, i = 0;
//	char s[20];
//	printf("������һ��8������:\n");
//	gets(s);
//	while (s[i] != '\0')
//	{
//		n = n * 8 + s[i] - '0';
//		i++;
//	}
//	printf("�ղ������8������ת��Ϊʮ������Ϊ\n%d\n", n);
//	return 0;
//}


////��0��7������ɵ���������
//#include<stdio.h>
//int main(int agrc, char* agrv[])
//{
//	long sum = 4, s = 4;   //sum�ĳ�ʼֵΪ4��ʾ��ֻ��һλ������ɵ���������Ϊ4��
//	int j;
//	for (j = 2; j <= 8; j++)
//	{
//		printf("%dλ��Ϊ�����ĸ���%d\n", j - 1, s);
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
//	printf("%dλ��Ϊ�����ĸ���%ld\n", j - 1, s);
//	printf("�������ܸ���Ϊ:%ld\n", sum);
//	system("pause");
//	return 0;
//}


////һ��ż�����ܱ�ʾΪ��������֮�͡�
//#include<stdio.h>
//#include<stdlib.h>
//int Isprimer(unsigned int n);
//int main()
//{
//	unsigned int n, i;
//	do
//	{
//		printf("������һ��ż��:\n");
//		scanf("%d", &n);
//	} while (n % 2 != 0);
//	for (i = 1; i < n; i++)
//	{
//		if (Isprimer(i) && Isprimer(n - i))
//			break;
//	}
//	printf("ż��%d���Էֽ��%d��%d����Ԫ�صĺ�\n", n, i, n - i);
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

////�ж�һ�������ܱ�����9����
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int p, i;
//	long int sum = 9;
//	printf("������һ������:\n");
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
//	printf("����%d������%d��9��ɵ���%ld\n", p, i, sum);
//	return 0;
//}

////�����ַ������ӳ���
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//char* strconnect(char* str1, char* str2);
//int main()
//{
//	char str1[20], str2[20];
//	char* str;
//	puts("�����������ַ���,�ûس��ֿ�:");
//	scanf("%s%s", str1, str2);
//	str = strconnect(str1, str2);
//	puts("���Ӻ���ַ���Ϊ:");
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


////�ش������ṹ��������ݣ�
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


////��ȡ7������1��50��������ֵ��ÿ��ȡһ��ֵ�������ӡ����ֵ������ ����
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n, i, j;
//	i = 0;
//	printf("����������:\n");
//	i--;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &n);
//		if (n > 50)
//		{
//			printf("����������:\n");
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



////ĳ����˾���ù��õ绰�������ݣ���������λ���������ڴ��ݹ������Ǽ��ܵ�
////���ܹ������£� 
////ÿλ���ֶ�����5, Ȼ���ú�,����10���������������
////�ٽ���һλ�͵���λ�������ڶ�λ�͵���λ������
//#include<stdio.h>
//int main()
//{
//	int a, i, aa[4], t;
//	printf("��������λ����:");
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
//	printf("���ܺ������:");
//	for (i = 3; i >= 0; i--)
//		printf("%d", aa[i]);
//	printf("\n");
//	return 0;
//}

////ר����һ�⣬�����
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