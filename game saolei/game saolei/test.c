#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu()
{
	printf("*****************************************\n");
	printf("*********  1.play      0.exit   *********\n");
	printf("*****************************************\n");
}

void game()
{
	//�������ڴ���׺���ʾ�׵�����
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//�����ʼ��
	BoardInit(mine, ROWS, COLS, '0');
	BoardInit(show, ROWS, COLS, '*');
	//����
	SetMine(mine, ROW, COL);
	system("cls");  //����˵�����������
	//��ӡ����
	//BoardPrint(mine, ROW, COL);   //�����Լ����Թ۲죬�ڷ���ʱע�͵�
	BoardPrint(show, ROW, COL);
	//����
	FindMine(mine, show, ROW, COL);
}

int main()
{
	//���������������
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();//�˵�
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("�������,����������!\n");
			break;
		}
	} while (input);
	return 0;
}