#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char c;
	int isLowercaseVowel, isUppercaseVowel;

	printf("������һ����ĸ:");
	scanf("%c", &c);

	//Сд��ĸԪ��
	isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o'|| c == 'u');
	//��д��ĸԪ��
	isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
	//if����ж�
	if (isLowercaseVowel || isUppercaseVowel)
		printf("%c ��Ԫ��", c);
	else
		printf("%c �Ǹ���", c);
	return 0;
}