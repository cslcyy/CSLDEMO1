#define _CRT_SECURE_NO_WARNINGS

//���������

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	a = 5 / 2;
//	b = 5 % 2;    //%���������߶�����������
//	double c = 5 / 2.0;  // ������/�����и��������ܵõ�������
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	printf("c=%lf\n", c);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 16;
//	int b = a >> 1;
//	int c = a << 1;
//	//���Ʋ�����(һ��Ϊ��������,�ɴ�ӡ��������༭���õ�����)
//	//1.��������:�ұ߶�������߲�ԭ����λ
//	//2.�߼����ƣ��ұ߶�������߲���
//	int d = -1;
//	int i = d >> 1;
//	printf("%d\n%d\n", b, c);
//	printf("%d\n", i);
//	return 0;
//}


////����ʵ��:��һ�������洢���ڴ��еĶ������е�1�ĸ���
//#include<stdio.h>
////����㷨�������ڸ���
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//ͳ��num�Ķ����Ʋ������м���1(�洢���ڴ����ǲ�����ʽ��
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}


////����ʵ��:��һ�������洢���ڴ��еĶ������е�1�ĸ���
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = 0;
//	//32bit
//	// num&1==1   (��λ��1,��1˵����λ��1�������λΪ0)
//	//00000000000000000000000000000011
//	//00000000000000000000000000000001
//	//00000000000000000000000000000001
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if(1==((num>>i)&1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


////����ʵ��:��һ�������洢���ڴ��еĶ������е�1�ĸ���
//#include<stdio.h>
//int main()
//{
//	int num = -1;
//	scanf("%d", &num);
//	int i = 0;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//    //00000000000000000000000000000011
//	//00000000000000000000000000000010
//	//00000000000000000000000000000001
//	//00000000000000000000000000000000
//	}
//	printf("��������1�ĸ�����%d\n", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	if (a)
//	{
//		printf("����\n");
//	}
//	if (!a)
//	{
//		printf("�Ǻ�\n");
//	}
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;    //ָ��  32λsizeof����4��64λ����8
//	int arr[10] = { 0 };
//	//sizeof ���������ռ�ռ�Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(char*));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[10]));
//	printf("%d\n", sizeof(int[5]));
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%zd\n", sizeof(s = a + 5));//a+5����浽s�ﻹ�ǰ���s�Ĵ洢�ռ���
//	printf("%d\n", s);    //sizeof��ı��ʽ���������������
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	//~��(2����)λȡ��
//	//00000000000000000000000000000000   ����ԭ�뷴�벹��һ��   ���� ԭ�����λ���䰴λȡ���õ����룬�����1�õ�����
//	//11111111111111111111111111111111   ��λȡ����Ľ�� ���� ������Ҫ���ԭ�����
//	//11111111111111111111111111111110   ����-1 ����
//	//10000000000000000000000000000001   �������λ���䣬����λȡ���õ�ԭ��
//	printf("%d\n", ~a);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}



//#include<stdio.h>
//void test1(int arr[])
//{
//	printf("%zd\n", sizeof(arr));  //����ȥ������Ԫ�ص�ַ����ַ��ָ����գ�sizeof�Ľ����4/8(32λ����64λ��
//}
//void test2(char ch[])
//{
//	printf("%zd\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%zd\n", sizeof(arr));
//	printf("%zd\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}



//#include<stdio.h>
////ѧ��
////struct stu�� int,float,double��һ����һ�����ͣ�����������������
////����һ���ṹ������-struct stu
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	//ʹ��struct stu������ʹ�����һ��ѧ������s1,����ʼ��
//	struct stu s1 = { "����",20,"20230909" };
//	struct stu* ps = &s1;
//	//�ṹ��ָ��->��Ա��
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//	//*ps�͵����õ���s1�������������д���������
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);
//	//.������
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	//�ṹ�����.��Ա��
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011   a��ض�һ���ֽڴ��
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111   b��ض�һ���ֽڴ��
//	
//	//a��b���
//	//���������ǰ��ձ������������͵ķ���λ��������
//	//00000000000000000000000000000011   a����������
//	//00000000000000000000000001111111   b����������
//	//00000000000000000000000010000010
//	//10000010  c��ضϴ�ŵ����֣����룩
//	//����ԭ����ת��
//	//10000001
//	//11111110  ԭ�� ���
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}


//�Ƿ����ʽ����Ľ��:��ͬ��������������������н����ͬ
#include<stdio.h>
int main()
{
	int i = 10;
	i = i-- - --i * (i = -3) * i++ + ++i;
	printf("i=%d\n", i);
	return 0;
}