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
//	//int* p = arr;//����������Ԫ�ص�ַ��2�����������
//	char* p = arr;  //һ��ֻ�ܸı�һ���ֽ�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//Ұָ��
//��� Ұָ�����ָ��ָ���λ���ǲ���֪�ģ�����ġ�����ȷ�ġ�û����ȷ���Ƶģ�
//1.ָ��δ��ʼ��
//2.ָ��Խ�����
//3.ָ��ָ��Ŀռ��ͷ�

//1.ָ��δ��ʼ��
//#include<stdio.h>
//int main()
//{
//	int a; //�ֲ���������ʼ��,Ĭ�������ֵ
//	int* p;//�ֲ���ָ�����,�ͱ���ʼ�����ֵ
//	*p = 20;
//	return 0;
//}


//2.ָ��Խ�����
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


////3.ָ��ָ��Ŀռ��ͷ�
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
//	//int* pa = &a;//��ʼ��
//	//int* p = NULL;//��ʼ��
//
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	//
//	pa = NULL;
//	*pa = 0;  //ָ��ΪNULL�޷���ʹ��
//
//	//ָ�벻Ϊ����ȥʹ������������
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
//	for (i = 0; i < sz/2; i++)    //p�Ӽ�1����2ע��ѭ��������ֹԽ�����Ұָ��
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
//	printf("%d\n", &arr[9] - &arr[0]);   //ָ��-ָ��õ������м��Ԫ�ظ���
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
//	//strlen -���ַ�������
//	//�ݹ� - ģ��ʵ����strlen  1.�������ķ�ʽ 2.�ݹ�ķ�ʽ
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
//	printf("%p\n", arr);//��ַ ��Ԫ�ص�ַ(�����������
//	printf("%p\n", arr+1);
//	//1.&������ ������������Ԫ�صĵ�ַ ȡ��������������ĵ�ַ
//	//2.sizeof(arr)  sizeof(������)  ���������������Ĵ�С����λ���ֽ�
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
//	int** ppa = &pa;  //ppa���Ƕ���ָ��
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	//int*** pppa = &ppa;
//	return 0;
//}


//ָ������  ����   ���ָ�������
//����ָ��  ָ��
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//�������� �������
	//�ַ����� ����ַ�
	//ָ������ ���ָ��
	//int arr[10];
	int* arr[3] = { &a,&b,&c };//ָ������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", * (arr[i]));
	}
	return 0;
}