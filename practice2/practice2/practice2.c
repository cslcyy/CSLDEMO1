#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//
//	{
//		if (b >= 20)   break;
//
//		if (b % 3 == 1)
//
//		{
//			b += 3;  continue;
//		}
//
//		b -= 5;
//	}
//	printf("%d", a);
//}


//#include<stdio.h>
//int main()
//{
//	int y = 1, x, * p, a[] = { 2,4,6,8,10 };
//
//	p = &a[1];
//
//	for (x = 0; x < 3; x++)
//
//		y+=*(p + x);
//
//	printf("%d\n", y);
//}



//��������a��b��c���ɼ������룬�������������
//#include<stdio.h>
//int MAX(int x, int y ,int z)
//{
//	if (x < y && y < z)
//		return z;
//	else if (x > y && x > z)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b,&c);
//	int ret=MAX(a, b, c);
//	printf("%d", ret);
//	return 0;
//}



////�Ӽ��������10�������У��ҳ�   ��һ��  �ܱ�7�������������ҵ�����ӡ�������˳�ѭ������δ�ҵ�����ӡ��not  exist����
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		scanf("%d", &a);
//		if (a % 7 == 0)
//		{
//			printf("%d", a);
//			break;
//		}
//	    if (i == 10)
//		{
//			printf("not exist");
//		}	
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int x = 10;
//	int y = 3;
//	int z = 0; 
//	printf("%d\n", z = (x % y, x / y));   //������Ϊ3
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int z = 0;
//	printf("%d\n", z = (2, 3, 5, 78, 111));  //z�ᱻ��ֵ���һ����
//	return 0;
//}




////��a�����ֵ�Ƕ���   "�궨��ֻ�Ǽ򵥵��ַ����滻���������������"
//#include<stdio.h>
//#define SQR(X) X*X            //X*Xû��������������������
//int main()
//{
//	int a = 10;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	int k = 2;
//	int m = 1;
//	a /= SQR(k + m) / SQR(k + m);     //SQR(k+m)/SQR(k+m)������Ϊk+m*k+m/k+m*k+m
//	b = SQR(k + m);
//	c = SQR(k);
//	d = SQR(m);
//	e = 1 / SQR(k + m);
//	printf("a=%d\n%d\n%d\n%d\n%d\n", a,b,c,d,e);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//char* p1= "abcd";
//	//char* p2 = "ABCD";
//	char p1[10] = "abcd";
//	char p2[10] = "ABCD";
//	char str[50] = "xyz";
//	strcpy(str + 2, strcat(p1 + 2, p2 + 1));   //strcarƴ�����ã�strcpy���ƣ�str+2ָ��z�����ǽ�ƴ�Ӻ���滻��z����֮���Ԫ�ء�
//	printf("%s\n", str);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char A[] = { "I am a student" };
//	int len = strlen(A);
//	printf("len=%d", len);
//}




//#include<stdio.h>
//int main()
//{
//	int a[5] = {2,4,6,8,10};
//	int* p;
//	int** k;
//	p = a;
//	k = &p;
//	printf("%d\n", *p);
//	printf("%d\n", *(p+1));
//	printf("%d\n", *(p+2));
//	printf("%d\n", *(p + 3));
//	printf("%d\n", *(p + 4));
//	printf("%d\n", *(p + 5));
//	printf("%d\n", **k);
//	printf("%d\n", **(k++)); 
//	printf("%d\n", **(k+1));    //ִ�в���
//	printf("%d\n", **(k + 2));  //ִ�в���
//	return 0;
//}



//#include<stdio.h>
//int Fac(int n)
//{
//	int i = 0;
//	int s = 1;
//	for (i = 1; i <= n; i++)
//	{
//		s *= i;
//	}
//	return s;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret=Fac(n);
//	printf("���Ľ׳���%d\n", ret);
//	return 0;
//}



//#include<stdio.h>
//int Fac(int x)
//{
//	int i = 0;
//	int s = 1;
//	for (i = 1; i <= x; i++)
//	{
//		s *= i;
//	}
//	return s;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("���Ľ׳���%d\n", ret);
//	return 0;
//}



//int Fac(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//		return x * Fac(x - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("���Ľ׳���%d\n", ret);
//	return 0;
//}



//쳲���������
//1 1 2 3 5 8 13 21.....
//#include<stdio.h>
//int Fib(int x)
//{
//	if (x <= 2)
//		return 1;
//	else
//		return Fib(x - 1) + Fib(x - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}



////쳲���������
////1 1 2 3 5 8 13 21.....
//#include<stdio.h>
//int Fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}




//��ŵ������Դ��ӡ��һ�����ϵĴ�˵��ӡ�Ƚ̵ġ�����֮�����촴������ʱ���� 3 �����ʯ�������е�һ�������ϰ��մ�С�����˳������ 64 ���ƽ�Բ�̡�
//��������һ���������ŵ���ͽ�����е�Բ���ƶ�����һ�������ϣ��ƶ������б����������¹���:
//ÿ��ֻ���ƶ�������˵�һ��Բ�̣�
//ÿ�������ϣ�СԲ����ԶҪλ�ڴ�Բ��֮��

// 1)����ʼ����ֻ�� 1 ��Բ��ʱ�����ǿ��Ժ����׵ؽ����ƶ���Ŀ�����ϣ�

// 2) ����ʼ������ 2 ��Բ��ʱ
// �ƶ������ǣ��Ƚ���ʼ���ϵ� 1 ��Բ���ƶ����������ϣ�Ȼ����ʼ����������Բ���ƶ���Ŀ�����ϣ���󽫸������ϵ�Բ���ƶ���Ŀ�����ϡ�

