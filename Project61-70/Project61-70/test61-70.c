#define _CRT_SECURE_NO_WARNINGS

////打印出杨辉三角形（要求打印出10行）
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	int a[10][10];
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		a[i][0] = 1;
//		a[i][i] = 1;
//	}
//	for(i=2;i<10;i++)
//		for (j = 1; j < i; j++)
//		{
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//			for (i = 0; i < 10; i++)
//			{
//
//				for (j = 0; j<=i; j++)
//				{
//					printf("%5d", a[i][j]);
//				}
//				printf("\n");
//			}					
//	return 0;
//}


////学习putpixel画点，（在TC中实现） 无法试运行
//#include"stdio.h"
//#include"graphics.h"
//int main()
//{
//	int i, j, driver = VGA, mode = VGAHI;
//	initgraph(&driver, &mode, "");
//	setbkcolor(YELLOW);
//	for (i = 50; i < 230; i + 20)
//		for (j = 50; j < 230; j++)
//			putpixel(i, j, 1);
//	for (j = 50; j <= 230; j += 20)
//		for (i = 50; i <= 230; i++)
//			putpixel(i, j, 1);
//}


////画椭圆ellipse（在TC中实现） 无法试运行
//#include"stdio.h"
//#include"graphics.h"
//#include"conio.h"
//int main()
//{
//	int x = 360.y = 160, driver = VGA, mode = VGAHI;
//	int num = 20, i;
//	int top, bottom;
//	initgraph(&driver, &mode, "")
//		top = y - 30;
//	bottom = y - 30;
//	for (i = 0; i < num; i++)
//	{
//		ellipse(250, 250, 0, 360, top, bottom);
//		top -= 5;
//		bottom += 5;
//	}
//	getch();
//}


////利用ellipse and rectangle 画图（在TC中实现) 无法试运行
//#include"stdio.h"
//#include"graphics.h"
//#include"conio.h"
//int main()
//{
//	int driver = VGA, mode = VGAHI;
//	int i, num = 15, top = 50;
//	int left = 20, right = 50;
//	initgraph(&driver, &mode, "");
//	for (i = 0; i < num; i++)
//	{
//		ellipse(250, 250, 0, 360, right, left);
//		ellipse(250, 250, 0, 360, 20, top);
//		rectangle(20 - 2 * i, 20 - 2 * i, 10 * (i + 2), 10 * (i + 2));
//		right += 5;
//		left += 5;
//		top += 10;
//	}
//	getch();
//}

////一个最优美的图案（在TC中实现）无法试运行
//#include"graphics.h"
//#include"math.h"
//#include"dos.h"
//#include"conio.h"
//#include"stdlib.h"
//#include"stdio.h"
//#include"stdarg.h"
//#define MAXPTS 15
//#define PI 3.1415926
//struct PTS
//{
//	int x, y;
//};
//double AspectRatio = 0.85;
//void LineToDemo(void)
//{
//	struct viewporttype vp;
//	struct PTS points{MAXPTS};
//	int i, j, h, w, xcenter, ycenter;
//	int radius, angle, step;
//	double rads;
//	printf("MoveTo / LineTo Demonstration");
//	getviewsettings(&vp);
//	h = vp.bottom - vp.top;
//	w = vp.right - vp.left;
//	xcenter = w / 2;
//	ycenter = h / 2;
//	radius = (h - 30) / (AspectRatio * 2);
//	step = 360 / MAXPTS;
//	angle = 0;
//	for (i = 0; i < MAXPTS; ++i)
//	{
//		rads = (double)angle * PI / 180.0;
//		points[i].x = xcenter + (int)(cos(rads) * radius);
//		points[i].y = ycenter - (int)(sin(rads) * radius * AspectRatio);
//		angle += step;
//	}
//	circle(xcenter, ycenter, radius);
//	for (i = 0; i < MAXPTS; ++i)
//	{
//		for(j=i;j<MAXPTS;++j)
//		{
//			moveto(points[i].x, points[i].y);
//			lineto(points[j].x, point[j].y);
//		}	
//	}
//}
//int main()
//{
//	int driver, mode;
//	driver = CGA; mode = CGAC0;
//	initgraph(&driver, &mode, "");
//	setcolor(3);
//	setbkcolor(GREEN);
//	LineToDemo();
//}


