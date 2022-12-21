#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// 判断素数
bool is_prime(int n)
{
	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n % i == 0)
			return false;
	}

	return true;
}

// 打印并统计100~200之间素数的个数
int main()
{
	int count = 0;
	for (int i = 100; i <= 200; ++i)
	{
		if (is_prime(i))
		{
			++count;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}