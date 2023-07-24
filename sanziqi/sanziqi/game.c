#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>  ֱ�Ӷ���game.h��������

#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//����д��������̲���3*3�ͻ����̴�ӡ������
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//1.��ӡһ�е�����
//		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//		//2.��ӡ�ָ���
//		if(i<row-1)
//		{
//			printf("---|---|---\n");
//		}
//	}
//}
// 
//����д��������̲���3*3Ҳ����������ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{

		int j = 0;
		for (j = 0; j < col; j++)
		{
			//1.��ӡһ�е�����
			printf(" %c ", board[i][j]);
			if(j<col-1)
			{
				printf("|");
			}
		}
		printf("\n");
		//2.��ӡ�ָ���
		if(i<row-1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("��һغ�:>\n");
	while(1)
	{
		printf("������Ҫ�µ�����:>");
		scanf("%d%d", &x, &y);
		//�ж�x,y����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�������Ѿ���ռ��\n");
			}
		}
		else
		{
			printf("����Ƿ�,����������\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("���Իغ�:>\n");
	while(1)
	{
		x = rand() % row;  //%row�������������ô��ֻ����0��1��2
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//����1��ʾ��������
//����0��ʾ����û��
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;   //����û��
			}
		}
	}
	return 1;    //��������
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//�жϺ�����
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];    //������ȷ����ĸ�������
		}
	}
	//�ж�������
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�ж������Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//�ж��Ƿ�ƽ��
	if (IsFull(board, ROW, COL)==1)
	{
		return 'Q';
	}
	return 'C';
}