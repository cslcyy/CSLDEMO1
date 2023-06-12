#define _CRT_SECURE_NO_WARNINGS

////编写input()和output()函数输入，输出5个学生的数据记录
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct
//{
//	char name[20];
//	char sex[5];
//	int age;
//}
//Stu;
//void input(Stu* stu);
//void output(Stu* stu);
//int main()
//{
//	Stu stu[5];
//	printf("请输入5个学生的信息:姓名 性别 年龄:\n");
//	input(stu);
//	printf("5个学生的信息如下:\n姓名 性别 年龄\n");
//	output(stu);
//	system("pause");
//	return 0;
//}
//void input(Stu* stu)
//{
//	int i;
//	for (i = 0; i < 5; i++)
//		scanf("%s%s%d", stu[i].name, stu[i].sex, &(stu[i].age));
//}
//void output(Stu* stu)
//{
//	int i;
//	for (i = 0; i < 5; i++)
//		printf("%s %s %d\n", stu[i].name, stu[i].sex, stu[i].age);
//}


////创建一个链表
//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//typedef struct LNode
//{
//	int data;
//	struct LNode* next;
//}LNode,*LinkList;
//LinkList CreateList(int n);
//void print(LinkList h);
//int main()
//{
//	LinkList Head = NULL;
//	int n;
//	scanf("%d", &n);
//	Head = CreateList(n);
//	printf("刚刚建立的各个链表元素的值为:\n");
//	print(Head);
//	printf("\n\n");
//	system("pause");
//	return 0;
//}
//LinkList CreateList(int n)
//{
//	LinkList L, p, q;
//	int i;
//	L = (LNode*)malloc(sizeof(LNode));
//	if (!L)return 0;
//	L->next = NULL;
//	q = L;
//	for (i = 1; i <= n; i++)
//	{
//		p = (LinkList)malloc(sizeof(LNode));
//		printf("请输入第%d个元素的值:", i);
//		scanf("%d", &(p->data));
//		p->next = NULL;
//		q->next = p;
//		q = p;
//	}
//	return L;
//}
//void print(LinkList h)
//{
//	LinkList p = h->next;
//	while (p != NULL)
//	{
//		printf("%d", p->data);
//		p = p->next;
//	}
//}


////反向输出一个链表
//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//typedef struct LNode
//{
//	int data;
//	struct LNode* next;
//}LNode,*LinkList;
//LinkList CreateList(int n);
//void print(LinkList h);
//int main()
//{
//	LinkList Head = NULL;
//	int n;
//	scanf("%d", &n);
//	Head = CreateList(n);
//	printf("刚刚建立的各个链表元素的值为:\n");
//	print(Head);
//	printf("\n\n");
//	system("pause");
//	return 0;
//}
//LinkList CreateList(int n)
//{
//	LinkList L, p, q;
//	int i;
//	L = (LNode*)malloc(sizeof(LNode));
//	if (!L)return 0;
//	L->next = NULL;
//	q = L;
//	for (i = 1; i <= n; i++)
//	{
//		p = (LinkList)malloc(sizeof(LNode));
//		printf("请输入第%d个元素的值:", i);
//		scanf("%d", &(p->data));
//		p->next = NULL;
//		q->next = p;
//		q = p;
//	}
//	return L;
//}
//void print(LinkList h)
//{
//	LinkList p = h->next;
//	while (p != NULL)
//	{
//		printf("%d", p->data);
//		p = p->next;
//	}
//}



////连接两个链表
//#include<stdlib.h>
//#include<stdio.h>
//struct list
//{
//	int data;
//	struct list* next;
//};
//typedef struct list node;
//typedef node* link;
//link delete_node(link pointer, link tmp)
//{
//	if (tmp == NULL)       //delete first node
//		return pointer->next;
//	else 
//	{
//		if (tmp->next->next == NULL)       //delete last node
//		{
//			tmp->next = NULL;
//		}
//		else                           //delete the other node
//		{
//			tmp->next = tmp->next->next;
//		}
//		return pointer;
//	}
//}
//void selection_sort(link pointer, int num)
//{
//	link tmp, btmp;
//	int i, min;
//	for (i = 0; i < num; i++)
//	{
//		tmp = pointer;
//		min = tmp->data;
//		btmp = NULL;
//		while(tmp->next)
//		{
//			if (min > tmp->next->data)
//			{
//				min = tmp->next->data;
//				btmp = tmp;
//			}
//			tmp = tmp->next;
//		}
//		printf("\40:%d\n", min);
//		pointer = delete_node(pointer, btmp);
//	}
//}
//link create_list(int array[], int num)
//{
//	link tmp1, tmp2, pointer;
//	int i;
//	pointer = (link)malloc(sizeof(node));
//	pointer->data = array[0];
//	tmp1 = pointer;
//	for (i = 1; i < num; i++)
//	{
//		tmp2 = (link)malloc(sizeof(node));
//		tmp2->next = NULL;
//		tmp2->data = array[i];
//		tmp1->next = tmp2;
//		tmp1 = tmp1->next;
//	}
//	return pointer;
//}
//link concatenate(link pointer1, link pointer2)
//{
//	link tmp;
//	tmp = pointer1;
//	while (tmp->next)
//		tmp = tmp->next;
//	tmp->next = pointer2;
//	return pointer1;
//}
//int main(void)
//{
//	int arr1[] = { 3,12,8,9,11 };
//	link ptr;
//	ptr = create_list(arr1, 5);
//	selection_sort(ptr, 5);
//}