////输入3个数a, b, c，按大小顺序输出
////利用指针方法
//#include<stdio.h>
//void swap(int*, int*);
//int main(void)
//{
//	int a, b, c;
//	int* p1, * p2, * p3;
//	printf("请输入a,b,c:\n");
//	scanf("%d %d %d", &a, &b, &c);
//	p1 = &a;
//	p2 = &b;
//	p3 = &c;
//	if (a > b)
//		swap(p1, p2);
//	if (a > c)
//		swap(p1, p3);
//	if (b > c)
//		swap(p2, p3);
//	printf("%d %d %d\n", a, b, c);
//}
//void swap(int* s1, int* s2)
//{
//	int t;
//	t = *s1; *s1 = *s2; *s2 = t;
//}


////输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组
//#include<stdio.h>
//#include<stdlib.h>
//void fun(int* s, int n)
//{
//	int i;
//	int max = s[0];
//	int a = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (s[i] > max)
//		{
//			max = s[i];
//			a = i;
//		}
//	}
//	s[a] = s[0];
//	s[0] = max;
//	int j;
//	int min = s[n - 1];
//	int b = n - 1;
//	for (j = 0; j < n; j++)
//	{
//		if (s[j] < min)
//		{
//			min = s[j];
//			b = j;
//		}
//	}
//	s[b] = s[n - 1];
//	s[n - 1] = min;
//}
//void my_printf_s(int* s, int n)    //换个名字保证和库函数不冲突!!!
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", s[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int s[20];
//	int i, n;
//	printf("设置数组长度(<20):");
//	scanf("%d", &n);
//	printf("输入 %d 个元素:\n", n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &s[i]);
//	fun(s, n);
//	my_printf_s(s, n);
//	return 0;
//}

////有 n个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数
//#include<stdio.h>
//#include<stdlib.h>
////打印数组
//void print_arr(int array[], int n)
//{
//	int i;
//	for (i = 0; i < n; ++i)
//	{
//		printf("%4d", array[i]);
//	}
//	printf("\n");
//}
////滚动数组
//void move(int array[], int n, int offset)
//{
//	int* p, * arr_end;
//	arr_end = array + n;    //数组最后一个元素的下一个位置
//	int last;
//
//	//滚动直到偏移量为0
//	while (offset)
//	{
//		last = *(arr_end - 1);
//		for (p = arr_end - 1;p!=array; --p)  //向右滚动一位
//			*p = *(p - 1);
//		*array = last;
//		--offset;
//	}
//}
//int main()
//{
//	int arr[20];
//	int i, n, offset;  //输入数组大小和数组内容
//	printf("Total number?\n");
//	scanf("%d", &n);           
//	printf("Input %d numbers.\n", n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);        //输入滚动偏移量
//	}
//	printf("Set your offset.\n");
//	scanf("%d", &offset);
//	printf("Offset is %d.\n", offset);   //打印滚动前数组
//	print_arr(arr, n);                //滚动数组并打印
//	move(arr, n, offset);
//	print_arr(arr, n);
//}


////有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数）
////凡报到3的人退出圈子，问最后留下的是原来第几号的那位
//#include<stdio.h>
//void main()
//{
//	int num[50], n, * p, j, loop, i, m, k;
//	printf("请输入这一圈人的数量\n");
//	scanf("%d", &n);
//	p = num;
//	for (j = 0; j < n; j++)
//	{
//		*(p + j) = j + 1;
//	}
//	i = 0;
//	m = 0;
//	k = 0;
//	while (m < n - 1)
//	{
//		if (*(p + i) != 0)
//		{
//			k++;
//		}
//		if (k == 3)
//		{
//			k = 0;
//			*(p + i) = 0;
//			m++;
//		}
//		i++;
//		if (i == n)
//		{
//			i = 0;
//		}
//	}
//	printf("现在剩下的人是:");
//	for (loop = 0; loop < n; loop++)
//	{
//		if (num[loop] != 0)
//		{
//			printf("%2d号\n", num[loop]);
//		}
//	}
//	return 0;
//}


////写一个函数，求一个字符串的长度，在 main 函数中输入字符串，并输出其长度
//#include<stdio.h>
//#include<stdlib.h>
////求字符串长度 
//int length(char* s)
//{
//	int i = 0;
//	while (*s != '\0')
//	{
//		i++;
//		s++;
//	}
//	return i;
//}
//int main()
//{
//	int len;
//	char str[20];
//	printf("请输入字符串:\n");
//	scanf("%s", str);
//	len = length(str);
//	printf("字符串有%d个字符", len);
//}
