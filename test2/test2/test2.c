#define _CRT_SECURE_NO_WARNINGS

//代码1
//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	return 0;
//}

//代码2
//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	else 
//	{
//		printf("成年\n");
//	}
//	return 0;
//}

//代码3
//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("少年\n");
//	}
//	else if (age >= 18 && age < 30)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 30 && age < 50)
//	{
//		printf("中年\n");
//	}
//	else if (age >= 50 && age < 80)
//	{
//		printf("老年\n");
//	}
//	else
//	{
//		printf("老寿星\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;          //else和他离的最近的if匹配，执行第一个if后直接return 0；
//}

////改正上程序
////适当的使用{}可以使代码的逻辑更加清楚
////代码风格很重要
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
////else的匹配:else是和它离的最近的if匹配的。

////练习题:1.判断一个数是否为奇数
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("这个数不是一个奇数\n");
//	}
//	else
//	{
//		printf("这个数是一个奇数\n");
//	}
//		
//	return 0;
//}

////练习题:2.输出1-100之间的奇数
//#include<stdio.h>
//int main()
//{
//	int a;
//	for(a=1;a<=100;a++)
//	{
//		if ((a % 2) != 0)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int pay = 0;
//	scanf("%d", &pay);
//	if(pay<=3000)
//	{
//		printf("不够花\n");
//	}
//	else if (pay > 3000 && pay <= 5000)
//	{
//		printf("也不够\n");
//	}
//	else if (pay > 5000 && pay <= 8000)
//	{
//		printf("差不多\n");
//	}
//	else if (pay > 8000 && pay < 12000)
//	{
//		printf("挺好的\n");
//	}
//	else
//	{
//		printf("可以了\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:             
//		switch (n)    //switch允许嵌套使用
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//if (1)    //if执行只输出一次hahaha
//	while(1)   //if换成while则一直循环输出hahaha
//		printf("hahaha\n");
//	return 0;
//}


//在屏幕上打印数字1-10
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while(10 >= i)
//	{
//		printf("%d", i);
//		i += 1;
//	}
//	return 0;
//}

////break在while语句中的介绍
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (10 >= i)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//		i += 1;
//	}
//		return 0;
//}
//break在while循环中的作用：
//在循环中只有遇到break, 就停止后期的所有循环，直接终止循环。
//所以: while中的break是用于永久终止循环的


////continue在while语句中的介绍
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (10 >= i)
//	{
//		i += 1;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		//i += 1;
//	}
//	return 0;              //死循环
//}          


//#include<stdio.h>
//int main()
//{
//	int ch = 0;                        
//	while ((ch = getchar()) != EOF)   //EOF=END OF FILE  
//		putchar(ch);      //直接输入EOF程序依然不能跳出循环因为EOF是E O F一个一个打印
//	return 0;             //输入CTRL+Z可以跳出循环   
//}
////上面代码适当修改是可以用来清理缓存区的

//#include<stdio.h>
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;             //不在0-9字符之间会执行continue跳回while判断
//		putchar(ch);
//	}
//	return 0;
//}
////这个代码的作用是:只打印数字字符，跳过其他字符的


//#include<stdio.h>
//int main()
//{
//	int book = 0;
//	scanf("%d", &book);
//	switch (book)
//	{
//	case 1:
//		printf("西游记\n");
//		break;
//	case 2:
//		printf("红楼梦\n");
//		break;
//	case 3:
//		printf("水浒传\n");
//		break;
//	case 4:
//		printf("三国演义\n");
//		break;
//	default:
//		printf("error\n");
//		break;
//	}
//	return 0;
//}

////用while输出1-100以内的偶数
//#include<stdio.h>
//int main()
//{
//	int  a = 1;
//	while (100 >= a)
//	{
//		
//		if ((a % 2) == 0)	
//		{
//			printf("%d ", a);
//		}
//       a++;	
//	}
//	return 0;
//}

//用for输出1-100以内的奇数
//#include<stdio.h>
//int main()
//{
//	int a;
//	for(a=1;a<=100;a++)
//	{
//		if ((a % 2) != 0)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	getchar();                //getchar用来吃掉\n
//	printf("请确认密码(Y/N):>");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//    //for (i = 0; i <= 9; i++)        //两种写法结果相同但用<10比用<=9要好
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




////求1！+2！+...n!
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;      //不加这行初始化1！+2！+3！等于15，加了这行结果才正确
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


////二分法
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//		if (left > right)
//			printf("找不到\n");
//
//	}
//}


//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	//char arr[] = "abc";
//	//[a b c \0]
//	 //0 1 2 3
//     //4-2
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right=sizeof(arr1)/sizeof(arr1[0])-2;   //太麻烦了
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);   //加了之后逐行慢慢显示
//		system("cls");   //加了之后逐行消失到产生最后结果
//		left++;
//		right--;
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };    //初始化
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		//if (password == "123456")   //==不能用来比较两个字符串是否相等，应该用应该库函数 strcmp
//		if(strcmp(password,"123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出程序\n");
//	}
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	
//	again:
//	printf("helli bit\n");
//	goto again;
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60   在cmd的command里输入会60秒后电脑关机
//	//shutdown -a      //取消关机
//	//system()      //执行系统命令的
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在一分钟内关机,如果输入:我是猪,就取消关机\n请输入>:");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)    //strcmp用来比较两个字符串用的函数
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}



#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60   在cmd的command里输入会60秒后电脑关机
	//shutdown -a      //取消关机
	//system()      //执行系统命令的
	system("shutdown -s -t 60");
    while(1)
	{
		printf("请注意，你的电脑在一分钟内关机,如果输入:我是猪,就取消关机\n请输入>:");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)    //strcmp用来比较两个字符串用的函数
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}