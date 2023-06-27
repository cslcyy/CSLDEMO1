#define _CRT_SECURE_NO_WARNINGS


//猜数字游戏 //1.电脑会生成一个随机数 //2.猜数字
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("***************************\n");
	printf("***   1.play  0.exit    ***\n");
	printf("***************************\n");
}
//RAND_MAX    0-32767
void game()
{
	//1.生成一个随机数
	int ret = 0;
	int guess = 0;    //接收猜的数字
	//srand(2);  //括号里需要随机数
	//时间戳
	//当前计算机的时间-计算机的起始时间（1970.1.1.0.0.0）=（xxxx)秒   这个xxxx就是时间戳的值
	//用时间戳来设置随机数的生成起点
	//time_t time(time_t*timer)
	//srand((unsigned int)time(NULL));    //该函数调用一次就可以了，所以直接放到主函数那里
	//ret = rand();    //生成随机数
	ret = rand() % 100 + 1;			//上面那行生成随机数（0-32767）太大游戏不好玩,这样改就是生成1-100之间的随机数了
	//printf("%d\n", ret);   //因为要猜数字所以不用打印出来
	

	//2.猜数字
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if(guess>ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();      //猜数字游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);   //这样可以想玩就能一直重复地玩
	return 0;
}