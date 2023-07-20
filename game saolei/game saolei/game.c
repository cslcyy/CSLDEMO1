#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

//�����ʼ��
void BoardInit(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;   //set��ʾҪ��ʶ�����ַ�
		}
	}
}

//����
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = MINE_COUNT;
	while (count)
	{
		int x = rand() % row + 1;     //��������׵�����
		int y = rand() % col + 1;
		if (board[x][y] == '0')      //����λ���Ƿ��Ѿ�����
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//��ӡ����
void BoardPrint(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------ɨ����Ϸ------\n");
	for (i = 0; i <= row; i++)     //��ӡ�к�
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d", i);          //��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c", board[i][j]);
		}
		printf("\n");
	}
	printf("------ɨ����Ϸ------\n");
}

//����׵�λ��
void MarkMine(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("����������Ҫ���λ�õ�����->");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)    //�жϸ������Ƿ�Ϸ�
		{
			if (board[x][y] == '*')             //�жϸ������Ƿ��Ų�
			{
				board[x][y] = '!';
				break;
			}
			else
			{
				printf("��λ�ò��ܱ����,����������!\n");
			}
		}
		else
		{
			printf("�������,����������!\n");
		}
	}
}

//��ȡ������Χ�׵ĸ���
int GetMineCount(char board[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (board[i][j] == '1')
			{
				count++;
			}
		}
	}
	return count;
}


//�ݹ鱬ըʽչ��һƬ
void ExplosionSpread(char mine[ROWS][COLS], char show[ROW][COLS], int row, int col,int x,int y,int *pw)
{
	if (x >= 1 && x < row && y >= 1 && y <= col)  //�ж������Ƿ�Ϊ�Ų鷶Χ��
	{
		int num = GetMineCount(mine, x, y);    //��ȡ������Χ�׵ĸ���
		if (num == 0)
		{
			(*pw)++;
			show[x][y] = ' ';  //�����������Χû���ף��ͰѸ������óɿո񣬲�����Χ�˸�����չ��
			int i = 0;
			int j = 0;
			for (i = x - 1; i <= x + 1; i++)
			{
				for (j = y - 1; j <= y + 1; j++)
				{
					if (show[i][j] == '*')   //���Ƶݹ���������ֹ�Ѿ��Ų���������ٴεݹ飬�Ӷ�������ݹ�
						ExplosionSpread(mine, show, row, col, i, j, pw);
				}
			}
		}
		else
		{
			(*pw)++;
			show[x][y] = num + '0';
		}
	}
}

//����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0; //��������Ƿ�ȡ��ʤ��
	int* pw = &win;
	char ch = 0;  //���������Ƿ���Ҫ�����
	while (win < row * col - MINE_COUNT)
	{
		printf("����������Ҫ�ɳ�������->");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)   //�ж�����Ϸ���
		{
			if (mine[x][y] == '1')
			{
				system("cls");
				printf("���ź����㱻ը����!\n");
				BoardPrint(mine, row, col);  //��ը���˾ʹ�ӡmine���飬���û�֪���Լ���ô����
				break;
			}
			else
			{
				if (show[x][y] != '*')   //�ж��Ƿ��ظ��Ų�
				{
					printf("�������ѱ��Ų飬����������!\n");
					continue;//ֱ�ӽ�����һ��ѭ��
				}
				else
				{
					ExplosionSpread(mine, show, row, col, x, y, pw); //��ըչ��һƬ
					system("cls");//�����Ļ
					BoardPrint(show, row, col);//��ӡ����
					printf("��Ҫ����׵�λ��������y/Y,�����밴�����->");
					while ((ch = getchar()) != '\n');//����������
					scanf("%c", &ch);
					if (ch == 'Y' || ch == 'y')
					{
						MarkMine(show, row, col);//�����
						system("cls");
						BoardPrint(show, row, col);
					}
					else
					{
						continue;
					}
				}
			}
		}
		else
		{
			printf("�����������������!\n");
		}
	}
	if (win == row * col - MINE_COUNT)
	{
		system("cls");
		printf("��ϲ�㣬���׳ɹ�!\n");
		BoardPrint(show, row, col);
		return;
	}
}