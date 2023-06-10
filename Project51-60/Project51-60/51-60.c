#define _CRT_SECURE_NO_WARNINGS

////学习使用按位与 &
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	a = 077;
//	b = a & 3;
//	printf("a&b(decimal)为%d\n", b);
//	b &= 7;
//	printf("a&b(decimal)为%d\n", b);
//	return 0;
//}

////学习使用按位或 |
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	a = 077;
//	b = a | 3;
//	printf("b的值为%d\n", b);
//	b |= 7;
//	printf("b的值为%d\n", b);
//	return 0;
//}


////学习使用按位异或^
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	a = 077;
//	b = a ^ 3;
//	printf("b的值为%d\n", b);
//	b ^= 7;
//	printf("b的值为%d\n", b);
//	return 0;
//}


////取一个整数 a 从右端开始的 4～7 位
//#include<stdio.h>
//int main()
//{
//	unsigned a, b, c, d;
//	printf("请输入整数:\n");
//	scanf("%o", &a);
//	b = a >> 4;
//	c = ~(~0 << 4);
//	d = b & c;
//	printf("%o\n%o\n", a, d);
//	return 0;
//}

//学习使用按位取反~
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	a = 234;
//	b = ~a;
//	printf("a的按位取反值为(十进制)%d\n", b);
//	a = ~a;
//	printf("a的按位取反值为（十六进制）%d\n", a);
//	return 0;
//}


////画图，学用circle画圆形
//#include<graphics.h>   //VC6.0中是不能运行的，要在Turbo2.0/3.0中 
//int main()             //所以没法试运行
//{
//	int driver, mode, i;
//	float j = 1, k = 1;
//	driver = VGA;
//	mode = VGAHI;
//	initgraph(&driver, &mode, "");
//	setbkcolor(YELLOW);
//	for (i = 0; i <= 25; i++)
//	{
//		setcolor(8);
//		circle(310, 250, k);
//		k = k + j;
//		j = j + 0.3;
//	}
//	return 0;
//}


////画图，学用line画直线（在TC中实现） 无法试运行
//#include"graphics.h"
//int main()
//{
//	int driver, mode, i;
//	float x0, y0, y1, x1;
//	float j = 12, k;
//	driver = VGA; mode = VGAHI;
//	initgraph(&driver, &mode, "");
//	setbkcolor(GREEN);
//	x0 = 263; y0 = 263; y1 = 275; x1 = 275;
//	for (i = 0; i <= 18; i++)
//	{
//		setcolor(5);
//		line(x0, y0, x1, y1);
//		x0 = x0 - 5;
//		y0 = y0 - 5;
//		x1 = x1 + 5;
//		y1 = y1 + 5;
//		j = j + 10;
//	}
//	return 0;
//}



////学用rectangle画方形。（在TC中实现）。  无法试运行
//#include"graphics.h"
//int main()
//{
//	int x0, y0, y1, x1, driver, mode, i;
//	driver = VGA; mode = VGAHI;
//	initgraph(&driver, &mode, "");
//	setbkcolor(YELLOW);
//	x0 = 263; y0 = 263; y1 = 275; x1 = 275;
//	for (i = 0; i <= 18; i++)
//	{
//		setcolor(1);
//		rectangle(x0, y0, x1, y1);
//		x0 = x0 - 5;
//		y0 = y0 - 5;
//		x1 = x1 + 5;
//		y1 = y1 + 5;
//	}
//	settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
//	outtextxy(150, 40, "How beautiful it is!");
//	line(130, 60, 480, 60);
//	setcolor(2);
//	circle(269, 269, 137);
//	return 0;
//}




////画图，综合例子。（在TC中实现） 无法试运行
//#define PAI 3.1415926
//#define B 0.809
//#include "graphics.h"
//#include "math.h"
//int main()
//{
//	int i, j, k, x0, y0, x, y, driver, mode;
//	float a;
//	driver = CGA; mode = CGAC0;
//	initgraph(&driver, &mode, "");
//	setcolor(3);
//	setbkcolor(GREEN);
//	x0 = 150; y0 = 100;
//	circle(x0, y0, 10);
//	circle(x0, y0, 20);
//	circle(x0, y0, 50);
//	for (i = 0; i < 16; i++)
//	{
//		a = (2 * PAI / 16) * i;
//		x = ceil(x0 + 48 * cos(a));
//		y = ceil(y0 + 48 * sin(a) * B);
//		setcolor(2); line(x0, y0, x, y);
//	}
//	setolor(3); circle(x0, y0, 60);
//	/*Make 0 time normal size letters*/
//	settextstyle(DEFAULT_FONT, HORIZ_DIR, 0);
//	outtextxy(10, 170, "press a key");
//	getch();
//	setfillstyle(HATCH_FILL, YELLOW);
//	floodfill(202, 100, WHITE);
//	getch();
//	for (k = 0; k <= 500; k++)
//	{
//		setcolor(3);
//		for (i = 0; i <= 16; i++)
//		{
//			a = (2 * PAI / 16) * i + (2 * PAI / 180) * k;
//			x = ceil(x0 + 48 * cos(a));
//			y = ceil(y0 + 48 + sin(a) * B);
//			setcolor(2); line(x0, y0, x, y);
//		}
//		for (j = 1; j <= 50; j++)
//		{
//			a = (2 * PAI / 16) * i + (2 * PAI / 180) * k - 1;
//			x = ceil(x0 + 48 * cos(a));
//			y = ceil(y0 + 48 * sin(a) * B);
//			line(x0, y0, x, y);
//		}
//	}
//	restorectmode();
//}



////画图，综合例子2。（在TC中实现） 无法试运行
//#include"graphics.h"
//#define LEFT 0
//#define TOP 0
//#define RIGHT 639
//#define BOTTOM 479
//#define LINES 400
//#define MAXCOLOR 15
//int main()
//{
//	int driver, mode, error;
//	int x1, y1;
//	int x2, y2;
//	int dx1, dy1, dx2, dy2, i = 1;
//	int count = 0;
//	int color = 0;
//	driver = VGA;
//	mode = VGAHI;
//	initgraph(&driver, &mode, "");
//	x1 = x2 = y1 = y2 = 10;
//	dx1 = dy1 = 2;
//	dx2 = dy2 = 3;
//	while (!kbhit())
//	{
//		line(x1, y1, x2, y2);
//		x1 += dx1; y1 += dy1;
//		x2 += dx2; y2 += dy2;
//		if (x1 <= LEFT || x1 >= RIGHT)
//		{
//			dx1 = -dx1;
//		}
//		if (x1 <= TOP || y1 >= BOTTOM)
//			dy1 = -dy1;
//		if (x2 <= TOP || y2 >= RIGHT)
//			dx2 = -dx2;
//		if (y2 <= TOP || y2 >= BOTTOM)
//			dy2 = -dy2;
//		if (++count > LINES)
//		{
//			setcolor(color);
//			color = (color >= MAXCOLOR) ? 0 : ++color;
//		}
//
//	}
//	closegraph();
//}