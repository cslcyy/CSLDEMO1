#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
struct Book
{
    char name[20];  //C���Գ������
    short price;    //55
};
int main()
{
    //���ýṹ�����ʹ���һ������
    struct Book b1 = { "C���Գ������",55 };
    //�����������鶨�壬���鱾������һ����ַ����һ������������ֱ�Ӹ�ֵ�޸�
    strcpy(b1.name, "C++");//strcpy-string copy-�ַ�������-�⺯��-string.h
    printf("%s\n", b1.name);

    //struct Book* pb = &b1;
    //����pb��ӡ���ҵ������ͼ۸�
    //.������  �ṹ�����.��Ա
    //->������ �ṹ��ָ��->��Ա
   //printf("%s\n", pb->name);
    //printf("%d\n", pb->price);
    //printf("%s\n", (*pb).name);
    //printf("%d\n", (*pb).price);
    //printf("����:%s\n", b1.name);
    //printf("�۸�:%dԪ\n", b1.price);
    //b1.price = 15;
    //printf("���ۺ�ļ۸�:%d\n", b1.price);
    return 0;
}
//int main()
//{
//    double d = 3.14;
//    double* pd = &d;
//    *pd = 5.5;
//    printf("d=%lf\n", d);
//    printf("d=%lf\n", *pd);
//    printf("%zd\n", sizeof(pd));//32λ��4��64λ��8
//    printf("%zd\n", sizeof(char*));
//    printf("%zd\n", sizeof(short*));
//    printf("%zd\n", sizeof(int*));
//
//    //int a = 10;  //������4���ֽڵĿռ�
//    //printf("%p\n", &a);
//    //int* p = &a;  //p��һ������-ָ�����
//    //printf("%p\n", p);
//    //*p = 20;     //*  �����ò�����/��ӷ��ʲ�����
//    //printf("a=%d\n", a);
//    return 0;
//}

#include<stdio.h>
//int main()
//{
//    int a = 10;
//    int * p = &a;    //���ָ��(��ַ)�ı�������ָ�������p����ָ�����
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
////��Ŀ������  ������Ϊ�����a�������b��


//int main()
//{
//    int a = 3;
//    int b = 5;
//    int c = 0;
//    //c = a && b;  //&&��||Ϊ�߼�����߼���ֻ�����Ƿ�Ϊ�棬0Ϊ�٣���0��Ϊ��
//    //c = a || b;  //ע��&&��||�߼����&��|��λ�������ע������
//    printf("c=%d", c);
//    return 0;
//}

//int main()
//{
//    int a = 5;
//    int b = 0;
//    //b = ++a;   //ǰ�õ�++��--����a++֮���ٸ�ֵ��b�����Ϊb=6,a=6
//    //b = --a;
//    //b = a++;   //���õ�++��--���Ȱ�a��ֵ����b,�ٽ�a����++��--�����Ϊ5��4
//    //b = a--;
//    printf("b=%d,a=%d", b,a);
//    return 0;
//}

//int main()
//{
//    //int a = -9;
//    //int a = 5;
//    a = ~a;
//    //a = !a;  //�߼���������0�Ǽ٣���0��Ϊ�棬5����ȡ�������Ϊ0
//    
//    //a = ~a;    //��һ�����Ķ����ư�λȡ����
//    //�Ƚ�5д��32λ2������Ȼ��ȡ�����ȵ�����λλ1�ĸ����������Բ������ʽ�洢
//    //���Ǽ�������Ϊԭ�룬ԭ��ȡ�����ڷ��룬�����һ���ڲ���
//    //����������ת��ԭ����Ǽ�һ����ȡ���õ�ԭ�룬�������-6
//    //�����Ļ���������ԭ�루����λ���䣩,�ٰ�λȡ��(����λ��)
//
//    printf("a=%d", a);
//    return 0;
//}

//int main()
//{
//    int a = 10;
//    //��ֵ������
//    //a += 5;    //a+=5��ͬ��a=a+5,���涼��һ��ԭ��
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
//    //c = a / b;    //a����bȡ��  1
//    //c = a % b;    //a����bȡ��  3
//    //c = a >> 1;     //����һλ
//    //c = a << 1;    //����һλ
//    //c = a & b;  //��λ��
//    //c = a ^ b;  //��λ���(����Ϊ1����ͬΪ0)
//    //c = a | b;  //��λ��
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
//�����ÿ��Ԫ�ض���һ���±꣬�±��Ǵ�0��ʼ�ģ��������ͨ���±������ʵġ�


//int main()
//{
//    printf("�������\n");
//    int line = 0;
//    while (line <= 10)
//    {
//        line++;
//        printf("%d", line);
//        printf("��Ҫ����Ŭ���ô���\n");
//               
//    }
//    if (line > 10)
//        printf("��offer\n");
//    return 0;
//}


//int main()
//{
//    int coding = 0;
//    printf("���ȥ�ô�����?(ѡ��1or0):>");
//    scanf("%d", &coding);
//    if (coding == 1)
//    {
//        printf("��֣�����к�offer\n");
//    }
//    else
//    {
//        printf("�������ؼ�������\n");
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
//����Add������ɼӷ�������Add�����û��Լ�����Ľ����Զ��庯��
//printf,scanf���Դ��Ľ����⺯��
//C���Է���ע��/*xxxxx*/    ȱ��Ϊ����Ƕ��ע��
//C++����ע��//xxxxxx       ����ע��һ��Ҳ����ע�Ͷ���(����)



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
//        //\62��������һ��ת���ַ�
//        printf("%zd\n,%s\n", strlen("c:\test\628\test.c"),"\62");
//    return 0;
//}


//int main()
//{
//    printf("c:\codeaa\\test.c\n");
//    return 0;
//}
//ת���ַ�\t�Ʊ����һ���Ʊ��8���ո񣬸���ǰ���ַ����Ȳ��ո�
//\tǰ���ټ�һ��\�����������\t


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
//�ַ����Ľ�����־��һ��\0��ת���ַ����ڼ����ַ������ȵ�ʱ��\0�ǽ�����־���������ַ�������


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
//��%d����ʾ���������޸�Ϊ%zd,�������������


//int global = 2019;//ȫ�ֱ���
//int main()
//{
//    int local = 2018;//�ֲ�����
//    //���涨���global�᲻�������⣿
//    int global = 2020;//�ֲ�����
//    printf("global=%d\n", global);
//    return 0;
//}
//�ܽ�:����ľֲ�����global�����Ķ�����ʵû��ʲô����ģ�
//     ���ֲ�������ȫ�ֱ���ͬ����ʱ�򣬾ֲ���������ʹ�á�

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
    //printf("������һ������\n");
   // scanf("%d", &a);
   // if (a % 2 == 1)
       // printf("������������\n");
    //else
       // printf("�����ֲ�������\n");
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
    //scanf("%hd%hd", &age1, &age2);   //short��%hd��int��%d,long��%ld
    //sum = age1 + age2;
   // printf("sum=%hd", sum);
    //return 0;
//}
