#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr1[10] = { 1,2,3 };   //不完全初始化，剩下的元素默认初始化为0
//	int arr2[] = { 1,2,3 };
//	char arr3[] = "abcde";      //这样写字符串默认后面会有'\0'
//	char arr4[] = { 'a','b','c' };    //这样写没有
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
//	char arr1[] = { 'a','b','c','d' };    //strlen是求字符串长度 '\0'之前的字符个数
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
//		printf("\n");    //i=0打完一行就换行
//	}
//	return 0;
//}
 



//#include<stdio.h>
//int main()
//{
//	//int arr[3][] = { {1,2,3,4},{5,6,7,8} };   //会报错，二维数组可以省略行，不可以省略列
//	int arr[][4] = { {1,2,3,4},{5,6,7,8} };     //不会报错
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
//	char arr[2][3] = { {'a','b'},{'c','d'} };   //整形二位数组未初始化的部分补0，字符的什么都不补
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




////bubble_sort 冒泡排序函数
//#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{   
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{ 
//		int flag = 1;     //加flag优化程序  假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < 10 - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = 0;
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//				flag = 0;    //本趟排序的数据其实不完全有序，上面走完就会把flag置0
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
//	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址 &arr[0]
//	bubble_sort(arr,sz);   //冒泡排序函数
//	printf("排序之后的数组是:");
//	for (i = 0; i <sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//结论：数组名就是首元素的地址(有两个例外)
//1.sizeof(数组名),计算整个数组的大小,sizeof内部单独放一个数组名，数组名表示整个数组
//2.&数组名，取出的是数组的地址，&数组名，数组名表示整个数组
//除此两种情况之外，所有的数组名都表示数组首元素的地址

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



