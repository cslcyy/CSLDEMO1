#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float h, s;
	h = s = 100;
	h = h / 2;  //第一次反弹高度
	for (int i = 2; i <= 10; i++)
	{
		s = s + 2 * h;
		h = h / 2;
	}
	printf("第10次落地时，共经过%f米，第10次反弹高%f米\n", s, h);
	return 0;
}
