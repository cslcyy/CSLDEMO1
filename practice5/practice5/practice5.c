#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//int main()
//{
//	int i=0L;
//	int j = 4962710;
//	printf("%d\n%d\n", i, j);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	short k = 32767;
//	//int k = 32767;
//	short i = k + 1;
//	short j = k + 3;
//	printf("%d\n%d\n", i,j);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = -3;
//	a=(a > 0) ? a : -a;
//	printf("%d", a);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	int b = 5;
//	int c=(a = 2, b = 5, b++, a + b);
//	printf("%d", c);
//	return 0;
//}


//��C�����У���ά����Ԫ�����ڴ��еĴ��˳���� ����
//���Զ��庯��Ҫ�󷵻�һ��ֵ����Ӧ�ڸú���������һ��(return)���,���Զ��庯��Ҫ�󲻷���һ��ֵ����Ӧ�ڸú���˵��ʱ��һ������˵������(void)
//�����е��βκ͵���ʱ��ʵ�ζ���������ʱ,���ݷ�ʽΪ�� ��ַ���� ��,���Ǳ���ʱ,���ݷ�ʽΪ( ֵ���� )
//C����������ֵ����ȱʡ���壬��ʱ�ú���ֵ������������(int)
//���Ǻ�����δָ���洢���ľֲ�����,�������Ĵ洢�����(auto)



////�Ӽ��������10�������У��ҳ���һ���ܱ�7�������������ҵ�����ӡ�������˳�ѭ������δ�ҵ�����ӡ��not exist��
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int j = 0;
//	for (j = 0; j < 10; j++)
//	{
//		if (arr[j] % 7 == 0)
//		{
//			printf("%d", arr[j]);
//			break;
//		}
//		else if (j==9)
//		{
//			printf("not exist");
//		}	
//	}
//	return 0;
//}



////���б�������ͺ���������䣺int x = 57; isprime(x); 
////����isprime()�����ж�һ������a�Ƿ���������������������������1�����򷵻�0�����дisprime������
//#include<stdio.h>
//#include<math.h>
//int isprime(int x)
//{
//	int a = 0;
//	for (a = 2; a<=sqrt(x); a++)
//	{
//		if (x % a == 0)
//		{
//			return 0;
//			break;
//		}
//	}
//	if (a > sqrt(x))
//		return 1;
//}
//int main()
//{
//	int x = 57;
//	int ret = isprime(x);
//	if (ret == 1)
//	{
//		printf("%d������", x);
//	}
//	else if(ret == 0)
//	{
//		printf("%d��������", x);
//	}
//	return 0;
//}



//C���Դ�Դ�������д���ϻ�����������Ҫ����(�༭�����롢���ӡ�ִ��)�ĸ�����
//C���( û�� )���롢������
//�߼������"&&��||��!"�е����ȼ��� ! && ||




////����һ�����������ж����Ƿ���ͬʱ��3��5��7������
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	printf("������һ������:");
//	scanf("%d", &i);
//	if (i % 3 == 0 && i % 5 == 0 && i % 7 == 0)
//	{
//		printf("%d�ܱ�3��5��7ͬʱ����\n", i);
//	}
//	else
//	{
//		printf("%d���ܱ�3��5��7ͬʱ����\n", i);
//	}
//	return 0;
//}



////�Ӽ���¼��10����������A���뽫���ǽ�����С���������(��������)
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < 9; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10 - 1 - i; j++)
//		{
//			int temp = 0;
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//	printf("����֮�������Ϊ:");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	double f;
//	double g;
//	double h;
//	f = 1;
//	g = f + 5 / 4;
//	h = f + 5 / 4.0;
//	printf("%lf\n%lf\n", g,h);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 6;
//	b *= a + 1;
//	printf("%d", b);
//}


//#include<stdio.h>
//int main()
//{
//	int s = 2;
//	int t = 2;
//	int c1 = 2;
//	int c2 = 2;
//	int c3 = 2;
//	int c4 = 2;
//	(s = c1 == c2) || (t = c3 > c4);    //     ���� || �����ǣ����һ || ������������һ���������������һΪ�棬��ô��ִ������
//	printf("%d\n%d\n", s, t);
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	char h = 'a';
//	char g = 'f';
//	int a[6] = { 1,2,3,4,5,6 };
//	int A = a[g - h];
//	//int C = a['d' - 'h'];
//	int C = a['d' - h];
//	int D = a['h' - 'c'];
//	printf("%d\n%d\n%d\n", A, C, D);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a[7] = { 1,2,3,4,5,6,7 };
//	int* p = a;
//	int b = *p;
//	int c = *a;
//	int d = a[7];
//	int e = a[p - a];
//	printf("%p\n%d\n%d\n%d\n%d\n", a, b, c, d, e);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 6;
//	int y = 6;
//	b -= a;
//	y = a++;
//	printf("%d\n%d\n", b, y);
//	return 0;
//}



//��C������,�ַ�����������(˫����)һ���ַ�
//�����Ǳ�ʾ������ͬ�����ݣ����ṹ����������(�������Ͳ�ͬ)���������
//C�������ļ���ָ(�洢���ⲿ�����ϵ�������ݼ���)


////1.��Ԫ�ظ���Ϊ10��һά����Ԫ���е����ֵ����Сֵ��
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int MAX = arr[0];
//	int MIN = arr[0];
//	int j = 0;
//	for (j =0; j < 10; j++)
//	{
//		if (arr[j] > MAX)
//		{
//			MAX = arr[j];
//		}
//	}	
//	for (j = 0; j < 10; j++)
//	{
//		if (arr[j] < MIN)
//		{
//			MIN = arr[j];
//		}
//	}
//	printf("�����е����ֵ��%d\n�����е���Сֵ��%d\n",MAX,MIN);
//	return 0;
//}



////������ 9   7   5      ����Ϊ 9   3   4
////
////      3   1   2             7   1   6
////
////      4   6   8             5   2   8
//
//#include<stdio.h>
//int main()
//{
//	int arr[3][3] = { {9,7,5},{3,1,2},{4,6,8} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = i+1; j < 3; j++)
//		{
//			int temp = 0;
//			temp = arr[i][j];
//			arr[i][j] = arr[j][i];
//			arr[j][i] = temp;
//		}
//	}
//	for(i=0;i<3;i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (i == 1 && j == 0)
//			{
//				printf("\n");
//			}
//			else if (i == 2 && j == 0)
//			{
//				printf("\n");
//			}
//			printf("%d ", arr[i][j]);		
//		/*	if (j == 2)
//			{
//				printf("\n");
//			}*/
//		}
//	}
//	return 0;
//}


////��д����:��������������m, n, �����ǵ����Լ������С��������
//#include<stdio.h>
//int gcd(int m, int n)
//{
//	if (n == 0)
//	{
//		return m;
//	}
//	else
//	{
//		return(gcd(n, m % n));
//	}
//}
//int tim(int m, int n)
//{
//	return m * n / gcd(m, n);
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("��������������:");
//	scanf("%d%d", &m, &n);
//	int ret1 = gcd(m, n);
//	int ret2 = tim(m, n);
//	printf("���Լ����%d\n", ret1);
//	printf("��С��������%d\n", ret2);
//	return 0;
//}



