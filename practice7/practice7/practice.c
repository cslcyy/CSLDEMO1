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



//a = 3, b = 5;��ʹ�õ�������������a��b��ֵ
//ʹ�õ��������ķ���
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
////��ʹ�õ��������ķ���(�÷���a��b�ر���ʱ�����ײ����������)
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a + b;   //a���a+b,b����b
//	b = a - b;   //b���a+b-b=a
//	a = a - b;   //b�����a����a+b-a=b
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
//		printf("��ѡ������\n");
//	}
//	else
//	{
//		printf("������ѡ������\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("��ӭ�������뱦������\n");
//	printf("��ѡ����ĳ�ʼ���뱦��\n");
//	int i = 0;
//	scanf("%d", &i);
//	switch(i)
//	{
//	case 1:
//		printf("������뱦�����ǹ���\n");
//		break;
//	case 2:
//		printf("������뱦���ǼӲ���\n");
//		break;
//	case 3:
//		printf("������뱦���Ǽ׳���\n");
//		break;
//	case 4:
//		printf("������뱦���ǰ�³��\n");
//		break;
//	case 5:
//		printf("������뱦���Ǳ�����\n");
//		break;
//	case 6:
//		printf("������뱦���Ǹ�����\n");
//		break;
//	case 7:
//		printf("������뱦���ǰʹ���\n");
//		break;
//	case 8:
//		printf("������뱦����С����\n");
//		break;
//	}
//	printf("��ѡ��������뱦������\n");
//	int j = 0;
//	scanf("%d", &j);
//	switch (j)
//	{
//	case 1:
//		printf("��Ķ�����С���\n");
//		break;
//	case 2:
//		printf("��Ķ����ǻ�еа����\n");
//		break;
//	case 3:
//		printf("��Ķ�����ľż��\n");
//		break;
//	case 4:
//		printf("��Ķ����Ǹ���������\n");
//		break;
//	}
//	for (i = 1; i <= 8; i++)
//	{
//		if (i == 1 || i == 2)
//		{
//			printf("�㽫����սʤ����\n");
//			break;
//		}
//		else
//		{
//			printf("�㽫�����ֻ���\n");
//			break;
//		}
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	printf("��ѡ���Ƿ�ʼ��Ϸ\n1.������Ϸ 0.�˳���Ϸ\n");
	int i = 0;
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		printf("������Ϸ\n");
		break;
	case 2:
		printf("�˳���Ϸ\n");
		break;
	}
	printf("��ѡ����Ҫ�����ʱ��\n1.�ƽ�����\n2.�ַ���׿\n3.Ⱥ�۸��\n4.���֮ս\n5.���㶦��\n");
	int j = 0;
	scanf("%d", &j);
	switch (j)
	{
	case 1:
		printf("�ƽ�����\n");
		break;
	case 2:
		printf("�ַ���׿\n");
		break;
	case 3:
		printf("Ⱥ�۸��\n");
		break;
	case 4:
		printf("���֮ս\n");
		break;
	case 5:
		printf("���㶦��\n");
		break;
	}
	if (j == 1)
	{
		printf("��ѡ�����:>\n1.�Ž�\n2.���\n3.����\n4.����\n5.��׿\n");
		int k = 0;
		scanf("%d", &k);
		switch (k)
		{
		case 1:
			printf("�Ž�,�佫14\n");
			break;
		case 2:
			printf("���,�佫7\n");
			break;
		case 3:
			printf("����,�佫4\n");
			break;
		case 4:
			printf("����,�佫18\n");
			break;
		case 5:
			printf("��׿,�佫9\n");
			break;
		}
	}
	else if (j == 2)
	{
		printf("��ѡ�����:>\n1.��׿\n2.���\n3.�ܲ�\n4.����\n5.�����\n6.Ԭ��\n");
		int k = 0;
		scanf("%d", &k);
		switch (k)
		{
		case 1:
			printf("��׿,�佫18\n");
			break;
		case 2:
			printf("���,�佫9\n");
			break;
		case 3:
			printf("�ܲ�,�佫8\n");
			break;
		case 4:
			printf("����,�佫4\n");
			break;
		case 5:
			printf("�����,�佫3\n");
			break;
		case 6:
			printf("Ԭ��,�佫12\n");
			break;
		}
	}
	else if(j==3)
	{
		printf("��ѡ�����:>\n1.����\n2.��Ȩ\n3.�ܲ�\n4.����\n5.�����\n6.Ԭ��\n");
		int k = 0;
		scanf("%d", &k);
		switch (k)
		{
		case 1:
			printf("����,�佫4\n");
			break;
		case 2:
			printf("��Ȩ,�佫26\n");
			break;
		case 3:
			printf("�ܲ�,�佫44\n");
			break;
		case 4:
			printf("����,�佫10\n");
			break;
		case 5:
			printf("�����,�佫3\n");
			break;
		case 6:
			printf("Ԭ��,�佫8\n");
			break;
		}
	}
	else if (j == 4)
	{
		printf("��ѡ�����:>\n1.����\n2.��Ȩ\n3.�ܲ�\n4.����\n5.�����\n");
		int k = 0;
		scanf("%d", &k);
		switch (k)
		{
		case 1:
			printf("����,�佫4\n");
			break;
		case 2:
			printf("��Ȩ,�佫26\n");
			break;
		case 3:
			printf("�ܲ�,�佫44\n");
			break;
		case 4:
			printf("����,�佫17\n");
			break;
		case 5:
			printf("�����,�佫3\n");
			break;
		}
	}
	else
	{
		printf("��ѡ�����:>\n1.���Ｊ\n2.��Ȩ\n3.�ܲ�\n4.����\n");
		int k = 0;
		scanf("%d", &k);
		switch (k)
		{
		case 1:
			printf("���Ｊ,�佫2\n");
			break;
		case 2:
			printf("��Ȩ,�佫26\n");
			break;
		case 3:
			printf("�ܲ�,�佫38\n");
			break;
		case 4:
			printf("����,�佫48\n");
			break;
		}
	}
	printf("��ѡ����Ҫִ�еĲ���:>\n1.ʹ����Ʒ\n2.�佫����\n3.����\n4.�н���²\n5.����\n6.�佫����\n7.��������\n8.�����˵�\n");
	{
		int t = 0;
		for(t=0;t<=8;t++)
		{
			scanf("%d", &t);
			if (t == 1)
			{
				printf("ʹ����Ʒ\n");
			}
			if (t == 2)
			{
				printf("�佫����\n");
			}
			if (t == 3)
			{
				printf("����\n");
			}
			if (t == 4)
			{
				printf("�н���²\n");
			}
			if (t == 5)
			{
				printf("����\n");
			}
			if (t == 6)
			{
				printf("�佫����\n");
			}
			if (t == 7)
			{
				printf("��������\n");
				break;
			}
			if (t == 8)
			{
				printf("�����˵�\n");
				break;
			}
		}
	}
	return 0;
}