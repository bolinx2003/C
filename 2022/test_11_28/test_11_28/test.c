#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int a1 = a;
	int b1 = b;

	int m = 0;
	int lcm = 0;
	while (m = a1%b1)
	{
		a1 = b1;
		b1 = m;
	}
	lcm = b1;

	printf("lcm = %d\n", lcm);

	int gcd = a * b / lcm;
	printf("gcd = %d\n", gcd);

	return 0;
}