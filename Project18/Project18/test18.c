#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int s = 0;
	int a, n, t;
	printf("ÇëÊäÈëaºÍn:\n");
	scanf("%d%d", &a, &n);
	t = a;
	while (n > 0)
	{
		s += t;  //s=s+t
		a = a * 10;
		t += a;  //t=t+a
		n--;  
	}
	printf("a+aa+...=%d\n", s);
	return 0;
}