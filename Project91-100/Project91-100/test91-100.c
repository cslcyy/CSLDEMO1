#define _CRT_SECURE_NO_WARNINGS

////时间函数举例1
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t rawtime;
//	struct tm* timeinfo;
//	time(&rawtime);
//	timeinfo = localtime(&rawtime);
//	printf("当前本地时间为:%s", asctime(timeinfo));
//	return 0;
//}

////时间函数举例2
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t start, end;
//	int i;
//	start = time(NULL);
//	for (i = 0; i < 300000; i++)
//	{
//		printf("\n");   // 返回两个time_t型变量之间的时间间隔
//	}
//	end = time(NULL);    // 输出执行时间
//	printf("时间间隔为%6.3f\n", difftime(end, start));
//}


////时间函数举例3
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	long i = 10000000L;
//	clock_t start, finish;
//	double TheTimes;
//	printf("做%ld次空循环需要的时间为", i);
//	start = clock();
//	while (i--);
//	finish = clock();
//	TheTimes = (double)(finish - start) / CLOCKS_PER_SEC;
//	printf("%f秒。\n", TheTimes);
//	return 0;
//}


////猜谜游戏
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void caizi(void)
//{
//	int n;
//	char begin;
//	int count = 1;
//	srand((int)time(NULL));
//	int m = (rand() % 100) + 1;
//	puts("游戏开始,请输入数字");
//	while (1)
//	{
//		scanf("%d", &n);
//		if (n == m)
//		{
//			printf("猜中了,使用了%d次!\n", count);
//			if (count == 1)
//			{
//				printf("你是神级人物了!膜拜\n");
//				getchar();
//				printf("你已经达到最高级别,还需要玩吗?Y/N\n");
//				scanf("%c", &begin);
//				if (begin == 'Y' || begin == 'y')       //重复玩的一个嵌套循环
//				{
//					caizi();
//				}
//				else
//				{
//					printf("谢谢,再见!\n");
//				}
//			}
//			else if (count < 5)
//			{
//				printf("你是王级人物了!非常赞\n");
//				getchar();
//				printf("需要挑战最高级别不?Y/N\n");
//				scanf("%c", &begin);
//				if (begin == 'Y' || begin == 'y')
//				{
//					caizi();
//				}
//				else
//				{
//					printf("谢谢,再见!\n");
//				}
//			}
//			else if(count <= 10)
//			{
//				printf("你是大师级人物了!狂赞\n");
//				getchar();
//				printf("需要挑战最高级别不?Y/N\n");
//				scanf("%c", &begin);
//				if (begin == 'Y' || begin == 'y')
//				{
//					caizi();
//				}
//				else
//				{
//					printf("谢谢,再见!\n");
//				}
//			}
//			else if (count <= 15)
//			{
//				printf("你是钻石级人物了!怒赞\n");
//				getchar();
//				printf("需要挑战最高级别不?Y/N\n");
//				scanf("%c", &begin);
//				if (begin == 'Y' || begin == 'y')
//				{
//					caizi();
//				}
//				else
//				{
//					printf("谢谢，再见!\n");
//				}
//			}
//			else
//			{
//				getchar();
//				printf("你的技术还有待提高哦!重玩? Y/N\n");
//				scanf("%c", &begin);
//				if (begin == 'Y' || begin == 'y')
//				{
//					caizi();
//				}
//				else
//				{
//					printf("谢谢,再见!\n");
//				}
//			}
//			break;
//		}
//		else if (n < m)
//		{
//			puts("太小了!");
//			puts("重新输入:");
//		}
//		else
//		{
//			puts("太大了!");
//			puts("重新输入:");
//		}
//		count++;                   //计数器
//	}
//}
//
//int main(void)
//{
//	caizi();
//	system("pause");
//	return 0;
//}


////简单的结构体应用实例
//#include<stdio.h>
//struct programming
//{
//	float constant;
//	char* pointer;
//};
//int main()
//{
//	struct programming variable;
//	char string[] = "菜鸟教程:http://www.runnob.com";
//	variable.constant = 1.23;
//	variable.pointer = string;
//	printf("%f\n", variable.constant);
//	printf("%s\n", variable.pointer);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	int i, j, k, TLen, PLen, count = 0;
//	char T[50], P[10];
//	printf("请输入两个字符串，以回车隔开，，母串在前，字串在后:\n");
//	gets(T);
//	gets(P);
//	TLen = strlen(T);
//	PLen = strlen(P);
//	for (i = 0; i <= TLen - PLen; i++)
//	{
//		for (j = 0, k = i; j < PLen && P[j] == T[k]; j++, k++)
//			;
//		if (j ==PLen)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}



