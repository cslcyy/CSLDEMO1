#define _CRT_SECURE_NO_WARNINGS


//ѧϰ static ���徲̬�������÷���
//�� C �����У�static �ؼ�������������̬��������̬��������ͨ������ͬ�����ǵ������ں��������ǲ�ͬ�ġ�
//��̬����������ʱ����ʼ����ֻ����ʼ��һ�Σ�������������������������ڶ����ִ��ڡ�
//�ں����������ľ�̬����ֻ���ڸú����ڷ��ʣ����ں����������ľ�̬������ֻ���ڸ��ļ��ڷ��ʡ�

//����ʵ���� foo() ����������һ����̬���� x���������ʼ��Ϊ 0��ÿ�ε��� foo() ����ʱ��x ��ֵ����� 1������ӡ���µ�ֵ��
//���� x �Ǿ�̬���������ڳ�����������������ж����ڣ������������ں�������ʱ���ڡ�
//��ˣ�ÿ�ε��� foo() ʱ���������Լ�ס x ��ֵ�����ڴ˻����ϵ�����

//#include<stdio.h>
//void foo()
//{
//	static int x = 0;
//	x++;
//	printf("%d\n", x);
//}
//int main()
//{
//	foo();   //���1
//	foo();   //���2
//	foo();   //���3
//	return 0;
//}


//ѧϰʹ��auto����������÷�

//#include<stdio.h>
//int main()
//{
//	int i, num;
//	num = 2;
//	for (i = 0; i < 3; i++)
//	{
//		printf("num����Ϊ%d\n", num);
//		num++;
//		{
//			auto int num = 5;
//			printf("����ģ��num����Ϊ%d\n", num);
//			num++;
//		}
//	}
//		return 0;
//}

////ѧϰʹ��static����һ�÷�
//#include<stdio.h>
//int main()
//{
//	int i, num;
//	num = 2;
//	for (i = 0; i < 3; i++)
//	{
//		printf("num����Ϊ%d\n", num);
//		num++;
//		{
//			static int num = 1;
//			printf("����ģ��num����Ϊ%d\n", num);
//			num++;
//		}
//	}
//	return 0;
//}

//ѧϰʹ����ε����ⲿ����
//#include<stdio.h>
//int a, b, c;
//void add()
//{
//	int a;
//	a = 3;
//	c = a + b;
//}
//int main()
//{
//	a = b = 4;
//	add();
//	printf("c��ֵΪ%d\n", c);
//	return 0;
//}

////ѧϰʹ��register��������ķ���
//#include<stdio.h>
//int main()
//{
//	register int i;
//	int tmp = 0;
//	for (i = 1; i <= 100; i++)
//		tmp += i;
//	printf("�ܺ�Ϊ%d\n", tmp);
//	return 0;
//}


//��#define������ϰ
//#include<stdio.h>
//#define TRUE 1
//#define FALSE 0
//#define SQ(x) (x)*(x)
//int main()
//{
//	int num;
//	int again = 1;
//	printf("���ֵС��50������ֹ��\n");
//	while (again)
//	{
//		printf("\n����������:");
//		scanf("%d", &num);
//		printf("�����ֵ�ƽ��Ϊ%d\n", SQ(num));
//		if (num >= 50)
//		{
//			again = TRUE;
//		}
//		else
//		{
//			again = FALSE;
//		}
//	}
//	return 0;
//}

//��#define������ϰ2
//#include<stdio.h>
//#define exchange(a,b){int t;t=a;a=b;b=t;}//ע�����һ����
//int main()
//{
//	int x = 10;
//	int y = 20;
//	printf("x=%d,y=%d\n", x, y);
//	exchange(x, y);
//	printf("x=%d,y=%d", x, y);
//	return 0;
//}



////��#define������ϰ3
//#define LAG >
//#define SMA <
//#define EQ ==
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	printf("��������������:\n");
//	scanf("%d%d", &i, &j);
//	if (i LAG j)
//	{
//		printf("%d����%d\n", i, j);
//	}
//	else if (i EQ j)
//	{
//		printf("%d����%d\n", i, j);
//	}
//	else if (i SMA j)
//		printf("%dС��%d\n", i, j);
//	else
//		printf("û��ֵ\n");
//	return 0;
//}


//#if #ifdef��#ifndef���ۺ�Ӧ��
//#include<stdio.h>
//#define MAX
//#define MAXIMUM(x,y)(x>y)?x:y
//#define MINIMUM(x,y)(x>y)?y:x
//int main()
//{
//	int a = 10,b = 20;
//#ifdef MAX
//	printf("������������%d\n", MAXIMUM(a, b));
//#else
//	printf("��С��������%d\n", MINIMUM(a, b));
//#endif
//#ifndef MIN
//	printf("��С��������%d\n", MINIMUM(a, b));
//#else
//printf("�����������%d\n", MAXIMUM(a, b));
//#endif
//#undef MAX
//#ifdef MAX
//	printf("�����������%d\n", MAXIMUM(a, b));
//#else
//	printf("��С��������%d\n", MINIMUM(a, b));
//#endif
//#define MIN
//#ifndef MIN
//	printf("��С��������%d\n", MINIMUM(a, b));
//#else
//	printf("�����������%d\n", MAXIMUM(a, b));
//#endif
//     return 0;
//}


#include"test.h"
#include<stdio.h>
int main()
{
	int i = 10;
	int j = 20;
	if (i LAG j)
	{
		printf("%d����%d\n", i, j);
	}
	else if (i EQ j)
	{
		printf("%d����%d\n", i, j);
	}
	else if (i SMA j)
	{
		printf("%dС��%d\n", i, j);
	}
	else
	{
		printf("û��ֵ\n");
	}
	return 0;
}