#define _CRT_SECURE_NO_WARNINGS

//����1
//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("δ����\n");
//	}
//	return 0;
//}

//����2
//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("δ����\n");
//	}
//	else 
//	{
//		printf("����\n");
//	}
//	return 0;
//}

//����3
//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("����\n");
//	}
//	else if (age >= 18 && age < 30)
//	{
//		printf("����\n");
//	}
//	else if (age >= 30 && age < 50)
//	{
//		printf("����\n");
//	}
//	else if (age >= 50 && age < 80)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("������\n");
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
//	return 0;          //else������������ifƥ�䣬ִ�е�һ��if��ֱ��return 0��
//}

////�����ϳ���
////�ʵ���ʹ��{}����ʹ������߼��������
////���������Ҫ
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
////else��ƥ��:else�Ǻ�����������ifƥ��ġ�

////��ϰ��:1.�ж�һ�����Ƿ�Ϊ����
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("���������һ������\n");
//	}
//	else
//	{
//		printf("�������һ������\n");
//	}
//		
//	return 0;
//}

////��ϰ��:2.���1-100֮�������
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
//		printf("������\n");
//	}
//	else if (pay > 3000 && pay <= 5000)
//	{
//		printf("Ҳ����\n");
//	}
//	else if (pay > 5000 && pay <= 8000)
//	{
//		printf("���\n");
//	}
//	else if (pay > 8000 && pay < 12000)
//	{
//		printf("ͦ�õ�\n");
//	}
//	else
//	{
//		printf("������\n");
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
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
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
//		switch (n)    //switch����Ƕ��ʹ��
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
//	//if (1)    //ifִ��ֻ���һ��hahaha
//	while(1)   //if����while��һֱѭ�����hahaha
//		printf("hahaha\n");
//	return 0;
//}


//����Ļ�ϴ�ӡ����1-10
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

////break��while����еĽ���
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
//break��whileѭ���е����ã�
//��ѭ����ֻ������break, ��ֹͣ���ڵ�����ѭ����ֱ����ֹѭ����
//����: while�е�break������������ֹѭ����


////continue��while����еĽ���
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
//	return 0;              //��ѭ��
//}          


//#include<stdio.h>
//int main()
//{
//	int ch = 0;                        
//	while ((ch = getchar()) != EOF)   //EOF=END OF FILE  
//		putchar(ch);      //ֱ������EOF������Ȼ��������ѭ����ΪEOF��E O Fһ��һ����ӡ
//	return 0;             //����CTRL+Z��������ѭ��   
//}
////��������ʵ��޸��ǿ�����������������

//#include<stdio.h>
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;             //����0-9�ַ�֮���ִ��continue����while�ж�
//		putchar(ch);
//	}
//	return 0;
//}
////��������������:ֻ��ӡ�����ַ������������ַ���


//#include<stdio.h>
//int main()
//{
//	int book = 0;
//	scanf("%d", &book);
//	switch (book)
//	{
//	case 1:
//		printf("���μ�\n");
//		break;
//	case 2:
//		printf("��¥��\n");
//		break;
//	case 3:
//		printf("ˮ䰴�\n");
//		break;
//	case 4:
//		printf("��������\n");
//		break;
//	default:
//		printf("error\n");
//		break;
//	}
//	return 0;
//}

////��while���1-100���ڵ�ż��
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

//��for���1-100���ڵ�����
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
//	printf("����������:>");
//	scanf("%s", password);
//	getchar();                //getchar�����Ե�\n
//	printf("��ȷ������(Y/N):>");
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
//    //for (i = 0; i <= 9; i++)        //����д�������ͬ����<10����<=9Ҫ��
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




////��1��+2��+...n!
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;      //�������г�ʼ��1��+2��+3������15���������н������ȷ
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


////���ַ�
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
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//		if (left > right)
//			printf("�Ҳ���\n");
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
//	//int right=sizeof(arr1)/sizeof(arr1[0])-2;   //̫�鷳��
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);   //����֮������������ʾ
//		system("cls");   //����֮��������ʧ�����������
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
//	char password[20] = { 0 };    //��ʼ��
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		//if (password == "123456")   //==���������Ƚ������ַ����Ƿ���ȣ�Ӧ����Ӧ�ÿ⺯�� strcmp
//		if(strcmp(password,"123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��������������˳�����\n");
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
//	//shutdown -s -t 60   ��cmd��command�������60�����Թػ�
//	//shutdown -a      //ȡ���ػ�
//	//system()      //ִ��ϵͳ�����
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����һ�����ڹػ�,�������:������,��ȡ���ػ�\n������>:");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)    //strcmp�����Ƚ������ַ����õĺ���
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
	//shutdown -s -t 60   ��cmd��command�������60�����Թػ�
	//shutdown -a      //ȡ���ػ�
	//system()      //ִ��ϵͳ�����
	system("shutdown -s -t 60");
    while(1)
	{
		printf("��ע�⣬��ĵ�����һ�����ڹػ�,�������:������,��ȡ���ػ�\n������>:");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)    //strcmp�����Ƚ������ַ����õĺ���
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}