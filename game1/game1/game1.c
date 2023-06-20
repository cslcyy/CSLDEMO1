#define _CRT_SECURE_NO_WARNINGS

//制作一个可移动的飞机
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int x = 15;
	int y = 5;
	int i, n;
	int bill = 0;
	char move;
	int a = 10;       //障碍物的横坐标
	int live = 1;     //障碍物存活状态

	while (1)    //意思是死循环
	{
		system("cls");              //清屏函数

		if (live == 1)
		{
			for (i = 0; i < a; i++)
				printf(" ");        //输出障碍物左侧空格
			printf("*");
		}
		if (bill == 0)
		{
			for (i = 0; i < y; i++)
				printf("\n");
	    }
		else
		{
			for (i = 0; i < y; i++)
			{
				for (n = 0; n < (x + 2); n++)         //x+2的原因是飞机头左侧空格有x+2个
					printf(" ");                      //这个+2是为了和身体对称而手动输出的
				printf("|\n");
			}
			if (x + 2 == a)                //意思是，如果射线横坐标+2等于障碍物坐标，那么障碍物被赋值为0，也就消失了
				live = 0;                  //+2是因为要配合机身对准机头
		}
		bill = 0;

		for (n = 0; n < x; n++)
			printf(" ");           //输出飞机左侧的空格 
		printf("  *\n");           //输出飞机头部      
		
		for (n = 0; n < x; n++)     
			printf(" ");         //输出飞机身体部分左侧的空格
		printf("*---*\n");      //因为飞机头部输出后有回车，所以飞机身体已经在下一行           

		for (n = 0; n < x; n++)
			printf(" ");       //输出飞机尾巴部分左侧的空格
		printf(" +-+ \n");

		move =_getch();
		if (move == 'a')      //注意是==不是=
			x--;              //就是x-1的意，实现飞机左移
		if (move == 'd')
			x++;
		if (move == 'w')
			y--;
		if (move == 's')
			y++;
		if (move == ' ')
			bill = 1;
	}
	return 0;
}
