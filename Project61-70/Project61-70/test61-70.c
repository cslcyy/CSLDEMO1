#define _CRT_SECURE_NO_WARNINGS

////��ӡ����������Σ�Ҫ���ӡ��10�У�
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


////ѧϰputpixel���㣬����TC��ʵ�֣� �޷�������
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


////����Բellipse����TC��ʵ�֣� �޷�������
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


////����ellipse and rectangle ��ͼ����TC��ʵ��) �޷�������
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

////һ����������ͼ������TC��ʵ�֣��޷�������
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


////����3����a, b, c������С˳�����
////����ָ�뷽��
//#include<stdio.h>
//void swap(int*, int*);
//int main(void)
//{
//	int a, b, c;
//	int* p1, * p2, * p3;
//	printf("������a,b,c:\n");
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


////�������飬�������һ��Ԫ�ؽ�������С�������һ��Ԫ�ؽ������������
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
//void my_printf_s(int* s, int n)    //�������ֱ�֤�Ϳ⺯������ͻ!!!
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
//	printf("�������鳤��(<20):");
//	scanf("%d", &n);
//	printf("���� %d ��Ԫ��:\n", n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &s[i]);
//	fun(s, n);
//	my_printf_s(s, n);
//	return 0;
//}

////�� n��������ʹ��ǰ�����˳������� m ��λ�ã����m���������ǰ��� m ����
//#include<stdio.h>
//#include<stdlib.h>
////��ӡ����
//void print_arr(int array[], int n)
//{
//	int i;
//	for (i = 0; i < n; ++i)
//	{
//		printf("%4d", array[i]);
//	}
//	printf("\n");
//}
////��������
//void move(int array[], int n, int offset)
//{
//	int* p, * arr_end;
//	arr_end = array + n;    //�������һ��Ԫ�ص���һ��λ��
//	int last;
//
//	//����ֱ��ƫ����Ϊ0
//	while (offset)
//	{
//		last = *(arr_end - 1);
//		for (p = arr_end - 1;p!=array; --p)  //���ҹ���һλ
//			*p = *(p - 1);
//		*array = last;
//		--offset;
//	}
//}
//int main()
//{
//	int arr[20];
//	int i, n, offset;  //���������С����������
//	printf("Total number?\n");
//	scanf("%d", &n);           
//	printf("Input %d numbers.\n", n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);        //�������ƫ����
//	}
//	printf("Set your offset.\n");
//	scanf("%d", &offset);
//	printf("Offset is %d.\n", offset);   //��ӡ����ǰ����
//	print_arr(arr, n);                //�������鲢��ӡ
//	move(arr, n, offset);
//	print_arr(arr, n);
//}


////��n����Χ��һȦ��˳���źš��ӵ�һ���˿�ʼ��������1��3������
////������3�����˳�Ȧ�ӣ���������µ���ԭ���ڼ��ŵ���λ
//#include<stdio.h>
//void main()
//{
//	int num[50], n, * p, j, loop, i, m, k;
//	printf("��������һȦ�˵�����\n");
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
//	printf("����ʣ�µ�����:");
//	for (loop = 0; loop < n; loop++)
//	{
//		if (num[loop] != 0)
//		{
//			printf("%2d��\n", num[loop]);
//		}
//	}
//	return 0;
//}


////дһ����������һ���ַ����ĳ��ȣ��� main �����������ַ�����������䳤��
//#include<stdio.h>
//#include<stdlib.h>
////���ַ������� 
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
//	printf("�������ַ���:\n");
//	scanf("%s", str);
//	len = length(str);
//	printf("�ַ�����%d���ַ�", len);
//}
