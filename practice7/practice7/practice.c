#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//#define NOMAL (4.0f/3.0f)*3.14
//
//int main()
//{
//	int r = 0;
//	double v = 1;
//	scanf("%d", &r);
//	v = NOMAL * r * r * r;
//	printf("%d\n", r);    
//	printf("v:%.2f\n", v);
//	double a = NOMAL;
//    printf("%lf\n", a);
//	return 0;
//}



//a = 3, b = 5;不使用第三变量，交换a和b的值
//使用第三变量的方法
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}
////不使用第三变量的方法(该方法a和b特别大的时候容易产生溢出问题)
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a + b;   //a变成a+b,b还是b
//	b = a - b;   //b变成a+b-b=a
//	a = a - b;   //b变成了a，用a+b-a=b
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-2d ", i, j, i * j);
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//void menu()
//{
//	printf("*********************\n");
//	printf("***1.play   0.exit***\n");
//	printf("*********************\n");
//}
//int main()
//{
//	menu();
//	return 0;
//}

//#include<stdio.h>
//void menu()
//{
//	printf("    1.one player    \n");
//	printf("    2.two player    \n");
//}
//int main()
//{
//	menu();
//	int choose = 0;
//	scanf("%d", &choose);
//	if (choose == 1)
//	{
//		printf("请选择人物\n");
//	}
//	else
//	{
//		printf("请依次选择人物\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("欢迎来到数码宝贝世界\n");
//	printf("请选择你的初始数码宝贝\n");
//	int i = 0;
//	scanf("%d", &i);
//	switch(i)
//	{
//	case 1:
//		printf("你的数码宝贝是亚古兽\n");
//		break;
//	case 2:
//		printf("你的数码宝贝是加布兽\n");
//		break;
//	case 3:
//		printf("你的数码宝贝是甲虫兽\n");
//		break;
//	case 4:
//		printf("你的数码宝贝是巴鲁兽\n");
//		break;
//	case 5:
//		printf("你的数码宝贝是比丘兽\n");
//		break;
//	case 6:
//		printf("你的数码宝贝是哥玛兽\n");
//		break;
//	case 7:
//		printf("你的数码宝贝是巴达兽\n");
//		break;
//	case 8:
//		printf("你的数码宝贝是小狗兽\n");
//		break;
//	}
//	printf("请选择你的数码宝贝对手\n");
//	int j = 0;
//	scanf("%d", &j);
//	switch (j)
//	{
//	case 1:
//		printf("你的对手是小丑皇\n");
//		break;
//	case 2:
//		printf("你的对手是机械邪龙兽\n");
//		break;
//	case 3:
//		printf("你的对手是木偶兽\n");
//		break;
//	case 4:
//		printf("你的对手是钢铁海龙兽\n");
//		break;
//	}
//	for (i = 1; i <= 8; i++)
//	{
//		if (i == 1 || i == 2)
//		{
//			printf("你将可以战胜对手\n");
//			break;
//		}
//		else
//		{
//			printf("你将被对手击败\n");
//			break;
//		}
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	printf("请选择是否开始游戏\n1.进入游戏 0.退出游戏\n");
	int i = 0;
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		printf("进入游戏\n");
		break;
	case 2:
		printf("退出游戏\n");
		break;
	}
	printf("请选择你要进入的时期\n1.黄巾起义\n2.讨伐董卓\n3.群雄割据\n4.赤壁之战\n5.三足鼎立\n");
	int j = 0;
	scanf("%d", &j);
	switch (j)
	{
	case 1:
		printf("黄巾起义\n");
		break;
	case 2:
		printf("讨伐董卓\n");
		break;
	case 3:
		printf("群雄割据\n");
		break;
	case 4:
		printf("赤壁之战\n");
		break;
	case 5:
		printf("三足鼎立\n");
		break;
	}
	if (j == 1)
	{
		printf("请选择君主:>\n1.张角\n2.孙坚\n3.刘表\n4.何仪\n5.董卓\n");
		int k = 0;
		scanf("%d", &k);
		switch (k)
		{
		case 1:
			printf("张角,武将14\n");
			break;
		case 2:
			printf("孙坚,武将7\n");
			break;
		case 3:
			printf("刘表,武将4\n");
			break;
		case 4:
			printf("何仪,武将18\n");
			break;
		case 5:
			printf("董卓,武将9\n");
			break;
		}
	}
	else if (j == 2)
	{
		printf("请选择君主:>\n1.董卓\n2.孙坚\n3.曹操\n4.刘备\n5.公孙瓒\n6.袁绍\n");
		int k = 0;
		scanf("%d", &k);
		switch (k)
		{
		case 1:
			printf("董卓,武将18\n");
			break;
		case 2:
			printf("孙坚,武将9\n");
			break;
		case 3:
			printf("曹操,武将8\n");
			break;
		case 4:
			printf("刘备,武将4\n");
			break;
		case 5:
			printf("公孙瓒,武将3\n");
			break;
		case 6:
			printf("袁绍,武将12\n");
			break;
		}
	}
	else if(j==3)
	{
		printf("请选择君主:>\n1.马腾\n2.孙权\n3.曹操\n4.刘备\n5.公孙瓒\n6.袁绍\n");
		int k = 0;
		scanf("%d", &k);
		switch (k)
		{
		case 1:
			printf("马腾,武将4\n");
			break;
		case 2:
			printf("孙权,武将26\n");
			break;
		case 3:
			printf("曹操,武将44\n");
			break;
		case 4:
			printf("刘备,武将10\n");
			break;
		case 5:
			printf("公孙瓒,武将3\n");
			break;
		case 6:
			printf("袁绍,武将8\n");
			break;
		}
	}
	else if (j == 4)
	{
		printf("请选择君主:>\n1.马腾\n2.孙权\n3.曹操\n4.刘备\n5.公孙瓒\n");
		int k = 0;
		scanf("%d", &k);
		switch (k)
		{
		case 1:
			printf("马腾,武将4\n");
			break;
		case 2:
			printf("孙权,武将26\n");
			break;
		case 3:
			printf("曹操,武将44\n");
			break;
		case 4:
			printf("刘备,武将17\n");
			break;
		case 5:
			printf("公孙瓒,武将3\n");
			break;
		}
	}
	else
	{
		printf("请选择君主:>\n1.彻里吉\n2.孙权\n3.曹操\n4.刘备\n");
		int k = 0;
		scanf("%d", &k);
		switch (k)
		{
		case 1:
			printf("彻里吉,武将2\n");
			break;
		case 2:
			printf("孙权,武将26\n");
			break;
		case 3:
			printf("曹操,武将38\n");
			break;
		case 4:
			printf("刘备,武将48\n");
			break;
		}
	}
	printf("请选择你要执行的操作:>\n1.使用物品\n2.武将资料\n3.搜索\n4.招降俘虏\n5.开发\n6.武将升级\n7.内政终了\n8.回主菜单\n");
	{
		int t = 0;
		for(t=0;t<=8;t++)
		{
			scanf("%d", &t);
			if (t == 1)
			{
				printf("使用物品\n");
			}
			if (t == 2)
			{
				printf("武将资料\n");
			}
			if (t == 3)
			{
				printf("搜索\n");
			}
			if (t == 4)
			{
				printf("招降俘虏\n");
			}
			if (t == 5)
			{
				printf("开发\n");
			}
			if (t == 6)
			{
				printf("武将升级\n");
			}
			if (t == 7)
			{
				printf("内政终了\n");
				break;
			}
			if (t == 8)
			{
				printf("回主菜单\n");
				break;
			}
		}
	}
	return 0;
}