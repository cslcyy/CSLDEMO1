#define _CRT_SECURE_NO_WARNINGS


//��������Ϸ //1.���Ի�����һ������� //2.������
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("***************************\n");
	printf("***   1.play  0.exit    ***\n");
	printf("***************************\n");
}
//RAND_MAX    0-32767
void game()
{
	//1.����һ�������
	int ret = 0;
	int guess = 0;    //���ղµ�����
	//srand(2);  //��������Ҫ�����
	//ʱ���
	//��ǰ�������ʱ��-���������ʼʱ�䣨1970.1.1.0.0.0��=��xxxx)��   ���xxxx����ʱ�����ֵ
	//��ʱ�����������������������
	//time_t time(time_t*timer)
	//srand((unsigned int)time(NULL));    //�ú�������һ�ξͿ����ˣ�����ֱ�ӷŵ�����������
	//ret = rand();    //���������
	ret = rand() % 100 + 1;			//�������������������0-32767��̫����Ϸ������,�����ľ�������1-100֮����������
	//printf("%d\n", ret);   //��ΪҪ���������Բ��ô�ӡ����
	

	//2.������
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if(guess>ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();      //��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);   //���������������һֱ�ظ�����
	return 0;
}