////从键盘输入一些字符，逐个把它们送到磁盘上去，直到输入一个#为止
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	FILE* fp = NULL;
//	char filename[25];
//	char ch;
//	printf("输入你要保存到的文件的名称:\n");
//	gets(filename);
//	if ((fp = fopen(filename, "w")) == NULL)
//	{
//		printf("error:cannot open file!\n");
//		exit(0);
//	}
//	printf("现在你可以输入你要保存的一些字符,以#结束: \n");
//	//getchar();
//	while ((ch = getchar()) != '#')
//	{
//		fputc(ch, fp);
//	}
//	fclose(fp);
//	system("pause");
//	return 0;
//}



////从键盘输入一个字符串，将小写字母全部转换成大写字母，
////然后输出到一个磁盘文件"test"中保存。 输入的字符串以！结束。
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	FILE* fp = NULL;
//	char str[50];
//	int i, len;
//	printf("输入一个字符串:\n");
//	gets(str);
//	len = strlen(str);
//	for (i = 0; i < len; i++)
//	{
//		if (str[i] <= 'z' && str[i] >= 'a')
//			str[i] -= 32;
//	}
//	if ((fp = fopen("test", "w")) == NULL)
//	{
//		printf("error:cannot open file!\n");
//		exit(0);
//	}
//	fprintf(fp, "%s", str);
//	fclose(fp);
//	system("pause");
//	return 0;
//}


////有两个磁盘文件A和B, 各存放一行字母，
////要求把这两个文件中的信息合并（按字母顺序排列），输出到一个新文件C中。
////你需要先创建 A.txt 与 B.txt   
////A.txt文件内容：123    B.txt文件内容：456
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	FILE* fa, * fb, * fc;
//	int i, j, k;
//	char str[100], str1[100];
//	char tem;
//	if ((fa = fopen("A.txt", "r")) == NULL)   //A.txt 文件需要存在
//	{
//		printf("error:cannot open A file!\n");
//		exit(0);
//	}
//	fgets(str, 99, fa);
//	fclose(fa);
//	if ((fb = fopen("B.txt", "r")) == NULL)        // B.txt 文件需要存在
//	{
//		printf("error:cannot open B file!\n");
//		exit(0);
//	}
//	fgets(str1, 100, fb);
//	fclose(fb);
//	strcat(str, str1);
//	for(i=strlen(str)-1;i>1;i--)
//	{
//		for (j = 0; j < 1; j++)
//		{
//			if (str[j] > str[j + 1]);
//			{
//				tem = str[j];
//				str[j] = str[j + 1];
//				str[j + 1] = tem;
//			}
//		}
//	}
//	if ((fc = fopen("C.txt", "w")) == NULL)    // 合并为 C.txt
//	{
//		printf("error:cannot open C file!\n");
//		exit(0);
//	}
//	fputs(str, fc);
//	fclose(fc);
//	system("pause");
//	return 0;
//}



////有五个学生，每个学生有3门课的成绩,从键盘输入以上数据（包括学生号，姓名，三门课成绩），计算出平均成绩，
////将原有的数据和计算出的平均分数存放在磁盘文件"stud"中。
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct
//{
//	int ID;
//	int math;
//	int English;
//	int C;
//	int avargrade;
//	char name[20];
//}Stu;
//int main()
//{
//	FILE* fp;
//	Stu stu[5];
//	int i, avargrade = 0;
//	printf("请输入5个同学的信息:学生号,姓名,3门成绩:\n");
//	for (i = 0; i < 5; i++) 
//	{
//		scanf("%d %s %d %d %d", &(stu[i].ID), stu[i].name, &(stu[i].math), &(stu[i].English), &(stu[i]).C);
//		stu[i].avargrade = (stu[i].math + stu[i].English + stu[i].C) / 3;
//	}
//	if ((fp = fopen("stud", "w")) == NULL)
//	{
//		printf("error:cannot open file!\n");
//		exit(0);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		fprintf(fp, "%d %s %d %d %d %d \n", stu[i].ID, stu[i].name, stu[i].math, stu[i].English, stu[i].C, stu[i].avargrade);
//	}
//		fclose(fp);
//		//system("pause")
//		return 0;
//}