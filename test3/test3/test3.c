#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	char arr1[] = { "bit" };
//	char arr2[] = { "########" };
//	strcpy(arr2, arr1);
//	a = strlen(arr2);
//	b = strlen(arr1);
//	c = sizeof(arr2);
//	d = sizeof(arr1);
//	printf("%d\n%d\n%d\n%d\n", a,b,c,d);
//	printf("%s\n", arr2);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[] = "today is a bad day";
//	memset(str, 'A', 6);
//	printf("%s\n", str);
//	return 0;
//}




////дһ�����������ҳ������������ֵ
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	return (x > y) ? x : y;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int max;
//	max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}



////дһ������������������ֵ
//#include<stdio.h>
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	//Swap1�����ڵ��õ�ʱ��,x,yӵ���Լ��Ŀռ䣬ͬʱӵ���˺�ʵ��һģһ��������
//	// ���Կ��Լ򵥵���Ϊ��ʵ��ʵ����֮����ʵ�൱��ʵ�ε�һ����ʱ����
//	//��ֵ����:�������βκ�ʵ�ηֱ�ռ�ò�ͬ���ڴ�飬���βεĸı䲻��Ӱ��ʵ��
//	Swap1(a, b);   //�������ʵ�ֽ���ab��ֵ
//	printf("%d %d\n", a, b);
//	//��ַ����:��ַ�����ǰѺ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ��
//	//���ִ��η�ʽ�����ú����ͺ�����ߵı�����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı���
//	Swap2(&a, &b);
//    printf("%d %d\n", a, b);
//	return 0;
//}




////дһ�������ж�һ�����ǲ�������
////����������1��������������0
//#include<stdio.h>
//#include<math.h>
//int is_prime(int x)
//{
//	int j = 0;
//	//for (j = 2; j < x; j++)
//	for (j = 2; j<=sqrt(x); j++)   //��������Ż�һ���
//	{
//		if (x % j == 0)
//			return 0;
//	}
//	return 1;
//}
////�����溯�����100-200֮�������
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200;i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}




////дһ�������ж�һ���ǲ�������
//#include<stdio.h>
//int is_leap_year(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
////�����溯�����1000-2000��������
//int main()
//{
//	int year = 0;
//	for(year=1000;year<=2000;year++)
//	{
//		if (1==is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}






////дһ��������ʵ��������������Ķ��ֲ���  binary_search
//#include<stdio.h>
//int binary_search(int arr[], int k,int sz)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]< k)
//		{
//			left = mid + 1;
//		}
//		else if(arr[mid] >k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
////����ҵ��˾ͷ�������±꣬�Ҳ����ͷ���-1
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]); //���ݹ�ȥ����arr��Ԫ�صĵ�ַ�����԰�����д�ں������޷��õ����
//	int k = 7;
//	int ret = binary_search(arr, k,sz);  
//	if (ret == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ���,�±���%d\n", ret);
//	return 0;
//}



//#include<stdio.h>
////дһ��������ʵ��������������Ķ��ֲ���  binary_search
//int binary_search(int arr[], int a, int b)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = b- 1;
//	//int mid = (left + right) / 2;   //�����������ֲ�д��ѭ�������ִ�в������
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < a)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > a)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);  //���ݹ�ȥ����arr��Ԫ�صĵ�ַ�����԰�����д�ں������޷��õ����
//	int k = 7;
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ��±���%d\n",ret);
//	return 0;
//}



////binary_search
//#include<stdio.h>
//int binary_search(int arr[], int a, int b)
//{
//	int left = 0;
//	int right = a + 1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < b)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > b)
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
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 8;
//	int ret = binary_search(arr, sz, k);
//	if (ret == -5)
//		printf("�Ҳ���\n");
//	else
//        printf("�ҵ���,�±���%d\n", ret);
//	return 0;
//}




////дһ��������ÿ����һ������������ͻὫnum��ֵ��1
//#include<stdio.h>
//void Add(int* a)
//{
//	(*a)++;
//}
//int main()
//{
//	int num = 58;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	//printf ����ֵ��Each of these functions returns the number of characters printed, or a negative value if an error occurs.
//	//              ��Щ�����е�ÿһ�������ش�ӡ���ַ���                                      ������ִ����򷵻ظ�ֵ
//	printf("%d", (printf("%d", printf("%d", 43))));
//	return 0;
//}




