#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//
//	{
//		if (b >= 20)   break;
//
//		if (b % 3 == 1)
//
//		{
//			b += 3;  continue;
//		}
//
//		b -= 5;
//	}
//	printf("%d", a);
//}


//#include<stdio.h>
//int main()
//{
//	int y = 1, x, * p, a[] = { 2,4,6,8,10 };
//
//	p = &a[1];
//
//	for (x = 0; x < 3; x++)
//
//		y+=*(p + x);
//
//	printf("%d\n", y);
//}



//三个整数a、b、c，由键盘输入，输出其中最大的数
//#include<stdio.h>
//int MAX(int x, int y ,int z)
//{
//	if (x < y && y < z)
//		return z;
//	else if (x > y && x > z)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b,&c);
//	int ret=MAX(a, b, c);
//	printf("%d", ret);
//	return 0;
//}



////从键盘输入的10个整数中，找出   第一个  能被7整除的数。若找到，打印此数后退出循环；若未找到，打印“not  exist”。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		scanf("%d", &a);
//		if (a % 7 == 0)
//		{
//			printf("%d", a);
//			break;
//		}
//	    if (i == 10)
//		{
//			printf("not exist");
//		}	
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int x = 10;
//	int y = 3;
//	int z = 0; 
//	printf("%d\n", z = (x % y, x / y));   //输出结果为3
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int z = 0;
//	printf("%d\n", z = (2, 3, 5, 78, 111));  //z会被赋值最后一个数
//	return 0;
//}




////求a输出的值是多少   "宏定义只是简单的字符串替换，并不带计算过程"
//#include<stdio.h>
//#define SQR(X) X*X            //X*X没有用括号括起来！！！
//int main()
//{
//	int a = 10;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	int k = 2;
//	int m = 1;
//	a /= SQR(k + m) / SQR(k + m);     //SQR(k+m)/SQR(k+m)计算结果为k+m*k+m/k+m*k+m
//	b = SQR(k + m);
//	c = SQR(k);
//	d = SQR(m);
//	e = 1 / SQR(k + m);
//	printf("a=%d\n%d\n%d\n%d\n%d\n", a,b,c,d,e);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//char* p1= "abcd";
//	//char* p2 = "ABCD";
//	char p1[10] = "abcd";
//	char p2[10] = "ABCD";
//	char str[50] = "xyz";
//	strcpy(str + 2, strcat(p1 + 2, p2 + 1));   //strcar拼接作用，strcpy复制，str+2指向z，就是将拼接后的替换掉z及其之后的元素。
//	printf("%s\n", str);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char A[] = { "I am a student" };
//	int len = strlen(A);
//	printf("len=%d", len);
//}




//#include<stdio.h>
//int main()
//{
//	int a[5] = {2,4,6,8,10};
//	int* p;
//	int** k;
//	p = a;
//	k = &p;
//	printf("%d\n", *p);
//	printf("%d\n", *(p+1));
//	printf("%d\n", *(p+2));
//	printf("%d\n", *(p + 3));
//	printf("%d\n", *(p + 4));
//	printf("%d\n", *(p + 5));
//	printf("%d\n", **k);
//	printf("%d\n", **(k++)); 
//	printf("%d\n", **(k+1));    //执行不了
//	printf("%d\n", **(k + 2));  //执行不了
//	return 0;
//}



//#include<stdio.h>
//int Fac(int n)
//{
//	int i = 0;
//	int s = 1;
//	for (i = 1; i <= n; i++)
//	{
//		s *= i;
//	}
//	return s;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret=Fac(n);
//	printf("它的阶乘是%d\n", ret);
//	return 0;
//}



//#include<stdio.h>
//int Fac(int x)
//{
//	int i = 0;
//	int s = 1;
//	for (i = 1; i <= x; i++)
//	{
//		s *= i;
//	}
//	return s;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("它的阶乘是%d\n", ret);
//	return 0;
//}



//int Fac(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//		return x * Fac(x - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("它的阶乘是%d\n", ret);
//	return 0;
//}



//斐波那契数列
//1 1 2 3 5 8 13 21.....
//#include<stdio.h>
//int Fib(int x)
//{
//	if (x <= 2)
//		return 1;
//	else
//		return Fib(x - 1) + Fib(x - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}



////斐波那契数列
////1 1 2 3 5 8 13 21.....
//#include<stdio.h>
//int Fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}




//汉诺塔问题源自印度一个古老的传说，印度教的“创造之神”梵天创造世界时做了 3 根金刚石柱，其中的一根柱子上按照从小到大的顺序摞着 64 个黄金圆盘。
//梵天命令一个叫婆罗门的门徒将所有的圆盘移动到另一个柱子上，移动过程中必须遵守以下规则:
//每次只能移动柱子最顶端的一个圆盘；
//每个柱子上，小圆盘永远要位于大圆盘之上

// 1)当起始柱上只有 1 个圆盘时，我们可以很轻易地将它移动到目标柱上；

// 2) 当起始柱上有 2 个圆盘时
// 移动过程是：先将起始柱上的 1 个圆盘移动到辅助柱上，然后将起始柱上遗留的圆盘移动到目标柱上，最后将辅助柱上的圆盘移动到目标柱上。

