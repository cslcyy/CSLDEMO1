#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
struct Book
{
    char name[20];  //C语言程序设计
    short price;    //55
};
int main()
{
    //利用结构体类型创建一个变量
    struct Book b1 = { "C语言程序设计",55 };
    //书名是用数组定义，数组本质上是一个地址不是一个变量，不能直接赋值修改
    strcpy(b1.name, "C++");//strcpy-string copy-字符串拷贝-库函数-string.h
    printf("%s\n", b1.name);

    //struct Book* pb = &b1;
    //利用pb打印出我的书名和价格
    //.操作符  结构体变量.成员
    //->操作符 结构体指针->成员
   //printf("%s\n", pb->name);
    //printf("%d\n", pb->price);
    //printf("%s\n", (*pb).name);
    //printf("%d\n", (*pb).price);
    //printf("书名:%s\n", b1.name);
    //printf("价格:%d元\n", b1.price);
    //b1.price = 15;
    //printf("打折后的价格:%d\n", b1.price);
    return 0;
}
//int main()
//{
//    double d = 3.14;
//    double* pd = &d;
//    *pd = 5.5;
//    printf("d=%lf\n", d);
//    printf("d=%lf\n", *pd);
//    printf("%zd\n", sizeof(pd));//32位是4，64位是8
//    printf("%zd\n", sizeof(char*));
//    printf("%zd\n", sizeof(short*));
//    printf("%zd\n", sizeof(int*));
//
//    //int a = 10;  //申请了4个字节的空间
//    //printf("%p\n", &a);
//    //int* p = &a;  //p是一个变量-指针变量
//    //printf("%p\n", p);
//    //*p = 20;     //*  解引用操作符/间接访问操作符
//    //printf("a=%d\n", a);
//    return 0;
//}

#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int * p = &a;    //存放指针(地址)的变量就是指针变量，p就是指针变量
//    *p = 58;
//    int** q = &p;
//    int*** r = &q;
//    printf("%d\n", a);
//    printf("%zd\n", sizeof(long));
//    printf("%p\n", p);
//    printf("%p\n", q);
//    printf("%p\n", r);
//    return 0;
//}


//#define ADD(x,y)((x)+(y))
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = ADD(a, b);
//    printf("%d", c);
//    return 0;
//}

//extern int Add();
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = Add(a, b);
//    printf("%d", c);
//    return 0;
//}

//extern int g_val;
//int main()
//{
//    int a = g_val;
//    printf("%d", a);
//    return 0;
//}

//void test()
//{
//    static int a = 0;
//    //int a = 0;
//    a++;
//    printf("%d", a);
//}
//int main()
//{
//    int i = 1;
//    while (i < 5)
//    {
//        test();
//        i++;
//    }
//    return 0;
//}


//int main()
//{
//    int a = 135;
//    int b = 58;
//    int c = a > b ? a : b;
//        printf("c=%d", c);
//    return 0;
//}
////三目操作符  条件？为真输出a：假输出b；


//int main()
//{
//    int a = 3;
//    int b = 5;
//    int c = 0;
//    //c = a && b;  //&&和||为逻辑与和逻辑或，只关心是否为真，0为假，非0均为真
//    //c = a || b;  //注意&&和||逻辑与或，&和|按位与或，两种注意区分
//    printf("c=%d", c);
//    return 0;
//}

//int main()
//{
//    int a = 5;
//    int b = 0;
//    //b = ++a;   //前置的++和--，让a++之后再赋值给b，输出为b=6,a=6
//    //b = --a;
//    //b = a++;   //后置的++和--，先把a的值赋给b,再将a进行++和--，输出为5，4
//    //b = a--;
//    printf("b=%d,a=%d", b,a);
//    return 0;
//}

//int main()
//{
//    //int a = -9;
//    //int a = 5;
//    a = ~a;
//    //a = !a;  //逻辑反操作，0是假，非0均为真，5是真取反后输出为0
//    
//    //a = ~a;    //对一个数的二进制按位取反，
//    //先将5写成32位2进制数然后取反，等到符号位位1的负数，负数以补码的形式存储
//    //但是计算机输出为原码，原码取反等于反码，反码加一等于补码
//    //反过来补码转成原码就是减一后再取反得到原码，输出等于-6
//    //负数的话则先求其原码（符号位不变）,再按位取反(符号位变)
//
//    printf("a=%d", a);
//    return 0;
//}

//int main()
//{
//    int a = 10;
//    //赋值操作符
//    //a += 5;    //a+=5等同于a=a+5,下面都是一个原理
//    //a -= 5;    //5
//    //a *= 5;    //50
//    //a /= 5;    //2
//    //a &= 5;  //0
//    //a ^= 5;    //15
//    //a |= 5;    //15
//    //a >>= 2;     //2
//    //a <<= 2;      //40
//    printf("a=%d", a);
//    return 0;
//}

//int main()
//{
//    int a = 8;
//    int b = 5;
//    int c = 0;
//    //c = a + b;
//    //c = a - b;
//    //c = a * b;
//    //c = a / b;    //a除以b取整  1
//    //c = a % b;    //a除以b取余  3
//    //c = a >> 1;     //左移一位
//    //c = a << 1;    //右移一位
//    //c = a & b;  //按位与
//    //c = a ^ b;  //按位异或(相异为1，相同为0)
//    //c = a | b;  //按位或
//    printf("%d\n",c);
//        return 0;
//
//}