////输入一个整数，并将其反转后输出。
//#include<stdio.h>
//int main()
//{
//	int n, reversedNumber = 0, remainder;
//	printf("输入一个整数:");
//	scanf("%d", &n);
//	while (n != 0)
//	{
//		remainder = n % 10;
//		reversedNumber = reversedNumber * 10 + remainder;
//		n /= 10;
//	}
//	printf("反转后的整数:%d", reversedNumber);
//	return 0;
//}



////编写一个函数，输入n为偶数时，调用函数求1 / 2 + 1 / 4 + ... + 1 / n, 
////当输入n为奇数时，调用函数1 / 1 + 1 / 3 + ... + 1 / n(利用指针函数)。
//#include<stdio.h>
//#include<stdlib.h>
//double evenumber(int n);
//double oddnumber(int n);
//int main()
//{
//	int n;
//	double r;
//	double(*pfunc)(int);
//	printf("请输入一个数字:");
//	scanf("%d", &n);
//	if (n % 2 == 0)pfunc = evenumber;
//	else pfunc = oddnumber;
//	r = (*pfunc)(n);
//	printf("%lf\n", r);
//	system("pause");
//	return 0;
//}
//double evenumber(int n)
//{
//	double s = 0, a = 0;
//	int i;
//	for (i = 2; i <= n; i += 2)
//	{
//		a = (double)1 / i;
//		s += a;
//	}
//	return s;
//}
//double oddnumber(int n)
//{
//	double s = 0, a = 0;
//	int i;
//	for (i = 1; i <= n; i += 2)
//	{
//		a = (double)1 / i;
//		s += a;
//	}
//	return s;
//}



//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	printf("是否好好学习(1/0)\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("成功\n");
//	}
//	else
//	{
//		printf("失败\n");
//	}
//	return 0;
//}

////填空练习（指向指针的指针)
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	const char* s[] = { "man","woman","girl","boy","sister" };
//	const char** q;
//	int k;
//	for (k = 0; k < 5; k++)
//	{
//		q = &s[k];
//		printf("%s\n", *q);
//	}
//	return 0;
//}


////找到年龄最大的人，并输出
//#include<stdio.h>
//#include<stdlib.h>
//struct man
//{
//	char name[20];
//	int age;
//}person[3] = { "li",18,"wang",25,"sun",22 };
//int main()
//{
//	struct man* q, * p;
//	int i, m = 0;
//	p = person;
//	q = 0;
//	for (i = 0; i < 3; i++)
//	{
//		if (m < p->age)
//		{
//			m = p->age;
//			q = p;
//		}
//		p++;
//	}
//	printf("%s %d\n", q->name, q->age);
//	return 0;
//}

////字符串排序。
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void swap(char* str1, char* str2);
//int main()
//{
//	char str1[20], str2[20], str3[20];
//	printf("请输入3个字符串，每个字符串以回车结束!:\n");
//	fgets(str1, (sizeof str1 / sizeof str1[0]), stdin);
//	fgets(str2, (sizeof str2 / sizeof str2[0]), stdin);
//	fgets(str3, (sizeof str3 / sizeof str3[0]), stdin);
//	if (strcmp(str1, str2) > 0)swap(str1, str2);
//	if (strcmp(str2, str3) > 0)swap(str2, str3);
//	if (strcmp(str1, str3) > 0)swap(str1, str3);
//	printf("排序后的结果为:\n");
//	printf("%s\n%s\n%s\n", str1, str2, str3);
//	return 0;
//}
//void swap(char* str1, char* str2)
//{
//	char tem[20];
//	strcpy(tem, str1);
//	strcpy(str1, str2);
//	strcpy(str2, tem);
//}


////海滩上有一堆桃子，五只猴子来分。第一只猴子把这堆桃子平均分为五份，多了一个，
////这只 猴子把多的一个扔入海中，拿走了一份。第二只猴子把剩下的桃子又平均分成五份，又多了 一个，
////它同样把多的一个扔入海中，拿走了一份，第三、第四、第五只猴子都是这样做的， 问海滩上原来最少有多少个桃子？
//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int x, i = 0, j = 1;
//	while (i < 5)
//	{
//		x = 4 * j;
//		for (i = 0; i < 5; i++)
//		{
//			if (x % 4 != 0)
//			{
//				break;
//			}
//			x = (x / 4) * 5 + 1;
//		}
//		j++;
//	}
//	printf("%d\n", x);
//	return 0;
//}