#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double firstNumber, secondNumber, temporaryVariable;

	printf("�����һ������:");
	scanf("%lf", &firstNumber);

	printf("����ڶ�������:");
	scanf("%lf", &secondNumber);

	//����һ������ֵ��ֵ�� temporaryVadible
	temporaryVariable = firstNumber;

	//���ڶ�������ֵ��ֵ�� firstNumber
	firstNumber = secondNumber;

	//��temporaryVariable ��ֵ�� secondNumber
	secondNumber = temporaryVariable;

	printf("\n������,firstNumber=%.21f\n", firstNumber);
	printf("������,secondNumber=%.21f", secondNumber);
	return 0;
}