#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//int main()
//{
//	int y = 0;
//	y = (13 > 12 ? 15 : 6 > 7 ? 8 : 9);
//    //����Ŀ����������˳��Ϊ�����������
//	//�������ȼ���
//	/*if (13 > 12)
//	{
//		y = 15;
//	}
//	else
//	{
//		if (6 > 7)
//		{
//			y = 8;
//		}
//		else
//		{
//			y = 9;
//		}
//	}*/
//	printf("%d", y);
//}



// C��������׷�ӷ�ʽ��һ���ļ�Ӧѡ��  "rb" ����
// �ں�����Ĭ�ϴ洢����˵�����ı���Ӧ���� �Զ� �洢����
// C������ֻ����ʽ��һ���ļ�Ӧѡ��  "r" ����



////���1��100֮�䲻�ܱ�12��������
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 12 != 0)
//			printf("%d ", i);
//	}
//	return 0;
//}


//��̼������б��ʽ��s = n!��n�Ӽ���������)
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int s = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		s = s * i;
//	}
//	printf("%d", s);
//	return 0;
//}




////�Ӽ��������10����������һά�����У����ɴ�С��˳�����
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	//int k = 0;
//	int arr[5] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		int t = 0;
//		if (arr[i] < arr[i + 1])
//		{
//			t = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = t;
//			printf("%d ", arr[i]);
//		}
//		else
//		{
//			printf("%d ", arr[i]);
//		}
//	}	
//	return 0;
//}




//����fpΪ�ļ���ָ������Ķ��巽��Ϊ FILE *fp
//����ָ�������ֵ���ʱ����������ָ�������ռ��ͬһ�ڴ浥Ԫ
//�����������������Զ��庯���У�ֻҪ˵���˱������Ϳ�Ϊ����������Ԫ  ����  ��仰�Ǵ�ģ�����
//�����ָ�������˵���˲���������ڴ棬Ҫ�����ڴ������ malloc ����  new ����������ڴ档


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d,%d", &a, &b);
//	printf("%d\n%d\n", a, b);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	float c = 30.0;
//	float f;
//	f = (6 * c) / 5 + 32;
//	printf("f=%f", f);
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int t = 1;
//	for (i = 1; i <= 4; i++)
//	{
//		t = t * i;
//		sum = sum + t;
//	}
//	printf("%d", sum);
//}



//#include<stdio.h>
//int MAX(int a, int b, int c)
//{
//	if (a > b && a > c)
//	{
//		return a;
//	}
//	else if (a < b && b < c)
//	{
//		return c;
//	}
//	else
//	{
//		return b;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	int ret=MAX(a, b, c);
//	printf("%d", ret);
//	return 0;
//}




//#include<stdio.h>
//int stu(int x, int y)
//{
//	return (x - y) * (x - y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret = stu(a, b);
//	printf("%d", ret);
//}




////�Ӽ���������10����ί�ķ�����ȥ��һ����߷֣�ȥ��һ����ͷ֣��������8���˵�ƽ���֣����ƽ���֣���߷֣���ͷ֡�
//#include<stdio.h>
//int main()
//{
//	float arr[10];
//	int i = 0;
//	float sum = 0;
//	float aver = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%f", &arr[i]);
//		sum = sum + arr[i];
//	}
//	float max = arr[0];
//	float min = arr[0];
//	for(i=1;i<10;i++)
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		else if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	sum = sum - max - min;
//	aver = sum / 8;
//	printf("%f", aver);
//	return 0;
//}







//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	(n = 6 * 4, n + 6), n * 2;
//	printf("n=%d", n);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a[] = { 2,4,6,8,10 };
//	int y = 1;
//	int x;
//	int* p;
//	p = &a[1];
//	for (x = 0; x < 3; x++)
//	{
//		y += *(p + x);
//		//printf("%d\n", y);
//	}
//	printf("%d\n", y);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a[5];
//	int k;
//	for (k = 0; k < 5; k++)
//	{
//		a[k] = 10 * k;
//	}
//	printf("%d", a[k - 1]);
//}



//getchar()�������ǴӼ����϶���һ���ַ�����������
//getchar()�����ȴ�����ֱ�����س��Ž������س�ǰ�����������ַ����������ʾ����Ļ�ϣ���ֻ�е�һ���ַ���Ϊ�����ķ���ֵ��
//getchar����ԭ�����£�
//������ʽ��int getchar(void);
//�� �ܣ��ӱ�׼�����豸��ȡ��һ���ַ�
//�� �� ֵ�����������ַ������򷵻� - 1



////�Ӽ���������20��Ԫ�ص�ֵ����һά����a�У�Ȼ���±�Ϊ��1��3��5��7��9��������Ԫ��ֵ��ֵ������b���������b������
//#include<stdio.h>
//int main()
//{
//	int arr1[20] = { 0 };
//	//int arr2[10] = { 0 };
//	int i= 0;
//	//int j = 0;
//	for (i = 0; i < 20; i++)
//	{
//		scanf("%d", &arr1[i]);
//		if (i % 2 != 0)
//		{
//			printf("%d ", arr1[i]);
//		}
//	}
//	return 0;
//}




////������� 3,-30,20,6,77,2,0,-4,-7,99��ʮ���������ֵ����Сֵ��
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 3,-30,20,6,77,2,0,-4,-7,99 };
//	int max = arr[0];
//	int min = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		else if (arr[i] < min)
//		{
//			min = arr[i];
//		}		
//	}
//	printf("max=%d\nmin=%d", max, min);
//	return 0;
//}



////�����������������ú���stu()���������͵�������������������ʾ���
//#include<stdio.h>
//int stu(int x, int y)
//{
//	return (x + y) * (x + y) * (x + y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret = stu(a, b);
//	printf("%d\n", ret);
//	return 0;
//}




////��̼���1 - 100֮�����������ż����
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	for(i=1;i<=100;i++)
//	{
//		if (i % 2 != 0)
//		{
//			sum1 = sum1 + i;
//		}
//		else if (i % 2 == 0)
//		{
//			sum2 = sum2 + i;
//		}
//	}
//	printf("�����ĺ�=%d\nż���ĺ�=%d\n", sum1, sum2);
//	return 0;
//}