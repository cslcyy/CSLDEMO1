#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double firstNumber, secondNumber, temporaryVariable;

	printf("输入第一个数字:");
	scanf("%lf", &firstNumber);

	printf("输入第二个数字:");
	scanf("%lf", &secondNumber);

	//将第一个数的值赋值给 temporaryVadible
	temporaryVariable = firstNumber;

	//将第二个数的值赋值给 firstNumber
	firstNumber = secondNumber;

	//将temporaryVariable 赋值给 secondNumber
	secondNumber = temporaryVariable;

	printf("\n交换后,firstNumber=%.21f\n", firstNumber);
	printf("交换后,secondNumber=%.21f", secondNumber);
	return 0;
}