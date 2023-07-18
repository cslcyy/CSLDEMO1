#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//int main()
//{
//	int n = 2;
//	while (n--);   //while括号中循环条件后面有分号，为真(非0)时不执行，当循环条件为假(0)时,才会往下执行
//	printf("%d", n);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	/*char* ch; *ch = "hello";
//	printf("%p", ch);*/
//	/*char* ch = "hello";
//	printf("%p", ch);*/
//	/*char* ch = "hello";
//	ch = "bye";
//	printf("%p", ch);*/
//	char* ch;
//	ch = "hello";
//	printf("%p", ch);
//	return 0;
//}



//C语言源程序文件的扩展名是(.c),经过编译后,生成文件的扩展名是(.obj),经过连接后，生成的文件扩展名是(.exe)
//C语言中文件是指 存储在外部介质上的相关数据集合

//#include<stdio.h>
//int main()
//{
//	int x = 3;
//	int y = 2;
//	double a=1.0 * x / y;
//	printf("%lf", a);
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i++ <= 5;)
//		printf("%d", i);
//	return 0;
//}


////模拟计算器功能，编写程序，根据用户输入的运算符，对两个数进行运算(用switch语句)
//#include<stdio.h>
//int main()
//{
//	float x;
//	float y;
//	char operator;
//	scanf("%f%c%f", &x, &operator,&y);
//	switch (operator)
//	{
//	case '+':
//		printf("%f+%f=%f\n", x, y, x + y);
//		break;
//	case '-':
//		printf("%f-%f=%f\n", x, y, x - y);
//		break;
//	case '*':
//		printf("%f*%f=%f\n", x, y, x * y);
//		break;
//	case '/':
//		if (y == 0)
//		{
//			printf("除数不能为0\n");
//		}
//		else
//		{
//			printf("%f/%f=%f\n", x, y, x / y);
//		}
//		break;
//	default:
//		printf("operator is invalid");
//	}
//	return 0;
//}




////求3~100之间的全部素数，并统计素数个数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;	
//	int count = 0;
//	for (i = 3; i <= 100; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}					
//	}
//	printf("count=%d\n", count);
//	return 0;
//}



////将矩阵   9   7   5   1  倒置为  9   3   4
////        3   1   2   8          7   1   6
////        4   6   8   10         5   2   8
////                               1   8   10
//
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { {9,7,5,1},{3,1,2,8},{4,6,8,10} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <4; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		if(i==0||i==1||i==2)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}



//C语言从源程序的书写到上机运行输出结果要经过(编辑、编译、连接、执行)四个步骤
//C语言中,变量的存储类别共有四种,即(自动型、外部型、静态型和寄存器型)
//C语言调用函数中,参数的虚实结合是(传值)
//逻辑运算符"&&、||、!"中是短路运算符的是(&&、||)



////输入一单精度二维数组a[4][3]，
////计算该二维数组中的最大元素的值及其所在位置（行、列），
////并输出计算结果。
//#include<stdio.h>
//int main()
//{
//	int arr[4][3] = { 0 };
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	int b = 0;
//	for(i=0;i<4;i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int MAX = arr[0][0];
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (arr[i][j] > MAX)
//			{
//				MAX = arr[i][j];
//				a = i;
//				b = j;
//			}
//		}
//	}
//	printf("数组最大值的位置在%d行%d列", a, b);
//	printf("%d", MAX);
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int k = 58;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (j = 0; j < 10; j++)
//	{
//		sum = arr[j] + arr[j + 1] + arr[j + 2];
//		if (sum == k)
//		{
//			printf("%d %d %d", arr[j], arr[j + 1], arr[j + 2]);
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a;
//	float b;
//	scanf("%2d%f", &a, &b);
//	printf("%d\n%f\n", a, b);
//}


//#include<stdio.h>
//int main()
//{
//	int x = 2;
//	int a = (2 * x, x += 2);
//	int b = x * (1 + x);
//	printf("%d\n", a);
//	//printf("%d\n",  b);
//
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	do 
//	{
//		printf("%d", a -= 2);
//	} while (!(--a));
//	printf("\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 0;
//	if (a == 1 && b++ == 2)
//		if (b != 2 || c-- != 3)
//			printf("%d,%d,%d\n", a, b, c);
//		else printf("%d,%d,%d\n", a, b, c);
//	else printf("%d,%d,%d\n", a, b, c);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a[4][4] = { {1,2,-3,-4},{0,-12,-13,14},{-21,23,0,-24},{-31,32,-33,0} };
//	int i, j, s = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (a[i][j] < 0)
//			{
//				continue;
//			}
//			if (a[i][j] == 0)
//			{
//				break;
//			}
//			s += a[i][j];
//		}
//	}
//	printf("%d", s);
//	return 0;
//}



//#include<stdio.h>
//void hanoi(int arr, char a, char b, char c)
//{
//	if (arr == 1)
//		printf("%c=>%c\n", a, c);
//	else
//	{
//		hanoi(arr - 1, a, c, b);
//		printf("%c=>%c\n", a, c);
//		hanoi(arr - 1, b, a, c);
//	}
//}
//int main()
//{
//	char a = 'A';
//	char b = 'B';
//	char c = 'C';
//	hanoi(3, a, b, c);
//	return 0;
//}