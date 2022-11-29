#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	
	printf("max: %d\n", a > b ? a : b);
	printf("min: %d\n", a < b ? a : b);

	return 0;
}