//3) 当起始柱上有 3 个圆盘时，仔细观察会发现，移动过程和 2 个圆盘的情况类似：
//先将起始柱上的 2 个圆盘移动到辅助柱上，然后将起始柱上遗留的圆盘移动到目标柱上，最后将辅助柱上的圆盘移动到目标柱上

//通过分析以上 3 种情况的移动思路，可以总结出一个规律：对于 n 个圆盘的汉诺塔问题，移动圆盘的过程是：
//1.将起始柱上的 n - 1 个圆盘移动到辅助柱上；
//2.将起始柱上遗留的 1 个圆盘移动到目标柱上；
//3.将辅助柱上的所有圆盘移动到目标柱上。
//由此，n 个圆盘的汉诺塔问题就简化成了 n - 1 个圆盘的汉诺塔问题。
//按照同样的思路，n - 1 个圆盘的汉诺塔问题还可以继续简化，直至简化为移动 3 个甚至更少圆盘的汉诺塔问题。

//#include<stdio.h>
//void hanoi(int num, char sou, char tar, char aux)
//{
//	//统计移动次数
//	static int i = 1;
//	//如果圆盘数量仅有1个，则直接可以从起始柱移动到目标柱
//	if (num == 1)
//	{
//		printf("第%d次:从%c移动至%c\n", i, sou, tar);
//		i++;
//	}
//	else
//	{
//		//递归调用hanoi()函数,将num-1个圆盘从起始柱移动到辅助柱上
//		hanoi(num - 1, sou, aux, tar);
//		//将起始柱上剩余一个大圆盘移动到目标上
//		printf("第%d次:从%c移动至%c\n", i, sou, tar);
//		i++;
//		//递归调用hanoi()函数,将辅助柱上的num-1圆盘移动到目标柱上
//		hanoi(num - 1, aux, tar, sou);
//	}
//}
//int main()
//{
//	//以移动3个圆盘为例,起始柱、目标柱、辅助柱分别用A,B,C表示
//	hanoi(5, 'A', 'B', 'C');
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int n;
//	//(n = 6 * 4, n + 6), n * 2;
//	//(n = 6 * 3, n + 6), n * 2;
//	//(n = 6 * 2, n + 6), n * 2;
//	//(n = 6 * 1, n + 6), n * 2;
//	//(n = 6 * 3, n + 6), //n * 2;
//	//(n = 6 * 4, n + 6), n * 2;
//	
//	printf("n=%d\n", n);     //只有最左侧的语句对n进行了赋值
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a[10], * p;
//	p = a;
//	p = a;
//	p = a;
//	p = a;
//	//*p;
//	*(p + 10);
//}


//#include<stdio.h>
//int main()
//{
//	int a = 1010B;
//	int b = 036B;
//	int c = 0Xffa;
//	int d = x2a2;
//}



//指针是一种变量，该变量用来存放某个变量的地址值的.
//指针变量的类型与它所指向的变量类型一致.
//指针变量的命名规则与标识符相同.
//Break语句:在多重循环中，只能退出最靠近的那一层循环语句.
//在函数中默认存储类型说明符的变量应该是自动存储类型
//C语言中putchar(c) 函数的功能是:将变量c中的字符显示到屏幕上



//#include<stdio.h>
//int main()
//{
//	int n;
//	for (n = 3; n <= 10; n++)
//	{
//		if (n % 5 == 0)
//		{
//			break;
//		}
//		printf("%d ", n);
//	}
//	return 0;
//}




////编程计算下列表达式：s = 1!+ 2!+ 3!+ 4!+ …… + 10!
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	int t = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		t *= i;
//		sum += t;
//	}
//	printf("%d\n", sum);
//}



////从键盘上输入a与n的值，计算sum = a + aa + aaa + aaaa + ……(共n项)的和
////例a = 2, n = 4, 则sum = 2 + 22 + 222 + 2222
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int n = 1;
//	int count = 1;
//	int sn = 0;
//	int tn = 0;
//	scanf("%d%d", &a, &n);
//	while (count <= n)
//	{
//		tn = tn + a;
//		sn = sn + tn;
//		a = a * 10;
//		++count;
//	}
//	printf("%d", sn);
//	return 0;
//}





////求3X3矩阵的主对角线元素之和。
//#include<stdio.h>
//int main()
//{
//	int a[3][3] = {0};
//	int i = 0;
//	int j = 0;
//	int s = 0;
//	for(i=0;i<3;i++)
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	for(i=0;i<3;i++)
//		for (j = 0; j < 3; j++)
//		{
//			if (i == j)
//				s = s + a[i][j];
//		}
//	printf("%d", s);
//	return 0;
//}




////从键盘上输入10个数存入一维数组中，求这10数中的最大值与最小值并输出
//#include<stdio.h>
//int main()
//{
//	int a[10] = { 0 };
//	int max = 0;
//	int min = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	max = a[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//	}
//	min = a[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (a[i] < min)
//		{
//			min = a[i];
//		}
//	}
//	printf("%d\n%d\n", max, min);
//	return 0;
//}

