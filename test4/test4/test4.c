#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr1[10] = { 1,2,3 };   //����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	int arr2[] = { 1,2,3 };
//	char arr3[] = "abcde";      //����д�ַ���Ĭ�Ϻ������'\0'
//	char arr4[] = { 'a','b','c' };    //����дû��
//	printf("%zd\n%zd\n", sizeof(arr1), sizeof(arr2));
//	int len1 =strlen(arr3);
//	int len2 =strlen(arr4);
//	printf("%d\n%d\n", len1,len2);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = { 'a','b','c','d' };    //strlen�����ַ������� '\0'֮ǰ���ַ�����
//	char arr2[] = "abcd";
//	printf("%zd\n%zd\n%zd\n%zd\n", sizeof(arr1), sizeof(arr2), strlen(arr1), strlen(arr2));
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	float arr1[] = { 3.2,1.3,5.8 };
//	double arr2[] = { 3.14,5.56,3.67 };
//	printf("%zd\n%zd\n", sizeof(arr1), sizeof(arr2));
//		return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,7,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);
//	}
//	return 0;
//} 



//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");    //i=0����һ�оͻ���
//	}
//	return 0;
//}
 



//#include<stdio.h>
//int main()
//{
//	//int arr[3][] = { {1,2,3,4},{5,6,7,8} };   //�ᱨ����ά�������ʡ���У�������ʡ����
//	int arr[][4] = { {1,2,3,4},{5,6,7,8} };     //���ᱨ��
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5,6},{7,8} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			//printf("%d", arr[i][j]);
//			//printf("%p ", &arr[i][j]);
//			printf("&arr[%d][%d]=%p ", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr[2][3] = { {'a','b'},{'c','d'} };   //���ζ�λ����δ��ʼ���Ĳ��ֲ�0���ַ���ʲô������
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%c ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr1[2][3] = { {1,2},{3,4,5} };
//	char arr2[2][3] = { {'a','b','c'},{'d','e','f'} };
//	char arr3[2][3] = { "abc" };
//	printf("%zd %zd %zd\n", sizeof(arr1), sizeof(arr2), sizeof(arr3));
//	printf("%zd\n", strlen(arr2));
//	printf("%zd\n", strlen(arr3));
//	return 0;
//}




////bubble_sort ð��������
//#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{   
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{ 
//		int flag = 1;     //��flag�Ż�����  ������һ��Ҫ����������Ѿ�����
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < 10 - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = 0;
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//				flag = 0;    //���������������ʵ����ȫ������������ͻ��flag��0
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ &arr[0]
//	bubble_sort(arr,sz);   //ð��������
//	printf("����֮���������:");
//	for (i = 0; i <sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//���ۣ�������������Ԫ�صĵ�ַ(����������)
//1.sizeof(������),������������Ĵ�С,sizeof�ڲ�������һ������������������ʾ��������
//2.&��������ȡ����������ĵ�ַ��&����������������ʾ��������
//�����������֮�⣬���е�����������ʾ������Ԫ�صĵ�ַ

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}