//3) ����ʼ������ 3 ��Բ��ʱ����ϸ�۲�ᷢ�֣��ƶ����̺� 2 ��Բ�̵�������ƣ�
//�Ƚ���ʼ���ϵ� 2 ��Բ���ƶ����������ϣ�Ȼ����ʼ����������Բ���ƶ���Ŀ�����ϣ���󽫸������ϵ�Բ���ƶ���Ŀ������

//ͨ���������� 3 ��������ƶ�˼·�������ܽ��һ�����ɣ����� n ��Բ�̵ĺ�ŵ�����⣬�ƶ�Բ�̵Ĺ����ǣ�
//1.����ʼ���ϵ� n - 1 ��Բ���ƶ����������ϣ�
//2.����ʼ���������� 1 ��Բ���ƶ���Ŀ�����ϣ�
//3.���������ϵ�����Բ���ƶ���Ŀ�����ϡ�
//�ɴˣ�n ��Բ�̵ĺ�ŵ������ͼ򻯳��� n - 1 ��Բ�̵ĺ�ŵ�����⡣
//����ͬ����˼·��n - 1 ��Բ�̵ĺ�ŵ�����⻹���Լ����򻯣�ֱ����Ϊ�ƶ� 3 ����������Բ�̵ĺ�ŵ�����⡣

//#include<stdio.h>
//void hanoi(int num, char sou, char tar, char aux)
//{
//	//ͳ���ƶ�����
//	static int i = 1;
//	//���Բ����������1������ֱ�ӿ��Դ���ʼ���ƶ���Ŀ����
//	if (num == 1)
//	{
//		printf("��%d��:��%c�ƶ���%c\n", i, sou, tar);
//		i++;
//	}
//	else
//	{
//		//�ݹ����hanoi()����,��num-1��Բ�̴���ʼ���ƶ�����������
//		hanoi(num - 1, sou, aux, tar);
//		//����ʼ����ʣ��һ����Բ���ƶ���Ŀ����
//		printf("��%d��:��%c�ƶ���%c\n", i, sou, tar);
//		i++;
//		//�ݹ����hanoi()����,���������ϵ�num-1Բ���ƶ���Ŀ������
//		hanoi(num - 1, aux, tar, sou);
//	}
//}
//int main()
//{
//	//���ƶ�3��Բ��Ϊ��,��ʼ����Ŀ�������������ֱ���A,B,C��ʾ
//	hanoi(5, 'A', 'B', 'C');
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int n;
//	//(n = 6 * 4, n + 6), n * 2;
//	//(n = 6 * 3, n + 6), n * 2;
//	//(n = 6 * 2, n + 6), n * 2;
//	//(n = 6 * 1, n + 6), n * 2;
//	//(n = 6 * 3, n + 6), //n * 2;
//	//(n = 6 * 4, n + 6), n * 2;
//	
//	printf("n=%d\n", n);     //ֻ������������n�����˸�ֵ
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a[10], * p;
//	p = a;
//	p = a;
//	p = a;
//	p = a;
//	//*p;
//	*(p + 10);
//}


//#include<stdio.h>
//int main()
//{
//	int a = 1010B;
//	int b = 036B;
//	int c = 0Xffa;
//	int d = x2a2;
//}



//ָ����һ�ֱ������ñ����������ĳ�������ĵ�ֵַ��.
//ָ�����������������ָ��ı�������һ��.
//ָ������������������ʶ����ͬ.
//Break���:�ڶ���ѭ���У�ֻ���˳��������һ��ѭ�����.
//�ں�����Ĭ�ϴ洢����˵�����ı���Ӧ�����Զ��洢����
//C������putchar(c) �����Ĺ�����:������c�е��ַ���ʾ����Ļ��



//#include<stdio.h>
//int main()
//{
//	int n;
//	for (n = 3; n <= 10; n++)
//	{
//		if (n % 5 == 0)
//		{
//			break;
//		}
//		printf("%d ", n);
//	}
//	return 0;
//}




////��̼������б��ʽ��s = 1!+ 2!+ 3!+ 4!+ ���� + 10!
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	int t = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		t *= i;
//		sum += t;
//	}
//	printf("%d\n", sum);
//}



////�Ӽ���������a��n��ֵ������sum = a + aa + aaa + aaaa + ����(��n��)�ĺ�
////��a = 2, n = 4, ��sum = 2 + 22 + 222 + 2222
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int n = 1;
//	int count = 1;
//	int sn = 0;
//	int tn = 0;
//	scanf("%d%d", &a, &n);
//	while (count <= n)
//	{
//		tn = tn + a;
//		sn = sn + tn;
//		a = a * 10;
//		++count;
//	}
//	printf("%d", sn);
//	return 0;
//}





////��3X3��������Խ���Ԫ��֮�͡�
//#include<stdio.h>
//int main()
//{
//	int a[3][3] = {0};
//	int i = 0;
//	int j = 0;
//	int s = 0;
//	for(i=0;i<3;i++)
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	for(i=0;i<3;i++)
//		for (j = 0; j < 3; j++)
//		{
//			if (i == j)
//				s = s + a[i][j];
//		}
//	printf("%d", s);
//	return 0;
//}




////�Ӽ���������10��������һά�����У�����10���е����ֵ����Сֵ�����
//#include<stdio.h>
//int main()
//{
//	int a[10] = { 0 };
//	int max = 0;
//	int min = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	max = a[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//	}
//	min = a[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (a[i] < min)
//		{
//			min = a[i];
//		}
//	}
//	printf("%d\n%d\n", max, min);
//	return 0;
//}

