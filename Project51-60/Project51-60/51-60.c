#define _CRT_SECURE_NO_WARNINGS

////ѧϰʹ�ð�λ�� &
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	a = 077;
//	b = a & 3;
//	printf("a&b(decimal)Ϊ%d\n", b);
//	b &= 7;
//	printf("a&b(decimal)Ϊ%d\n", b);
//	return 0;
//}

////ѧϰʹ�ð�λ�� |
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	a = 077;
//	b = a | 3;
//	printf("b��ֵΪ%d\n", b);
//	b |= 7;
//	printf("b��ֵΪ%d\n", b);
//	return 0;
//}


////ѧϰʹ�ð�λ���^
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	a = 077;
//	b = a ^ 3;
//	printf("b��ֵΪ%d\n", b);
//	b ^= 7;
//	printf("b��ֵΪ%d\n", b);
//	return 0;
//}


////ȡһ������ a ���Ҷ˿�ʼ�� 4��7 λ
//#include<stdio.h>
//int main()
//{
//	unsigned a, b, c, d;
//	printf("����������:\n");
//	scanf("%o", &a);
//	b = a >> 4;
//	c = ~(~0 << 4);
//	d = b & c;
//	printf("%o\n%o\n", a, d);
//	return 0;
//}

//ѧϰʹ�ð�λȡ��~
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	a = 234;
//	b = ~a;
//	printf("a�İ�λȡ��ֵΪ(ʮ����)%d\n", b);
//	a = ~a;
//	printf("a�İ�λȡ��ֵΪ��ʮ�����ƣ�%d\n", a);
//	return 0;
//}


////��ͼ��ѧ��circle��Բ��
//#include<graphics.h>   //VC6.0���ǲ������еģ�Ҫ��Turbo2.0/3.0�� 
//int main()             //����û��������
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


////��ͼ��ѧ��line��ֱ�ߣ���TC��ʵ�֣� �޷�������
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



////ѧ��rectangle�����Ρ�����TC��ʵ�֣���  �޷�������
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




////��ͼ���ۺ����ӡ�����TC��ʵ�֣� �޷�������
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



////��ͼ���ۺ�����2������TC��ʵ�֣� �޷�������
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