//int main()
//{
//    int i = 0;
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d", arr[i]);
//    }
//    printf("\n");
//    printf("%d", arr[2]);
//    return 0;
//}
//数组的每个元素都有一个下标，下标是从0开始的，数组可以通过下标来访问的。


//int main()
//{
//    printf("加入比特\n");
//    int line = 0;
//    while (line <= 10)
//    {
//        line++;
//        printf("%d", line);
//        printf("我要继续努力敲代码\n");
//               
//    }
//    if (line > 10)
//        printf("好offer\n");
//    return 0;
//}


//int main()
//{
//    int coding = 0;
//    printf("你会去敲代码吗?(选择1or0):>");
//    scanf("%d", &coding);
//    if (coding == 1)
//    {
//        printf("坚持，你会有好offer\n");
//    }
//    else
//    {
//        printf("放弃，回家卖红薯\n");
//    }
//    return 0;
//}


//int Add(int x, int y)
//{
//    return x + y;
//}
//int main()
//{
//    printf("%d\n", Add(1, 2));
//    return 0;
//}
//调用Add函数完成加法，类似Add这样用户自己定义的叫做自定义函数
//printf,scanf等自带的叫做库函数
//C语言风格的注释/*xxxxx*/    缺陷为不能嵌套注释
//C++风格的注释//xxxxxx       可以注释一行也可以注释多行(常用)



//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    printf("ss\vttuuww");
//    return 0;
//}


//int main()
//{
//    printf("\62\n");
//    printf("\x21\n");
//    return 0;
//}



//int main()
//{
//    printf("%zd\n", strlen("abcdef"));
//        //\62被解析成一个转义字符
//        printf("%zd\n,%s\n", strlen("c:\test\628\test.c"),"\62");
//    return 0;
//}


//int main()
//{
//    printf("c:\codeaa\\test.c\n");
//    return 0;
//}
//转义字符\t制表符，一个制表符8个空格，根据前面字符长度补空格
//\t前面再加一个\即可正常输出\t


//#include<string.h>
//int main()
//{
//    char arr1[] = "bit";
//    char arr2[] = {'a','b','c'};
//    char arr3[] = {'b','i','t','\0'};
//    printf("%s\n", arr1);
//    printf("%s\n", arr2);
//    printf("%s\n", arr3);
//    printf("%zd\n", strlen(arr1));
//    printf("%zd\n", strlen(arr2));
//    printf("%zd\n", strlen(arr3));
//    return 0;
//}
//字符串的结束标志是一个\0的转义字符。在计算字符串长度的时候\0是结束标志，不算作字符串内容


//int main()
//{
//    printf("%zd\n", sizeof(char));
//    printf("%zd\n", sizeof(short));
//    printf("%zd\n", sizeof(int));
//    printf("%zd\n", sizeof(long));
//    printf("%zd\n", sizeof(long long));
//    printf("%zd\n", sizeof(float));
//    printf("%zd\n", sizeof(double));
//    printf("%zd\n", sizeof(long double));
//    return 0;
//}
//用%d会提示报错并建议修改为%zd,改完后正常运行


//int global = 2019;//全局变量
//int main()
//{
//    int local = 2018;//局部变量
//    //下面定义的global会不会有问题？
//    int global = 2020;//局部变量
//    printf("global=%d\n", global);
//    return 0;
//}
//总结:上面的局部变量global变量的定义其实没有什么问题的！
//     当局部变量和全局变量同名的时候，局部变量优先使用。

//#define MAX 3
//{
//    MAX = 6;
//    printf("%d\n", MAX);
//    return 0;
//}

//{
// const int a = 9;
//  a = 19;
//  printf(" % d\n", a);
//  return 0;
//}


//enum Color
//{
//    RED,
//    YELLOW,
//    GREEN
//};
//
//int main()
//{
//    enum Color color = RED;
//    color = YELLOW;
//    printf("%d%d%d%d", RED,YELLOW,GREEN,color);
//    return 0;
//}






//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    if (a <= b)
//        printf("%d", a);
//    else
//        printf("%d", b);
//    return 0;
//}




//{
    // a = 0;
    //printf("请输入一个数字\n");
   // scanf("%d", &a);
   // if (a % 2 == 1)
       // printf("该数字是奇数\n");
    //else
       // printf("该数字不是奇数\n");
    //return 0;

//}
//{
    //int a = 0;
    //int b = 0;
    //int sub = 0;
    //scanf("%d%d", &a, &b);
    //sub = a * b;
       // printf("%d", sub);
//}


 //short age1 = 0;
 //short age2 = 0;
 //short sum = 0;
//int main()

//{
    //short age1 = 0;
    //short age2 = 0;
    //short sum = 0;
    //scanf("%hd%hd", &age1, &age2);   //short用%hd，int用%d,long用%ld
    //sum = age1 + age2;
   // printf("sum=%hd", sum);
    //return 0;
//}
