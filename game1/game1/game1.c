#define _CRT_SECURE_NO_WARNINGS

//����һ�����ƶ��ķɻ�
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int x = 15;
	int y = 5;
	int i, n;
	int bill = 0;
	char move;
	int a = 10;       //�ϰ���ĺ�����
	int live = 1;     //�ϰ�����״̬

	while (1)    //��˼����ѭ��
	{
		system("cls");              //��������

		if (live == 1)
		{
			for (i = 0; i < a; i++)
				printf(" ");        //����ϰ������ո�
			printf("*");
		}
		if (bill == 0)
		{
			for (i = 0; i < y; i++)
				printf("\n");
	    }
		else
		{
			for (i = 0; i < y; i++)
			{
				for (n = 0; n < (x + 2); n++)         //x+2��ԭ���Ƿɻ�ͷ���ո���x+2��
					printf(" ");                      //���+2��Ϊ�˺�����Գƶ��ֶ������
				printf("|\n");
			}
			if (x + 2 == a)                //��˼�ǣ�������ߺ�����+2�����ϰ������꣬��ô�ϰ��ﱻ��ֵΪ0��Ҳ����ʧ��
				live = 0;                  //+2����ΪҪ��ϻ����׼��ͷ
		}
		bill = 0;

		for (n = 0; n < x; n++)
			printf(" ");           //����ɻ����Ŀո� 
		printf("  *\n");           //����ɻ�ͷ��      
		
		for (n = 0; n < x; n++)     
			printf(" ");         //����ɻ����岿�����Ŀո�
		printf("*---*\n");      //��Ϊ�ɻ�ͷ��������лس������Էɻ������Ѿ�����һ��           

		for (n = 0; n < x; n++)
			printf(" ");       //����ɻ�β�Ͳ������Ŀո�
		printf(" +-+ \n");

		move =_getch();
		if (move == 'a')      //ע����==����=
			x--;              //����x-1���⣬ʵ�ַɻ�����
		if (move == 'd')
			x++;
		if (move == 'w')
			y--;
		if (move == 's')
			y++;
		if (move == ' ')
			bill = 1;
	}
	return 0;
}