////������������ִ��,����д��������֮���޷�ִ����Ҫ��������֮ǰ��������������������������ɣ��ڲ�����ν
////��������
//// int ADD(int x, int y);
////int ADD(int, int);
//int ADD();
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//��������
//	sum = ADD(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
////��������
//int ADD(int x,int y)
//{
//    int z = x+y;
//	return z;
//}

//#include<stdio.h>
//#include"ADD.h"   //���ÿ⺯����<>,�����Զ��庯����""
////������д�������ADD�Ķ���������ֱ�д��ͷ�ļ�ADD.h��Դ�ļ�ADD.c��,������������ֱ�ӵ��ü���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//��������
//	sum = ADD(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


////��һ�����õݹ麯���������ÿһλ
//#include<stdio.h>
//void print(int x)
//{
//	if (x / 10 != 0)
//	{
//		print(x / 10);
//	}
//	printf("%d ", (x % 10));
//	//return (x % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	//int ret = print(num);
//	//printf("%d", ret);
//	return 0;
//}



//#include<stdio.h>
//void print(int x)
//{
//	if (x / 10 != 0)
//		print(x/10);
//	printf("%d ", x % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}



////��д������������ʱ���������ַ����ĳ���
//#include<stdio.h>
//#include<string.h>
//int my_strlen(char*str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "gqsb";
//	//int len = strlen(arr);
//	//printf("%d", len);
//
//	int len=my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}



////��д������������ʱ���������ַ����ĳ���(����ʱ�����汾)
//#include<stdio.h>
////#include<string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "gqsb";
//	//int len = strlen(arr);   //�⺯��ֱ�ӿ���
//	int len = my_strlen(arr);  //�Զ��庯��
//	printf("len=%d", len);
//	return 0;
//}




////��д������������ʱ���������ַ����ĳ���(����ʱ�����汾)���ݹ麯��ʵ�֣�
//#include<stdio.h>
//int my_strlen(char*str)
//{
//	if (*str != '\0')
//		//return 1 + my_strlen(str+1);     //��һ�к͵ڶ��ж����ԣ�������ִ�в�����Ϊstr++��strֵ������++
//	    return 1 + my_strlen(++str);       
//	    //return 1 + my_strlen(str++);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "gqsb";
//	int len = my_strlen(arr);
//	printf("len=%d", len);
//	return 0;
//}






////��д������������ʱ���������ַ����ĳ���(����ʱ�����汾)���ݹ麯��ʵ�֣�
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(++str);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "gqsb";
//	int len = my_strlen(arr);
//	printf("len=%d", len);
//	return 0;
//}


////��n�Ľ׳�(���������)
//#include<stdio.h>
//int factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * factorial(n - 1);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int s = factorial(i);
//	printf("���Ľ׳���%d", s);
//	return 0;
//}





////��һ�����õݹ麯���������ÿһλ
//#include<stdio.h>
//int my_print(int x)
//{
//	if (x / 10 != 0)
//	{
//		my_print(x / 10);
//	}
//	//printf("%d ", (x % 10));
//	return (x % 10);
//}
//int main()
//{
//	int num = 0;
//	printf("������һ������:\n");
//	scanf("%d", &num);
//	//print(num);
//	int ret =my_print(num);
//	printf("%d", ret);
//	return 0;
//}



//#include<stdio.h>
//int fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	//��n�Ľ׳�
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac1(n);   //ѭ���ķ�ʽ
//	printf("%d", ret);
//	return 0;
//}




//#include<stdio.h>
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main()
//{
//	//��n�Ľ׳�
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);   //�ݹ�ķ�ʽ
//	printf("%d", ret);
//	return 0;
//}


//#include<stdio.h>
////쳲���������
////1 1 2 3 5 8 13 21 34....
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3) //���Ե�����쳲���������Ҫ������Ĵ���
//	{
//		count++;
//	}
//
//
//	if (n <= 2)
//		return 1;
//	if (n > 2)
//		return Fib(n - 1) + Fib(n - 2);     //�õݹ����쳲���������Ҫ�ظ������ļ����ظ��Ĺ���
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD-������������:�ȿ����������ôʹ�ã��ٿ���ôȥд�������
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	printf("count=%d\n", count);
//	return 0;
//}




//#include<stdio.h>
//////쳲���������
//////1 1 2 3 5 8 13 21 34....
//int Fib(int n)      //�����ַ��������ٶȴ������
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD-������������:�ȿ����������ôʹ�ã��ٿ���ôȥд�������
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}




//#include<stdio.h>
//void test(int n)
//{
//	if (n < 100000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}