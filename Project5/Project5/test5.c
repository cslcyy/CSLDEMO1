#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z, t;
	printf("\n��������������:\n");
	scanf("%d%d%d", &x, &y, &z);
	if (x > y) {  /*����x,y��ֵ*/
		t = x; x = y; y = t;
	}
	if (x > z) {  /*����x,z��ֵ*/
		t = z; z = x; x = t;
	}
	if (y > z) {  /*����z,y��ֵ*/
		t = y; y = z;
	}
	printf("��С��������:%d %d %d\n", x, y, z);
}