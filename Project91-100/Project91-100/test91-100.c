#define _CRT_SECURE_NO_WARNINGS

////ʱ�亯������1
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t rawtime;
//	struct tm* timeinfo;
//	time(&rawtime);
//	timeinfo = localtime(&rawtime);
//	printf("��ǰ����ʱ��Ϊ:%s", asctime(timeinfo));
//	return 0;
//}

////ʱ�亯������2
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	time_t start, end;
//	int i;
//	start = time(NULL);
//	for (i = 0; i < 300000; i++)
//	{
//		printf("\n");   // ��������time_t�ͱ���֮���ʱ����
//	}
//	end = time(NULL);    // ���ִ��ʱ��
//	printf("ʱ����Ϊ%6.3f\n", difftime(end, start));
//}


////ʱ�亯������3
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	long i = 10000000L;
//	clock_t start, finish;
//	double TheTimes;
//	printf("��%ld�ο�ѭ����Ҫ��ʱ��Ϊ", i);
//	start = clock();
//	while (i--);
//	finish = clock();
//	TheTimes = (double)(finish - start) / CLOCKS_PER_SEC;
//	printf("%f�롣\n", TheTimes);
//	return 0;
//}


////������Ϸ
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
//	puts("��Ϸ��ʼ,����������");
//	while (1)
//	{
//		scanf("%d", &n);
//		if (n == m)
//		{
//			printf("������,ʹ����%d��!\n", count);
//			if (count == 1)
//			{
//				printf("������������!Ĥ��\n");
//				getchar();
//				printf("���Ѿ��ﵽ��߼���,����Ҫ����?Y/N\n");
//				scanf("%c", &begin);
//				if (begin == 'Y' || begin == 'y')       //�ظ����һ��Ƕ��ѭ��
//				{
//					caizi();
//				}
//				else
//				{
//					printf("лл,�ټ�!\n");
//				}
//			}
//			else if (count < 5)
//			{
//				printf("��������������!�ǳ���\n");
//				getchar();
//				printf("��Ҫ��ս��߼���?Y/N\n");
//				scanf("%c", &begin);
//				if (begin == 'Y' || begin == 'y')
//				{
//					caizi();
//				}
//				else
//				{
//					printf("лл,�ټ�!\n");
//				}
//			}
//			else if(count <= 10)
//			{
//				printf("���Ǵ�ʦ��������!����\n");
//				getchar();
//				printf("��Ҫ��ս��߼���?Y/N\n");
//				scanf("%c", &begin);
//				if (begin == 'Y' || begin == 'y')
//				{
//					caizi();
//				}
//				else
//				{
//					printf("лл,�ټ�!\n");
//				}
//			}
//			else if (count <= 15)
//			{
//				printf("������ʯ��������!ŭ��\n");
//				getchar();
//				printf("��Ҫ��ս��߼���?Y/N\n");
//				scanf("%c", &begin);
//				if (begin == 'Y' || begin == 'y')
//				{
//					caizi();
//				}
//				else
//				{
//					printf("лл���ټ�!\n");
//				}
//			}
//			else
//			{
//				getchar();
//				printf("��ļ������д����Ŷ!����? Y/N\n");
//				scanf("%c", &begin);
//				if (begin == 'Y' || begin == 'y')
//				{
//					caizi();
//				}
//				else
//				{
//					printf("лл,�ټ�!\n");
//				}
//			}
//			break;
//		}
//		else if (n < m)
//		{
//			puts("̫С��!");
//			puts("��������:");
//		}
//		else
//		{
//			puts("̫����!");
//			puts("��������:");
//		}
//		count++;                   //������
//	}
//}
//
//int main(void)
//{
//	caizi();
//	system("pause");
//	return 0;
//}


////�򵥵Ľṹ��Ӧ��ʵ��
//#include<stdio.h>
//struct programming
//{
//	float constant;
//	char* pointer;
//};
//int main()
//{
//	struct programming variable;
//	char string[] = "����̳�:http://www.runnob.com";
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
//	printf("�����������ַ������Իس���������ĸ����ǰ���ִ��ں�:\n");
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



////�Ӽ�������һЩ�ַ�������������͵�������ȥ��ֱ������һ��#Ϊֹ
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	FILE* fp = NULL;
//	char filename[25];
//	char ch;
//	printf("������Ҫ���浽���ļ�������:\n");
//	gets(filename);
//	if ((fp = fopen(filename, "w")) == NULL)
//	{
//		printf("error:cannot open file!\n");
//		exit(0);
//	}
//	printf("���������������Ҫ�����һЩ�ַ�,��#����: \n");
//	//getchar();
//	while ((ch = getchar()) != '#')
//	{
//		fputc(ch, fp);
//	}
//	fclose(fp);
//	system("pause");
//	return 0;
//}



////�Ӽ�������һ���ַ�������Сд��ĸȫ��ת���ɴ�д��ĸ��
////Ȼ�������һ�������ļ�"test"�б��档 ������ַ����ԣ�������
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	FILE* fp = NULL;
//	char str[50];
//	int i, len;
//	printf("����һ���ַ���:\n");
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


////�����������ļ�A��B, �����һ����ĸ��
////Ҫ����������ļ��е���Ϣ�ϲ�������ĸ˳�����У��������һ�����ļ�C�С�
////����Ҫ�ȴ��� A.txt �� B.txt   
////A.txt�ļ����ݣ�123    B.txt�ļ����ݣ�456
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	FILE* fa, * fb, * fc;
//	int i, j, k;
//	char str[100], str1[100];
//	char tem;
//	if ((fa = fopen("A.txt", "r")) == NULL)   //A.txt �ļ���Ҫ����
//	{
//		printf("error:cannot open A file!\n");
//		exit(0);
//	}
//	fgets(str, 99, fa);
//	fclose(fa);
//	if ((fb = fopen("B.txt", "r")) == NULL)        // B.txt �ļ���Ҫ����
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
//	if ((fc = fopen("C.txt", "w")) == NULL)    // �ϲ�Ϊ C.txt
//	{
//		printf("error:cannot open C file!\n");
//		exit(0);
//	}
//	fputs(str, fc);
//	fclose(fc);
//	system("pause");
//	return 0;
//}



////�����ѧ����ÿ��ѧ����3�ſεĳɼ�,�Ӽ��������������ݣ�����ѧ���ţ����������ſγɼ����������ƽ���ɼ���
////��ԭ�е����ݺͼ������ƽ����������ڴ����ļ�"stud"�С�
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
//	printf("������5��ͬѧ����Ϣ:ѧ����,����,3�ųɼ�:\n");
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