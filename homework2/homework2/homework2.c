#define _CRT_SECURE_NO_WARNINGS

////д���뽫�������Ӵ�С���
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp=0;
//	scanf("%d%d%d", &a, &b, &c);
//	//�㷨ʵ��
//    //a�з����ֵ
//	//b��֮
//	//c����Сֵ
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tpm = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
////���100-200֮�������
//{
//	int i = 0;
//	int count = 0;
//	//for (i = 100; i <= 200; i++)
//    for (i = 101; i <= 200; i+=2)        //ż��������Ϊ���������Դ�101��ʼ�����2�������������и��Ż�һ��
//	{
//		int a = 0;
//		//for (a = 2; a < i ;a++)       //�Գ�������2~��i-1���Գ�
//		for (a = 2; a <= sqrt(i); a++)    //sqrt��ƽ��   ���m��д��m=a*b����ʽ����ôa��b֮�б���һ��С��m�Ŀ�����
//		{
//			if (i % a == 0)
//			{
//				break;
//			}
//		}
//		//if (a==i)
//		if(a>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}


////���1-100֮��9�ĸ���
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//	//else if (i / 10 == 9)
//		if(i/10==9)
//			count++;
//	}
//	printf("count=%d", count);
//	return 0;
//}


////�������9*9�˷���
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//			//printf("%d*%d=%d ", i, j, i * j);    //������žų˷�����û�ж��벻�ÿ�
//		    //printf("%d*%d=%2d ", i, j, i * j);   //%2d�Ҷ��룬�ÿ���һЩ
//		      printf("%d*%d=%-2d ", i, j, i * j);   //%-2d����룬����
//		printf("\n");
//	}
//	return 0;
//}


//���һ��������������
#include<stdio.h>
int main()
{
	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	int i = 0;
	int max = arr[0];    //���ֵ
	int sz = sizeof(arr) / sizeof (arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("max=%d\n", max);
	return 0;
}