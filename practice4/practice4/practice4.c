#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int t = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		t = t * i;
//		sum = sum + t;
//	}
//	printf("%d\n", sum);
//}




//#include<stdio.h>
//int main()
//{
//	int x = 4;
//	int y = (++x) + (++x);
//	int z = (x++) + (x++);
//	int i = (++x) - (++x);
//	int j = (x++) - (x++);
//	//int y = (++x);
//	//int y = (x+2) + (++x);
//	printf("%d\n", y);
//	printf("%d\n", z);
//	printf("%d\n", i);
//	printf("%d\n", j);
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[] = { 'h','a','b','c','d' };
//	char b[] = { 'h','a','b','c','d','\0' };
//	int len1 = strlen(a);
//	int len2 = strlen(b);
//	printf("%d\n%d\n", len1, len2);
//}


//#include<stdio.h>
//int main()
//{
//	char x[5];
//	char y[] = { 'h','e','l','l','o' };
//	int x[10] = { 12,13,14,15 };
//	int y[];
//}



//C���Գ�����ƿ��ԶԼ����Ӳ�����в���
//�ڶ�������ʱ����ʱ���Խ��������ά��ʡ��
//�κ����鶼����ʵ�ֶ�������������


////ð������ ��С����
//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i=0 ; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5 - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//
//	printf("����֮�������Ϊ\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= 10 - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//	printf("�Ӵ�С������������\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//C���Գ����� ���� ���ɵģ���C���Եĺ������� ��� ���ɵ�
//��C���Գ����У����ļ����в�������Ҫ  �� ��Ȼ����ļ����в��������Ҫ���ļ�ʵ�� �ر� ��������ֹ�ļ�����Ϣ�Ķ�ʧ��
//���ַ������в����ĺ����� �ַ������ȡ�ȡ���ַ������ַ����滻���ַ������ơ��ַ���ƴ�� �ȡ�
//C���Ե�һ���ص��ǿ��ԶԼ����Ӳ�����в���
//��C���Գ�������У��ַ���������ַ���������ȫһ���ĸ���
//ѡ��ṹ(if���)��ѭ���ṹ������ʹ��Ƕ����ʽ


////ð������
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10 - 1 - i; j++)
//		{
//			int temp= 0;
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//	printf("��С��������������Ϊ:");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	//ð�������֮���ö��ַ�����������Ԫ��
//	int a = 0;
//	int k = 58;
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[0]))-1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//		{
//			printf("�ҵ����±���%d\n", mid);
//			break;
//		}		
//	}
//	return 0;
//}




//#include<stdio.h>
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	//int right = sz + 1;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if(arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -5;
//}
//int main()
//{
//	int arr[13] = { 1,2,3,4,5,6,7,8,9,10,11,12,13};
//	int k = 8;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr, k, sz);
//	if (ret == -5)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ����±���%d\n", ret);
//	}
//}




//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int s = 0;
//	for (i = 1; i < 21; i++)
//	{
//		s = s + i * (i + 1);
//	}
//	printf("%d\n", s);
//}




//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	
//	char A[] = "He_has_Ǯ!";
//	printf("%zd", strlen(A));
//}


//#include<stdio.h>
//int main()
//{
//	char c;
//	while ((c = getchar()) != '?')
//		putchar(--c);
//}



//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	int b = 2;
//	int c = 2;
//	int d = a++ + b++ + c++;
//	printf("%d", d);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char a;
//	char b;
//	scanf("a=%c,b=%c", &a, &b);
//	printf("%c %c", a, b);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char s[12] = { "string" };
//	printf("%zd\n", strlen(s));
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	float f;
//	f = ((3.0, 4.0, 5.0), (2.0, 1.0, 0.0));
//	printf("%f", f);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char a[] = { 0,1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c ", a[i]);
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	float f=0.0;
//	scanf("%5f",&f);        //scanf��֧��.��ʽ��д�� �����г������ƣ���û��С��λ������
//	printf("%5.2f",f);      //printf֧��.��ʽ��д��
//	return 0;
//}


////���ڴ��д洢��A��Ҫռ�ã�   2   �����ֽڣ��洢��A��Ҫռ�ã�   1   ���ֽڡ�
//#include<stdio.h>
//int main()
//{
//	char a = 'A';
//	char b[] = "A";       //C���Զ����ַ���ֻ��������
//	printf("%zd %zd", sizeof(a), sizeof(b));
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char a = '\a';
//	char b = '\b';
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}



//���ų����Ķ��巽��: #define ���ų��� ����
//char�ͳ������ڴ��д�ŵ���ASCII��
//��������strcat(strcpy(str1,str2),str3)�Ĺ�����
//���ַ���str2���Ƶ��ַ���str1�к��ٽ��ַ���str3���ӵ��ַ���str1֮��
//"*"��Ϊָ���������"&"��Ϊ��ַ�����
//��ֵ���ʽ�͸�ֵ���������������� ; ��
//��{}��һЩ�����������Ϊ ������� 




////��������й�ʽ����e��ֵ������Ϊ1e - 6��
////e = 1 + 1 / 1!+ 1 / 2!+ 1 / 3!+ ����1 / n!
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n;
//	float e = 1.0;
//	printf("������һ����:");
//	scanf("%d", &n);
//	float t = 1.0;
//	for (i = 1; i <= n; i++)
//	{	
//		t = t * i;
//		e = e + 1/t;
//	}
//	printf("n����%dʱ�����:%.6f", n,e);
//	return 0;
//}
