#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
	//char a = 176, b = 219;
	//printf("%c%c%c%c%c\n", b, a, a, a, b);
	//("%c%c%c%c%c\n", a, b, a, b, a);
	//printf("%c%c%c%c%c\n", a, a, b, a, a);
	//printf("%c%c%c%c%c\n", a, b, a, b, a);
	//printf("%c%c%c%c%c\n", b, a, a, a, b);
	//return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    int i, j;
    SetConsoleOutputCP(437);
    char a = 176, b = 219;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == j || (i + j + 1) == 5)
                printf("%c", b);
            else
                printf("%c%c", a, a);
        }
        printf("\n");
    }
}