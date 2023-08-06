#define _CRT_SECURE_NO_WARNINGS

//操作符详解

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	a = 5 / 2;
//	b = 5 % 2;    //%操作符两边都必须是整数
//	double c = 5 / 2.0;  // 操作符/两边有浮点数就能得到浮点数
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	printf("c=%lf\n", c);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 16;
//	int b = a >> 1;
//	int c = a << 1;
//	//右移操作符(一般为算数右移,可打印负数试验编辑器用的哪种)
//	//1.算术右移:右边丢弃，左边补原符号位
//	//2.逻辑右移：右边丢弃，左边补零
//	int d = -1;
//	int i = d >> 1;
//	printf("%d\n%d\n", b, c);
//	printf("%d\n", i);
//	return 0;
//}


////编码实现:求一个整数存储在内存中的二进制中的1的个数
//#include<stdio.h>
////这个算法不能用于负数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//统计num的二进制补码中有几个1(存储在内存中是补码形式）
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}


////编码实现:求一个整数存储在内存中的二进制中的1的个数
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = 0;
//	//32bit
//	// num&1==1   (按位与1,是1说明该位是1，否则该位为0)
//	//00000000000000000000000000000011
//	//00000000000000000000000000000001
//	//00000000000000000000000000000001
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if(1==((num>>i)&1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


////编码实现:求一个整数存储在内存中的二进制中的1的个数
//#include<stdio.h>
//int main()
//{
//	int num = -1;
//	scanf("%d", &num);
//	int i = 0;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//    //00000000000000000000000000000011
//	//00000000000000000000000000000010
//	//00000000000000000000000000000001
//	//00000000000000000000000000000000
//	}
//	printf("二进制中1的个数是%d\n", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	if (a)
//	{
//		printf("哈哈\n");
//	}
//	if (!a)
//	{
//		printf("呵呵\n");
//	}
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;    //指针  32位sizeof就是4，64位就是8
//	int arr[10] = { 0 };
//	//sizeof 计算变量所占空间的大小，单位是字节
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(char*));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[10]));
//	printf("%d\n", sizeof(int[5]));
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%zd\n", sizeof(s = a + 5));//a+5算完存到s里还是按照s的存储空间来
//	printf("%d\n", s);    //sizeof里的表达式不会参与后续计算的
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	//~按(2进制)位取反
//	//00000000000000000000000000000000   正数原码反码补码一样   负数 原码符号位不变按位取反得到反码，反码加1得到补码
//	//11111111111111111111111111111111   按位取反后的结果 补码 补码需要变成原码输出
//	//11111111111111111111111111111110   补码-1 反码
//	//10000000000000000000000000000001   反码符号位不变，其他位取反得到原码
//	printf("%d\n", ~a);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}



//#include<stdio.h>
//void test1(int arr[])
//{
//	printf("%zd\n", sizeof(arr));  //传过去的是首元素地址，地址用指针接收，sizeof的结果是4/8(32位还是64位）
//}
//void test2(char ch[])
//{
//	printf("%zd\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%zd\n", sizeof(arr));
//	printf("%zd\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}



//#include<stdio.h>
////学生
////struct stu和 int,float,double等一样是一种类型，是用来创建变量的
////创建一个结构体类型-struct stu
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	//使用struct stu这个类型创建了一个学生对象s1,并初始化
//	struct stu s1 = { "张三",20,"20230909" };
//	struct stu* ps = &s1;
//	//结构体指针->成员名
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//	//*ps就等于拿到了s1，但是下面这个写法不够简洁
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);
//	//.操作符
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	//结构体变量.成员名
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011   a里截断一个字节存放
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111   b里截断一个字节存放
//	
//	//a和b相加
//	//整形提升是按照变量的数据类型的符号位来提升的
//	//00000000000000000000000000000011   a整形提升后
//	//00000000000000000000000001111111   b整形提升后
//	//00000000000000000000000010000010
//	//10000010  c里截断存放的数字（补码）
//	//进行原反补转换
//	//10000001
//	//11111110  原码 输出
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}


//非法表达式程序的结果:不同编译器测试下面程序运行结果不同
#include<stdio.h>
int main()
{
	int i = 10;
	i = i-- - --i * (i = -3) * i++ + ++i;
	printf("i=%d\n", i);
	return 0;
}